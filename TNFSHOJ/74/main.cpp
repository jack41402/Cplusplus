#include <iostream>
#include <cstring>

using namespace std;

int getNext (int x , string *p)
{
    for (int i=x ; i<p->size() ; ++i)
    {
        if (p->substr(0, i)==p->substr(x - i + 1, x + 1)) return i;
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
        else if (pos) pos = next[pos-1] ;
        // 匹配失敗且 pos==0，直接右移一位
        else tar++ ;
        // 匹配成功
        if (pos==p->size())
        {
            // 輸出主串的匹配起點
            cout << tar-pos ;
            // 移動標尺
            pos = next[pos-1] ;
        }
    }
}

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string str , temp , find ;
    bool flag ;
    while (cin>>str)
    {
        find = "" ;
        for (int i=1 ; i<=str.size() ; ++i)
        {
            find += str[i-1] ;
            if (i>str.size()+1)
            {
                find = str ;
                break ;
            }
            if (str.size()%i!=0) continue ;
            flag = true ;
            for (int j=i ; j<str.size() ; j+=i)
            {
                temp = str.substr (j , i) ;
                if (temp!=find)
                {
                    flag = false ;
                    break ;
                }
            }
            if (flag) break ;
        }
        cout << find << '\n' ;
    }
    return 0;
}