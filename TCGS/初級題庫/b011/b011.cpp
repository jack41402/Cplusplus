#include <iostream>

using namespace std;

int line(string input)
{
    int S , i ;
    S = 0 ;
    for (i=0 ; i<input.size() ; i=i+1)
    {
        if(input[i]-'0'>=0 && input[i]-'0'<=9)
        {
            S = S * 10 ;
            S = S + input[i]-'0' ;

        }
    }
    return S ;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string A , B , C ;
    cin >> A >> B >> C ;
    cout << line(A) + line(B) + line(C) << endl ;
    return 0;
}
