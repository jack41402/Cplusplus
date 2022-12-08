#include <iostream>
#include <cstring>
#include <vector>

// https://stackoverflow.com/questions/6021274/finding-shortest-repeating-cycle-in-word
// https://www.zhihu.com/question/21923021

using namespace std;

// 找最短重複子字串
string getNext (string p)
{
    vector <int> nxt ;
    // next[0] 必然是 0
    nxt.emplace_back (0) ;
    // 所以從 next[1] 開始求
    int x=1 , now=0 ;
    while (x<p.size())
    {
        // 如果 p[now]==p[x]，則向右擴展一位
        if (p[now]==p[x])
        {
            now++ ;
            x++ ;
            nxt.emplace_back (now) ;
        }
        // 不匹配時，因為已知 x 的後綴與 now 的前綴相符，故縮小 now，改成 next[now-1]
        else if (now) now = nxt[now-1] ;
        // now 已經是 0，無法再縮小，故 next[x]=0
        else
        {
            nxt.emplace_back (0) ;
            x++ ;
        }
    }
    for (auto i : nxt) cout << i << ' ' ;
    cout << endl ;
    // 長度等於主字串長度減去 next 陣列的最後一位
    int len=(p.size() - nxt[nxt.size()-1]) ;
    // 若 len 不是主字串長度的因數，則回傳整個字串
    if (p.size()%len!=0) return p;
    // 否則回傳主字串從 0 到 len 的子字串
    return p.substr (0 , len) ;
}

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string str ;
    while (cin>>str)
    {
        cout << getNext (str) << endl ;
    }
    return 0;
}