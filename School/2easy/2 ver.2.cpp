#include <iostream>

using namespace std;

int main()
{
	int N , i , j , temp ;
	cout << "�аݧA�ݭn�ƧǴX�ӼƭȡH" << endl ;
	cin >> N ;
	int arr[N] ;
	cout << "�Ш̧ǿ�J�n�ƧǪ��ƭȡA�C��J�����@�ȫ�A���UEnter�T�{�A�����J����" << endl ;
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
	cout << "�ƧǦn���}�C�� �G " << endl ;
	for (i=0 ; i<N ; i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl ;
    return 0;
}
