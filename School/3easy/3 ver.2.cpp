#include <iostream>

using namespace std;

int main()
{
	int N=8 , arr[N]={20, 18, 34, 79, 24, 95, 74, 13} , temp , i , j , median ;
	for(i=0 ; i<N-1 ; i++)
    {
        for (j=0 ; j<N-i-1 ; j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp = arr[j] ;
                arr[j] = arr[j+1] ;
                arr[j+1] = temp ;
            }
        }
    }
    median = (arr[3]+arr[4]) / 2 ;
    cout << "�̤j�� �G " << arr[7] << endl ;
    cout << "���p�� �G " << arr[1] << endl ;
    cout << "����� �G " << median << endl ;
    if (34!=median)
    {
        cout << "34 is not the median !" << endl ;
    }
    else
    {
        cout << "34 is the median !" << endl ;
    }
 	return 0;
}
