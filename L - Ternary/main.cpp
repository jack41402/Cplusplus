#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N , i ;
    vector<int> ans ;
    while (true)
    {
        ans.clear() ;
        cin >> N ;
        if (N<0)
        {
            break ;
        }
        else if (N==0)
        {
            cout << 0 << endl ;
        }
        else
        {
            while (N != 0) {
                ans.push_back(N % 3);
                N /= 3;
            }
            for (i = ans.size() - 1; i >= 0; --i) {
                cout << ans[i];
            }
            cout << endl;
        }
    }
    return 0;
}
