#include <iostream>

using namespace std;

string A , B ;
int p=0 ;

int time(string A , string B)
{
    string answer ;
    string temp[B.size()]="" ;
    int a=A.size()-1 , b=B.size()-1 ;       //±±¨î°}¦C
    int i , j , k , n , m ;                 //±±¨î°j°é
    for (i=b , n=0 ; i>=0 ; i-- , n++)
    {
        answer = "" ;
        for (j=1 ; j<=b-i ; j++)
        {
            answer += '0' ;
        }
        for (j=a , p=0 ; j>=0 ; j--)
        {
            answer += ((A[j]-'0')*(B[i]-'0') + p) % 10 + '0' ;
            p = ((A[j]-'0')*(B[i]-'0') + p) / 10 ;
        }
        if (p>0)
        {
            answer += p + '0' ;
        }
        for (m=answer.size()-1 ; m>=0 ; m--)
        {
            temp[n] += answer[m] ;
        }
    }
    for (i=0 ; i<=b-1 ; i++)    //j¡Bk±±¨î¦r¤¸
    {
        j = temp[i].size()-1 ;
        k = temp[i+1].size()-1 ;
        p = 0 ;
        answer = "" ;
        while (j>=0 && k>=0)
        {
            answer += ((temp[i][j]-'0')+(temp[i+1][k]-'0') + p) % 10 + '0' ;
            p = ((temp[i][j--]-'0')+(temp[i+1][k--]-'0') + p) / 10 ;
        }
        while (j>=0)
        {
            answer += ((temp[i][j]-'0') + p) % 10 + '0' ;
            p = ((temp[i][j--]-'0') + p) / 10 ;
        }
        while (k>=0)
        {
            answer += ((temp[i+1][k]-'0') + p) % 10 + '0' ;
            p = ((temp[i+1][k--]-'0') + p) / 10 ;
        }
        if (p>0)
        {
            answer += p + '0' ;
        }
        for (m=answer.size()-1 , temp[i+1]="" ; m>=0 ; m--)
        {
            temp[i+1] += answer[m] ;
        }
    }
    cout << temp[b] << endl ;
    return 0;
}
int main()
{
    cin >> A >> B ;
    time(A , B);
    return 0;
}
