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
	cout << "�̰��� " << arr[4] << " ��" << endl << "�`�� " << sum << " ��" << endl << "���� " << sum/5 << " ��" << endl ;
	cout << "���ή��� " << F << " ��" << endl ;
	return 0;
}
