#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int i2=1 , i3=1 , i5=1 ;
    vector<long long int> arr={0 , 1} ;
    for (int i=1 ; i<=1500 ; ++i)
    {
        while (arr[i2]*2<=arr[i]) i2++ ;
        while (arr[i3]*3<=arr[i]) i3++ ;
        while (arr[i5]*5<=arr[i]) i5++ ;
        long long int temp=min({arr[i2]*2 , arr[i3]*3 , arr[i5]*5}) ;
        arr.emplace_back(temp) ;
    }
    cout << "The 1500'th ugly number is " << arr[1500] << ".\n" ;
    return 0;
}