#include <iostream>
#include <sstream>
#include <vector>

using namespace  std;

vector<int> arr(4 , -1) ;

int main()
{
    string str , ip ;
    int cnt=0 ;
    bool flag=0 ;
    cin >> str ;
    stringstream ss(str) ;
    while (getline( ss , ip ,'.'))
    {
        arr[cnt] = atoi(ip.c_str()) ;
        ++cnt ;
    }
    if (0<=arr[0] && arr[0]<=255 && 0<=arr[1] && arr[1]<=255 && 0<=arr[2] && arr[2]<=255 && 0<=arr[3] && arr[3]<=255) flag = 1 ;
    if (1<=arr[0] && arr[0]<=126 && flag==1) cout << "A\n" ;
    else if (128<=arr[0] && arr[0]<=191 && flag==1) cout << "B\n" ;
    else if (192<=arr[0] && arr[0]<=223 && flag==1) cout << "C\n" ;
    else if (224<=arr[0] && arr[0]<=239 && flag==1) cout << "D\n" ;
    else if (240<=arr[0] && arr[0]<=247 && flag==1) cout << "E\n" ;
    else if (flag==1)  cout << "X\n" ;
    if (flag==0) cout << "N\n" ;
    return 0;
}
