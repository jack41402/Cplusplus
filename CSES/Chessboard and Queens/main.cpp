#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> queen(8) ;
bool reserve[10][10]={false} ;

bool check (int pos)
{
    int i=pos , j=queen[pos] ;
    bool flag=false ;
    while (--i>=0 && --j>=0)
    {
        if (queen[i]==j)
        {
            flag = true ;
            break ;
        }
    }
    if (flag) return flag;
    i=pos , j=queen[pos] ;
    while (++i<8 && ++j<8)
    {
        if (queen[i]==j)
        {
            flag = true ;
            break ;
        }
    }
    if (flag) return flag;
    i=pos , j=queen[pos] ;
    while (--i>=0 && ++j<8)
    {
        if (queen[i]==j)
        {
            flag = true ;
            break ;
        }
    }
    if (flag) return flag;
    i=pos , j=queen[pos] ;
    while (++i<8 && --j>=0)
    {
        if (queen[i]==j)
        {
            flag = true ;
            break ;
        }
    }
    return flag;
}

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int ans=0 ;
    char ch ;
    for (int i=0 ; i<8 ; ++i)
    {
        for (int j=0 ; j<8 ; ++j)
        {
            cin >> ch ;
            if (ch=='*') reserve[i][j]=true ;
        }
    }
    for (int i=0 ; i<8 ; ++i) queen[i] = i ;
    do
    {
        bool flag=true ;
        for (int i=0 ; i<8 ; ++i)
        {
            if (reserve[i][queen[i]] || check(i))
            {
                flag = false ;
                break ;
            }
        }
        if (flag) ans++ ;
    }
    while (next_permutation(queen.begin() , queen.end())) ;
    cout << ans << '\n' ;
    return 0;
}
