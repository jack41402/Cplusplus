//https://codeforces.com/problemset/problem/1178/B
//B. WOW Factor
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s ;
    cin >> s ;
    long long int w , wo , wow ;
    w = wo = wow = 0 ;
    for(int i=0 ; i<s.size()-1 ; ++i)
    {
        if(s[i]=='o')
        {
            //count wo
            wo += w ;
        }
        if(s[i]=='v' && s[i+1]=='v')
        {
            //count w
            w++ ;
            //count wow
            wow += wo ;
        }
    }
    cout << wow << '\n' ;
    return 0;
} 