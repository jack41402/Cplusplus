#include <iostream>
#include <set>

using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n , num , temp , count=1 ;
    cin >> n ;
    while (n--)
    {
        cin >> num ;
        set <long long int> s ;
        cout << "Case #" << count++ << ": " << num << " " ;
        while (num!=1)
        {
            if (s.find(num)!=s.end()) break ;
            s.emplace(num) ;
            temp = 0 ;
            while (num)
            {
                temp += (num%10) * (num%10) ;
                num /= 10 ;
            }
            num = temp ;
        }
        cout << "is " << ((num==1) ? "a Happy" : "an Unhappy") << " number.\n" ;
    }
    return 0;
}