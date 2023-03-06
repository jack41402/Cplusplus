#include <iostream>

using namespace std;

int arr[500005]={0} , count[500005]={0} ;
bool visit[500005]={false} ;

int main()
{
    int n , ans=0 ;
    bool c=true ;
    cin >> n ;
    for (int i=0 ; i<n ; ++i)
    {
        cin >> arr[i] ;
        count[arr[i]]++ ;
        if (count[arr[i]]>1 || arr[i]==i) c=false ;
    }
    

}
