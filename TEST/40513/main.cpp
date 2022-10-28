#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int i ,arr[5] ,  F=0 , sum=0 ;
	for (i=0 ; i<5 ; i++)
    {
        cin >> arr[i] ;
        if (arr[i]<60)
        {
            F++ ;
        }
        sum += arr[i] ;
    }
    sort (arr , arr+5) ;
	cout << "最高分 " << arr[4] << " 分" << endl << "總分 " << sum << " 分" << endl << "平均 " << sum/5 << " 分" << endl ;
	cout << "不及格科數 " << F << " 科" << endl ;
	return 0;
}
