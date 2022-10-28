#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>

using namespace std;

int arr[13]={0} ;

int main()
{
    string str , sub ;
    int n=0 , sum=0 ;
    cin >> str ;
    for (int i=0 ; i<str.size() ; i+=3)
    {
        sub = str.substr(i , 3) ;
        if (n%2==1) reverse(sub.begin() , sub.end()) ;
        arr[n] = atoi(sub.c_str()) ;
        ++n ;
    }
    for (int i=0 ; i<n ; ++i)
    {
        sum += arr[i] ;
    }
    cout << sum%997 << '\n' ;
    return 0;
}
