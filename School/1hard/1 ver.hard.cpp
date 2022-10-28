#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float sum , subsum[5]={0} , subA[5]={0} , subF[5]={0} , subcompare[5]={0} ;
	float score[7][5]=
	{{86 , 92 , 57 , 81 , 65} , {96 , 98 , 81 , 67 , 74} ,
    {91 , 40 , 92 , 78 , 67} , {68 , 88 , 50 , 89 , 78} ,
    {87 , 96 , 70 , 62 , 68} , {84 , 75 , 94 , 56 , 90} , {57 , 63 , 92 , 95 , 73}};
	int i , j , F , ave ;
	cout << "座號\t國文\t英文\t數學\t自然\t社會\t總分\t平均\t等第\t不及格" << endl;
	for (i=0 ; i<7 ; i++)
    {
		cout << " " << i+1 << " \t" ;
		for (j=0 , sum=0 , F=0 ; j<9 ; j++)
		{
		    if (j<5)
		    {
		        cout << score[i][j] << "\t" ;
		        if (score[i][j]<60)
                {
                    F++ ;
                    subF[j]++ ;
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
                ave = sum / 5 ;
                cout << ave << "\t" ;
            }
            else if (j==7)
            {
                if (ave>=90)
                {
                    cout << "優" << "\t" ;
                }
                else if (ave<90 && ave>=80)
                {
                    cout << "甲" << "\t" ;
                }
                else if (ave<80 && ave>=70)
                {
                    cout << "乙" << "\t" ;
                }
                else if (ave<70 && ave>=60)
                {
                    cout << "丙" << "\t" ;
                }
                else
                {
                    cout << "丁" << "\t" ;
                }
            }
            else
            {
                cout << F << endl ;
            }
		}
	}
	for (i=0 ; i<5 ; i++)
    {
        for (j=0 ; j<7 ; j++)
        {
            if (score[j][i]>subcompare[i])
            {
                subcompare[i] = score[j][i] ;
            }
        }
    }
	cout << "總分\t" ;
	for (i=0 ; i<5 ; i++)
    {
        cout << subsum[i] << "\t" ;
    }
    cout << endl << "平均\t" ;
    for (i=0 ; i<5 ; i++)
    {
        cout << fixed << setprecision(2) << subsum[i] / 7 << "\t" ;
    }
    cout.unsetf( ios::fixed );
    cout << endl << "不及格\t" ;
    for (i=0 ; i<5 ; i++)
    {
        cout << subF[i] << "\t" ;
    }
    cout << endl << "最高分\t" ;
	for (i=0 ; i<5 ; i++)
    {
        cout << subcompare[i] << "\t" ;
    }
    cout << endl << "九十分\t" ;
    for (i=0 ; i<5 ; i++)
    {
        cout << subA[i] << "\t" ;
    }
    cout << endl ;
 	return 0;
}
