#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i , j , subF[5]={0} , subcompare[5]={0} ;   //i、j控制迴圈，subF加總單科不及格人數，subcompare找出單科最高分
	float subsum[5]={0} , sum , score[6][5]=        //subsum加總單科分數，sum加總單一學生各科成績
	{{86, 92, 57, 81, 65}, {96, 98, 81, 67, 74},
	 {91, 40, 92, 78, 67}, {68, 88, 50, 89, 78},
	 {87, 96, 70, 62, 68}, {84, 75, 94, 56, 90}};
	cout << "座號\t國文\t英文\t數學\t自然\t社會\t總分\t平均" <<endl;
	//\t效力等同於Tab鍵
	for (i=0 ; i<6 ; i++)                       //i為陣列0~5，是學生座號
    {
		cout << " " << i + 1 << " \t" ;
		for (j=0 , sum=0 ; j<7 ; j++)           //j的0~4是課目成績，5、6是總分及平均
		{
		    if (score[i][j]<60 && j<5)          //對不及格加註*
		    {
		        cout << score[i][j] << "*\t" ;
		        sum += score[i][j] ;            //加總學生成績
		        subF[j]++ ;
		        subsum[j] += score[i][j] ;      //加總科目成績
		    }
		    else if (j<5)                       //沒有不及格就以一般格式輸出
            {
                cout << score[i][j] << " \t" ;
                sum += score[i][j] ;            //加總學生成績
                subsum[j] += score[i][j] ;      //加總科目成績
            }
            else if (j==5)                      //扣除座號欄，總分位在第6欄，又j從0開始，故判斷式為j==5
            {
                cout << sum << " \t";
            }
            else
            /*同上述理由，平均位在第7欄，而j為0~6都是一種結果
            j為6的結果為上述未函括到的情況，故可用else*/
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
                /*找出各科最大值，[j][i]的原因是因為科目分數是由上而下、由左至右的作排列
                若為[i][j]將由左至右、由上而下掃描*/
            }
        }
    }
    cout << "平均\t";
    for (i=0 ; i<5 ; i++)
    {
        cout << fixed << setprecision(2) << subsum[i] / 6 << "\t" ;
        //fixed將setprecision格式由小數點後開始算，預設為從最大位數開始算
        //有6科故 / 6即為平均
    }
    cout << endl << "不及格\t" ;
    for (i=0 ; i<5 ; i++)
    {
        cout << subF[i] << "\t" ;
        //輸出各科不及格人數
    }
    cout << endl << "最高分\t" ;
    for (i=0 ; i<5 ; i++)
    {
        cout << subcompare[i] << "\t" ;
        //輸出各科最高分
    }
    cout << endl ;
 	return 0;
}
