#include <iostream>
#include <sstream>

using namespace std;

int dight(string data)
{
    int answer , p , i ;
    answer = 0 ;
    p = 1 ;
    for (i=data.size()-1 ; i>=0 ; i=i-1)
    {
        answer += (data[i]-'0') * p ;
        p *= 10 ;
    }
    return answer;
}
int main()
{
    int maxi , c[3]={0} , i ;   //maxi = max index
    string input , temp ;
    stringstream data ;
    for (i=0 ; i<3 ; i=i+1)
    {
        getline (cin,input) ;
        data << input ;
        while (data>>temp)
        {
            c[i] += dight (temp) ;
        }
        data.clear() ;
    }
    maxi = 0 ;
    if (c[0]>c[1])
    {
        maxi = 0 ;
    }
    else
    {
        maxi = 1 ;
    }
    if (c[maxi]<c[2])
    {
        maxi = 2 ;
    }
    cout << maxi + 1 << " " << c[maxi] << endl ;
    return 0;
}
