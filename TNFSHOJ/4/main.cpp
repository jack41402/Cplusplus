#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t ;
    string temp ;
    cin >> t ;
    while (t--)
    {
        int n , l ;
        cin >> n >> l ;
        vector<vector<string>> str(n+1) ;
        for (int i=0 ; i<n ; ++i)
        {
            cin >> temp ;
            str[i].emplace_back(temp) ;
        }
        for (int i=0 ; i<n ; ++i)
        {
            cin >> temp ;
            str[i].emplace_back(temp) ;
        }
        //位元反轉
        for (int i=0 ; i<n ; ++i)
        {
            for (int j=0 ; j<l ; ++j)
            {
                if (str[i][0][j]=='0') str[i][0][j] = '1' ;
                else str[i][0][j] = '0' ;
            }
            cout << str[i][0] << endl ;
        }

        str.clear() ;
    }
    return 0;
}
