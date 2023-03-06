#include <iostream>

using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t , i , j , ans , sum ;
    string s ;
    bool c ;
    cin >> t ;
    for (i=1 ; i<=t ; ++i)
    {
        cin >> s ;
        for (j=0 , ans=0 , c=1 , sum=0 ; j<s.size() ; ++j)
        {
            if (s[j]=='1' && c==1)
            {
                c = 0 ;
            }
            else if (s[j]=='0' && c==0)
            {
                ans++ ;
            }
            else if (s[j]=='1' && c==0)
            {
                sum += ans ;
                ans = 0 ;
            }
        }
        cout << sum << endl ;
    }
    return 0;
}
