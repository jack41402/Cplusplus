#include <iostream>

using namespace std;

int hanoi(int n , int A , int C , int B)
{
    if (n!=0)
    {
        hanoi (n-1 , A , B , C) ;
        cout << "Ring " << n << " from " << A << " to " << C << endl ;
        hanoi (n-1 , B , C , A) ;
    }
}
int main()
{
    int n ;
    cin >> n ;
    hanoi (n , 1 , 3 , 2) ;
    return 0;
}
