#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float sum , subsum[5]={0} , subA[5]={0} ;
	float score[7][5]=
	{{86 , 92 , 57 , 81 , 65} , {96 , 98 , 81 , 67 , 74} ,
    {91 , 40 , 92 , 78 , 67} , {68 , 88 , 50 , 89 , 78} ,
    {87 , 96 , 70 , 62 , 68} , {84 , 75 , 94 , 56 , 90} , {57 , 63 , 92 , 95 , 73}};
	int i , j , F ;
	cout << "座號\t國文\t英文\t數學\t自然\t社會\t總分\t平均\t不及格" << endl;
	for (i=0 ; i<7 ; i++)
    {
		cout << i+1 << " \t" ;
		for (j=0 , sum=0 , F=0 ; j<8 ; j++)
		{
		    if (j<5)
		    {
		        cout << score[i][j] << "\t" ;
		        if (score[i][j]<60)
                {
                    F++ ;
                }
                if (score[i][j]>=90)
                {
                    subA[j]++ ;
                }
		        sum += score[i][j] ;
		        subsum[j] += score[i][j] ;
		    }
            else if (j==5)
            {
                cout << sum << " \t";
            }
            else if (j==6)
            {
                cout << sum / 5 << "\t" ;
            }
            else
            {
                cout << F << endl ;
            }
		}
	}
	cout << "總分\t" ;
	for (i=0 ; i<5 ; i++)
    {
        cout << subsum[i] << "\t" ;
    }
    cout << endl << "九十分\t" ;
	for (i=0 ; i<5 ; i++)
    {
        cout << subA[i] << "\t" ;
    }
 	return 0;
}
