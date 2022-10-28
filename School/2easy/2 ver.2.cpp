#include <iostream>

using namespace std;

int main()
{
	int N , i , j , temp ;
	cout << "請問你需要排序幾個數值？" << endl ;
	cin >> N ;
	int arr[N] ;
	cout << "請依序輸入要排序的數值，每輸入完成一值後，按下Enter確認，直到輸入完成" << endl ;
	for (i=0 ; i<N ; i++)
    {
        cin >> arr[i] ;
    }
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
	cout << "排序好的陣列為 ： " << endl ;
	for (i=0 ; i<N ; i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl ;
    return 0;
}
