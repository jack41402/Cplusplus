#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    int c , n , i , j ;
    double sum , ave , count , percentage ;
    cin >> c ;
    for (i=1 ; i<=c ; ++i)
    {
        cin >> n ;
        vector<int> arr(n) ;
        for (j=0 , sum=0 ; j<n ; ++j)
        {
            cin >> arr[j] ;
            sum += arr[j] ;
        }
        ave = sum / n ;
        for (j=0 , count=0 ; j<n ; ++j)
        {
            if (arr[j]>ave)
            {
                count++ ;
            }
        }
        percentage = 100 * (count / n) ;
        cout << fixed << setprecision(3) << percentage << "%" << endl ;
    }
    return 0;
}
