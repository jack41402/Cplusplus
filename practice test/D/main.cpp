#include<bits/stdc++.h>

using namespace std;

#define  pb push_back

struct line_up
{
    int l , r , num ;
};

vector<line_up>line ;

bool cmp(line_up a , line_up b)
{
    return a.l < b.l;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n , q ;
    cin >> n >> q ;
    for(int i=1 ; i<=n ; i++)
    {
        line.pb({i-1 , i+1 , i}) ;
    }
    while(q--)
    {
        int r1 , r2 ;
        cin >> r1 >> r2 ;
        //  r2 - 1 = index
        /*if(r1-2 < 0)
        {
            line[r2-1].l = 0 ;
        }
        else line[r2-1].l = line[r1-1].l ;
        line[r1-1].l = line[r2-1].num ;*/
        line[r2].l=line[r2-1].l;

        line[r2-1].l = line[r1-1].l;

        line[r1-1].l = line[r2-1].num;
    }
    sort(line.begin() , line.end() , cmp) ;
    for(int i=0 ; i<line.size() ; i++)
    {
        cout << line[i].num << " " ;
    }
    return 0;
}