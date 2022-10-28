#include <iostream>
#include <tuple>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

bool compare (const tuple<int , long long int , string> &i , const tuple<int , long long int , string> &j)
{
    if (get<0>(i)==5 && get<0>(j)==5)
    {
            return i<j;
    }
    else if (get<0>(i)==get<0>(j))
    {
        if (get<1>(i)==get<1>(j))
        {
            return i<j;
        }
        else
        {
            return i>j;
        }
    }
    else
    {
        return i<j;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N , M ;
    cin >> N >> M ;
    long long int  month , i , list ;
    map<string , int> title ;
    vector<tuple<int , long long int , string>> cat(N) ;
    string name , str ;
    title["elder"] = 1 ;
    title["nursy"] = 2 ;
    title["kit"] = 3 ;
    title["warrior"] = 4 ;
    title["appentice"] = 5 ;
    title["medicent"] = 6 ;
    title["deputy"] = 7 ;
    title["leader"] = 8 ;
    for (i=0 ; i<N ; ++i)
    {
        cin >> name >> str >> month ;
        cat[i] = make_tuple(title[str] , month , name) ;
    }
    sort (cat.begin() , cat.end() , compare) ;
    list = min(N , M) ;
    for (i=0 ; i<list ; ++i)
    {
         cout << get<2>(cat[i]) << "\n" ;
    }
    return 0;
}
