#include <iostream>
#include <stack>
#include <set>
#include <map>

using namespace std;

long long int count[260] , idx ;

long long int calculate (string str , int n)
{
    int temp = 0 ;
    for (int i=n ; i<str.size() ; ++i)
    {
        if ('0'<=str[i] && str[i]<='9')
        {
            temp *= 10 ;
            temp += str[i]-'0' ;
        }
        else
        {
            idx = i-1 ;
            break ;
        }
    }
    return temp;
}

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int temp ;
    string str , element ;
    stack<int> st ;
    map<string , int> mp ;
    set<string> name ;
    cin >> str ;
    idx = str.size() ;
    for (int i=0 ; i<str.size() ; ++i)
    {
        // 在 stack 中放入左括號所在的位置
        if (str[i]=='(') st.emplace(i) ;
        // 遇到右括號的時候，計算數字並把括號內的元素乘上該數字
        else if (str[i]==')')
        {
            temp = calculate(str , i+1) ;
            if (temp>1)
            {
                for (int j=st.top()+1 ; j<i ; ++j)
                {
                    count[j] *= temp ;
                }
                st.pop() ;
                i = idx ;
                idx = str.size() ;
            }
        }
        // 遇到數字就進行計算
        else if ('0'<=str[i] && str[i]<='9')
        {
            temp = calculate(str , i) ;
            count[i-1] *= temp ;
            i = idx ;
            idx = str.size() ;
        }
        // 是字母的地方就賦值為 1
        else count[i] = 1 ;
    }
    // 找出化學元素的名字，並計算元素的個數
    for (int i=0 ; i<str.size() ; ++i)
    {
        if ('A'<=str[i] && str[i]<='Z')
        {
            element = str[i] ;
            if (i+1<str.size() && ('a'<=str[i+1] && str[i+1]<='z'))
            {
                element += str[i+1] ;
                mp[element] += max(count[i] , count[i+1]) ;
            }
            else mp[element] += count[i] ;
            name.insert(element) ;
        }
    }
    cout << str << '\n' ;
    for (auto it : name)
    {
        cout << it << ':' << mp[it] << '\n' ;
    }
    return 0;
}
