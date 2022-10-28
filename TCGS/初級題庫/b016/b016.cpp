#include <iostream>

using namespace std;

int main()
{
    int p=0 ;
    string A , B , answer="" ;
    cin >> A >> B ;
    int j=A.size()-1 , k=B.size()-1 ;
    while (j>=0 && k>=0)
    {
        answer += ((A[j]-'0')+(B[k]-'0') + p) % 10 + '0' ;
        p = ((A[j--]-'0')+(B[k--]-'0') + p) / 10 ;
    }
    while (j>=0)
    {
        answer += ((A[j]-'0') + p) % 10 + '0' ;
        p = ((A[j--]-'0') + p) / 10 ;
    }
    while (k>=0)
    {
        answer += ((B[k]-'0') + p) % 10 + '0' ;
        p = ((B[k--]-'0') + p) / 10 ;
    }
    if (p>0)
    {
        answer += p + '0' ;
    }
    for (int i=answer.size()-1 ; i>=0 ; i--)
    {
        cout << answer[i] ;
    }
    return 0;
}
