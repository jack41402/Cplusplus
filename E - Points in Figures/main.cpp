#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
#include <cmath>

using namespace std;

vector<tuple<int , double , double , double , double>> rectangle;
vector<tuple<int , double , double , double>> circle ;
vector<int> record ;

int findr(double x , double y)
{
    double a , b , c , d ;
    for (int i=0 ; i<rectangle.size() ; ++i)
    {
        a = get<1>(rectangle[i]) ;
        b = get<2>(rectangle[i]) ;
        c = get<3>(rectangle[i]) ;
        d = get<4>(rectangle[i]) ;
        if (x>a && x<c && y>d && y<b)
        {
            record.emplace_back(get<0>(rectangle[i])) ;
        }
    }
}

int findc(double x , double y)
{
    double a , b , c ;
    for (int i=0 ; i<circle.size() ; ++i)
    {
        a = get<1>(circle[i]) ;
        b = get<2>(circle[i]) ;
        c = get<3>(circle[i]) ;
        if (pow(x-a , 2) + pow(y-b , 2) < pow(c , 2))
        {
            record.emplace_back(get<0>(circle[i])) ;
        }
    }
}

int main()
{
    double a , b , c , d , x , y ;
    char ch ;
    int i=1 ;
    while (true)
    {
        cin >> ch ;
        if (ch=='c')
        {
            cin >> a >> b >> c ;
            circle.emplace_back(i , a , b , c) ;
        }
        else if (ch=='r')
        {
            cin >> a >> b >> c >> d ;
            rectangle.emplace_back(i , a , b , c , d) ;
        }
        else if (ch=='*')
        {
            break ;
        }
        i++ ;
    }
    i=1 ;
    while (true)
    {
        record.clear() ;
        cin >> x >> y ;
        if (x==9999.9 && y==9999.9)
        {
            break ;
        }
        findr(x , y) ;
        findc(x , y) ;
        if (record.empty())
        {
            cout << "Point " << i << " is not contained in any figure" << endl ;
            i++ ;
            continue ;
        }

        sort (record.begin() , record.end()) ;
        for (int k=0 ; k<record.size() ; ++k)
        {
            cout << "Point " << i << " is contained in figure " << record[k] << endl ;
        }
        i++ ;
    }
    return 0;
}