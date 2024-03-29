#include <iostream>
#include <vector>

using namespace std;

vector<int> arr(100 , -1) ;

int LIS(vector<int>& s , int N)
{
    // 不得不判斷的特例
    if (s.size() == 0) return 0;

    // 先放入一個數字，免得稍後 v.back() 出錯。
    vector<int> v;
    v.push_back(s[0]);

    for (int i = 1; i < N; ++i)
    {
        int n = s[i];

        if (n > v.back())
            v.push_back(n);
        else
            *lower_bound(v.begin(), v.end(), n) = n;
    }

    return v.size();
}

int main()
{
    int N ;
    cin >> N ;
    for (int i=0 ; i<N ; ++i)
    {
        cin >> arr[i] ;
    }
    cout << LIS(arr , N) << endl ;
    return 0;
}
