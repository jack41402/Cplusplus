#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i , j , subF[5]={0} , subcompare[5]={0} ;   //i�Bj����j��AsubF�[�`��줣�ή�H�ơAsubcompare��X���̰���
	float subsum[5]={0} , sum , score[6][5]=        //subsum�[�`�����ơAsum�[�`��@�ǥͦU�즨�Z
	{{86, 92, 57, 81, 65}, {96, 98, 81, 67, 74},
	 {91, 40, 92, 78, 67}, {68, 88, 50, 89, 78},
	 {87, 96, 70, 62, 68}, {84, 75, 94, 56, 90}};
	cout << "�y��\t���\t�^��\t�ƾ�\t�۵M\t���|\t�`��\t����" <<endl;
	//\t�ĤO���P��Tab��
	for (i=0 ; i<6 ; i++)                       //i���}�C0~5�A�O�ǥͮy��
    {
		cout << " " << i + 1 << " \t" ;
		for (j=0 , sum=0 ; j<7 ; j++)           //j��0~4�O�ҥئ��Z�A5�B6�O�`���Υ���
		{
		    if (score[i][j]<60 && j<5)          //�藍�ή�[��*
		    {
		        cout << score[i][j] << "*\t" ;
		        sum += score[i][j] ;            //�[�`�ǥͦ��Z
		        subF[j]++ ;
		        subsum[j] += score[i][j] ;      //�[�`��ئ��Z
		    }
		    else if (j<5)                       //�S�����ή�N�H�@��榡��X
            {
                cout << score[i][j] << " \t" ;
                sum += score[i][j] ;            //�[�`�ǥͦ��Z
                subsum[j] += score[i][j] ;      //�[�`��ئ��Z
            }
            else if (j==5)                      //�����y����A�`����b��6��A�Sj�q0�}�l�A�G�P�_����j==5
            {
                cout << sum << " \t";
            }
            else
            /*�P�W�z�z�ѡA������b��7��A��j��0~6���O�@�ص��G
            j��6�����G���W�z����A�쪺���p�A�G�i��else*/
            {
                cout << sum / 5 << endl ;
            }
		}
	}
	for (i=0 ; i<5 ; i++)
    {
        for (j=0 ; j<6 ; j++)
        {
            if (score[j][i]>subcompare[i])
            {
                subcompare[i] = score[j][i] ;
                /*��X�U��̤j�ȡA[j][i]����]�O�]����ؤ��ƬO�ѤW�ӤU�B�ѥ��ܥk���@�ƦC
                �Y��[i][j]�N�ѥ��ܥk�B�ѤW�ӤU���y*/
            }
        }
    }
    cout << "����\t";
    for (i=0 ; i<5 ; i++)
    {
        cout << fixed << setprecision(2) << subsum[i] / 6 << "\t" ;
        //fixed�Nsetprecision�榡�Ѥp���I��}�l��A�w�]���q�̤j��ƶ}�l��
        //��6��G / 6�Y������
    }
    cout << endl << "���ή�\t" ;
    for (i=0 ; i<5 ; i++)
    {
        cout << subF[i] << "\t" ;
        //��X�U�줣�ή�H��
    }
    cout << endl << "�̰���\t" ;
    for (i=0 ; i<5 ; i++)
    {
        cout << subcompare[i] << "\t" ;
        //��X�U��̰���
    }
    cout << endl ;
 	return 0;
}
