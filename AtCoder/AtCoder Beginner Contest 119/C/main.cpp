#include <iostream>
#include <algorithm>

using namespace std;

int bamboo[10] ;
int  n , A , B , C ;

int dfs (int i , int a , int b , int c)
{
    if (i==n)
        //終止條件
    {
        if (a && b && c)
            //a、b、c 皆不可為 0
            //沒使用材料不可延長或縮短
        {
            return abs(a-A) + abs(b-B) + abs(c-C) ;
        }
        else return 1e9 ;
    }
    int x[4] ;
    //先合併再考慮延長或縮短
    x[0] = dfs (i+1 , a , b , c) ;                      //不使用第 i 段竹子
    x[1] = dfs (i+1 , a+bamboo[i] , b , c) + 10 ;   //第 i 段竹子與 a 合併
    x[2] = dfs (i+1 , a , b+bamboo[i] , c) + 10 ;   //第 i 段竹子與 b 合併
    x[3] = dfs (i+1 , a , b , c+bamboo[i]) + 10 ;   //第 i 段竹子與 c 合併
    sort(x , x+4) ;
    //cout << x[0] << endl ;
    return x[0] ;                                         //回傳最小值
    /*return *min_element(x , x+4) ;*/
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> A >> B >> C ;
    for (int i=0 ; i<n ; ++i)
    {
        cin >> bamboo[i] ;
    }
    cout << dfs (0 , 0 , 0 , 0) - 30  << '\n' ;
}