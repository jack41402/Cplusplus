#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N , i ;
	cout << "�аݧA�ݭn�ƧǴX�ӼƭȡH" << endl ;
	cin >> N ;
	int arr[N] ;
	cout << "�Ш̧ǿ�J�n�ƧǪ��ƭȡA�C��J�����@�ȫ�A���UEnter�T�{�A�����J����" << endl ;
    for (i=0 ; i<N ; i++)
    {
        cin >> arr[i] ;
    }
    sort (arr , arr+N) ;
	cout << "�ƧǦn���}�C��" << endl;
	for (i=0; i<N ; i++)
		cout << arr[i] << " ";
 	return 0;
}
