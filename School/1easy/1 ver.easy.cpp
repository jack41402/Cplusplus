#include <iostream>

using namespace std;

int main()
{
	float sum ;
	int st=7 , sub=5 , r , c ;
	float score[st+2][sub+3]=
	{{86, 92, 57, 81, 65}, {96, 98, 81, 67, 74},
	{91, 40, 92, 78, 67}, {68, 88, 50, 89, 78},
	{87, 96, 70, 62, 68}, {84, 75, 94, 56, 90},{57,63,92,95,73}} ;
	for (r=0 ; r<st ; r++)
    {
		sum = 0 ;
        score[r][sub+2]=0 ;
        score[st+1][c]=0 ;
		for (c=0 ; c<sub ; c++)
        {
            sum += score[r][c] ;
            if (score[r][c]<60)
            {
                score[r][sub+2]++ ;
            }
            if (score[r][c]>=90)
            {
                score[st+1][c]++ ;
            }
            score[st][c] += score[r][c] ;
	    }
	    score[r][sub] = sum ;
    	score[r][sub+1] = sum / sub ;
    }
	cout << "�y��\t���\t�^��\t�ƾ�\t�۵M\t���|\t�`��\t����\t���ή�" << endl;
	for (r=0 ; r<st ; r++)
    {
		cout << r+1 << "\t" ;
		for (c=0 ; c<sub+3 ; c++)
		{
		    cout << score[r][c] << "\t" ;
		}
		cout << endl ;
	}
	cout<<"�`��\t" ;
	for(c=0 ; c<sub ;c++)
    {
		cout << score[st][c] << "\t" ;
	}
	cout << endl << "�E�Q��\t" ;
	for(c=0 ; c<sub ;c++)
    {
	   cout << score[st+1][c] << "\t" ;
	}
	cout << endl ;
 	return 0;
}