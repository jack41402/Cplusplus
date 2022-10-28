#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n , c=0 ;
    string str ;
    cin >> n ;
    for (int i=0 ; i<n ; ++i)
    {
        for (int j=0 , c=0 ; j<13 ; ++j)
        {
            cin >> str ;
            if (!(str[0]=='1' || str[0]=='9' || str=="east" || str=="south" || str=="west" || str=="north" || str=="redmid" || str=="white" || str=="facai"))
            {
                c = 1 ;
            }
        }
        if (c==1)   cout << "QAQ!\n" ;
    }
    return 0;
}
