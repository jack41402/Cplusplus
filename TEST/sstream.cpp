#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    stringstream ss ;
    string str , temp ;
    int N ;
    cin >> N ;
    for (int i=1 ; i<=N ; i++)
    {
        getline (cin , str) ;
        ss.str("");
        ss.clear();
        ss << str ;
        while (1)
        {
            if (ss.fail())
            {
                break ;
            }
            temp = "" ;
            ss >> temp ;
            cout << temp << endl ;
        }
    }
    return 0;
}
