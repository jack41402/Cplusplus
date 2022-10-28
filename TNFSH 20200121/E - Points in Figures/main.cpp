#include <iostream>
#include <vector>
#include <utility>
#include <tuple>

using namespace std;

int main()
{
    int a , b , c , d ;
    char ch ;
    vector<tuple<int , int , int , int>> rectangle;
    vector<tuple<int , int , int>> circle ;
    while (true)
    {
        cin >> ch ;
        if (ch=='c')
        {
            cin >> a >> b >> c ;
            circle.push_back(make_tuple(a , b , c)) ;
        }
        else if (ch=='r')
        {
            cin >> a >> b >> c >> d ;
            rectangle.push_back(make_tuple(a , b , c , d)) ;
        }
        else if (ch=='*')
        {
            break ;
        }
    }
    return 0;
}
