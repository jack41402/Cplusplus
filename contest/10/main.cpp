#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> arr ;

int main()
{
    string str , temp;
    cin >> str ;
    temp = str.substr(1 , str.size()-2) ;
    str = temp ;
    stringstream ss(str) ;
    int cnt=0 ;
    while (getline(ss , temp , ','))
    {
        arr.emplace_back(temp) ;
        bool flag=true ;
        for(auto i : arr[cnt])
        {
            if (!('A'<=i && i<='Z')) flag=false ;
        }
        if (flag) reverse(arr[cnt].begin() , arr[cnt].end()) ;
        ++cnt ;
    }
    cout << '{' ;
    for (int i=0 ; i<arr.size() ; ++i)
    {
        cout << arr[i] ;
        if (i!= arr.size()-1) cout << ',' ;
    }
    cout << "}\n" ;
    return 0;
}
