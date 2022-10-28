#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N , i ;
	cout << "請問你需要排序幾個數值？" << endl ;
	cin >> N ;
	int arr[N] ;
	cout << "請依序輸入要排序的數值，每輸入完成一值後，按下Enter確認，直到輸入完成" << endl ;
    for (i=0 ; i<N ; i++)
    {
        cin >> arr[i] ;
    }
    sort (arr , arr+N) ;
	cout << "排序好的陣列為" << endl;
	for (i=0; i<N ; i++)
		cout << arr[i] << " ";
 	return 0;
}
