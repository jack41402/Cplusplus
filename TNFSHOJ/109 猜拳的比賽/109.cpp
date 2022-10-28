#include <iostream>

using namespace std;

int main()
{
    int n , a , b , as=0 , bs=0 ;
    cin >> n ;
    for  (int i=1 ; i<=n ; i++)
    {
        cin >> a >> b ;
        if (a==0)
        {
            if (b==2)
                as = as + 1 ;
            else if (b==5)
                bs = bs +1 ;
        }
        else if (a==2)
        {
          if (b==0)
            bs = bs + 1 ;
        else if (b==5)
            as = as + 1 ;
        }
        else if (a==5)
        {
            if (b==0)
                as = as + 1 ;
            else if (b==2)
                bs = bs + 1 ;
        }
    }
    if (as==bs)
        cout << "The referee wins." << endl;
    else if (as>bs)
        cout << "The prince wins." << endl;
    else if (as<bs)
        cout << "The princess wins." << endl;
    return 0;
}
