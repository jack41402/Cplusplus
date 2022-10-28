#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

string str;
set<char> check ;
char ch ;
long long int n , index=0 ;

bool row(int i , int j)
{
    return (i/9==j/9);
}

bool column(int i , int j)
{
    return ((i-j)%9==0);
}

bool block(int i , int j)
{
    return (i/27==j/27 && i%9/3==j%9/3);
}

string sudoku(string map)
{
    long long int maxi=n*n*n*n ;
    string ans={} ;
    bool c[10] , flag=false ;
    vector<char> arr ;
    for (int i=index ; i<maxi ; ++i)
    {
        if (map[i]==ch)
        {
            flag = true ;
            index = i ;
            break ;
        }
    }
    if (flag==false) return map;
    for (int i=0 ; i<maxi ; ++i)
    {
        if (row(index , i) || column(index , i) || block(index , i))
        {
            arr.emplace_back(map[i]) ;
        }
    }
    set<char> s(arr.begin() , arr.end()) ;
    set<char> comp ;
    set_difference(check.begin() , check.end() , s.begin() , s.end() , inserter(comp , comp.begin())) ;
    for (auto i : comp)
    {
        map[index] = i ;
        ans += sudoku(map) ;
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string temp , map ;
    cin >> n >> temp ;
    ch = temp[0] ;
    str.assign(temp , 1 , temp.size()-1) ;
    for (int i=0 ; i<str.size() ; ++i)
    {
        check.insert(str[i]) ;
    }
    cout << n << endl << ch << endl << str << endl ;
    for (int i=0 ; i<n*n ; ++i)
    {
        cin >> temp ;
        map += temp ;
    }
    string ans ;
    ans = sudoku(map) ;
    cout << ans << endl ;
    return 0;
}
