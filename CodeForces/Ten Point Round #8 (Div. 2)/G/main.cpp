#include <iostream>

using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q , n ;
    cin >> q ;
    while (q--)
    {
        int count=0 , cur , temp , flag=0 , head , tail ;
        cin >> n ;
        cin >> cur ;
        head = cur ;
        for (int i=1 ; i<n ; ++i)
        {
            cin >> temp ;
            if (cur>temp) count++ , flag=i ;
            cur = temp ;
        }
        tail = cur ;
        if ((count==0) || (count==1 && tail<=head)) cout << "Oh Yes " << flag << '\n' ;
        else cout << "No Nut\n" ;
    }
    return 0;
}
