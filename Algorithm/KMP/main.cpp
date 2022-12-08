#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

vector <int> nxt ;

int getNext (string *p)
{
    // next[0] 必然是 0
    nxt.emplace_back (0) ;
    // 所以從 next[1] 開始求
    int x=1 , now=0 ;
    while (x<p->size())
    {
        // 如果 p[now]==p[x]，則向右擴展一位
        if (p[now]==p[x])
        {
            now++ ;
            x++ ;
            nxt.emplace_back (now) ;
        }
        // 不匹配時，因為以知 x 的後綴與 now 的前綴相符，故縮小 now，改成 next[now-1]
        else if (now) now = nxt[now-1] ;
        // now 已經是 0，無法再縮小，故 next[x]=0
        else
        {
            nxt.emplace_back (0) ;
            x++ ;
        }
    }
    return 0;
}

void search (string *s , string *p)
{
    // tar: 主串匹配位置 , pos: 模式串匹配位置
    int tar=0 , pos=0 ;
    while (tar < s->size())
    {
        // 若兩個字元相等，則 tar, pos 各進一步
        if (s[tar]==p[pos]) tar++ , pos++ ;
        // 匹配失敗且 pos!=0 則依據 next 陣列移動標尺
        else if (pos) pos = nxt[pos-1] ;
        // 匹配失敗且 pos==0，直接右移一位
        else tar++ ;
        // 匹配成功
        if (pos==p->size())
        {
            // 輸出主串的匹配起點
            cout << tar-pos ;
            // 移動標尺
            pos = nxt[pos-1] ;
        }
    }
}

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string str , temp , find ;
    bool flag ;
    return 0;
}