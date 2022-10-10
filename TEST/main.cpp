#include <iostream>

using namespace std;

int main()
{
    //控制輸出層數與輸出的數字
    for (int i=1 ; i<=5 ;++i)
    {
        //輸出 i 個數字
        for (int j=1 ; j<=i ; ++j)
        {
            //輸出數字 i
            cout << i ;
        }
        //在每一行的最後換行
        cout << '\n' ;
    }
    return 0;
}
