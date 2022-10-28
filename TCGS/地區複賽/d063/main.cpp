#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int i , H[2]={0} , M[2]={0} , S[2]={0} , s1 , s2 , sum ;
    int h , m , s ;
    int j=10 , k=10 , l=10 ;
    string t1 , t2 ;
    cin >> t1 >> t2 ;
    for (i=0 ; i<8 ; i++)
    {
        if (i==0 || i==1)
        {
            H[0] += (t1[i]-'0') * j ;
            H[1] += (t2[i]-'0') * j ;
            j /= 10 ;
        }
        else if (i==3 || i==4)
        {
            M[0] += (t1[i]-'0') * k ;
            M[1] += (t2[i]-'0') * k ;
            k /= 10 ;
        }
        else if (i==6 || i==7)
        {
            S[0] += (t1[i]-'0') * l ;
            S[1] += (t2[i]-'0') * l ;
            l /= 10 ;
        }
    }
    s1 = H[0]*3600 + M[0]*60 + S[0] ;
    s2 = H[1]*3600 + M[1]*60 + S[1] ;
    if (s1<=s2)
    {
        sum = abs (s1-s2) ;
        h = sum / 3600 ;
        sum %= 3600 ;
        m = sum / 60 ;
        sum %= 60 ;
        s = sum ;
    }
    if (s1>s2)
    {
        sum = abs (s1-s2) ;
        h = 23 - sum / 3600 ;
        sum %= 3600 ;
        m = 59 - sum / 60 ;
        sum %= 60 ;
        s = 60 - sum ;
    }
    cout << setw(2) << setfill('0') << h << ":" << setw(2) << setfill('0') << m << ":" << setw(2) << setfill('0') << s << endl ;
    return 0;
}
