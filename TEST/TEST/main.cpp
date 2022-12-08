#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 建立一個 KMP 表來記錄每個子字串的訊息
vector<int> buildKMPTable(string s)
{
    vector<int> table(s.size()) ;
    int i=0 , j=1 ;
    while (i<s.size())
    {
        if (s[i]==s[j])
        {
            table[j] = i + 1 ;
            i++ , j++ ;
        }
        else if (i==0)
        {
            table[j] = 0 ;
            j++ ;
        }
        else i = table[i-1] ;
    }
    return table;
}

int main() {
    // 輸入字串
    string s;
    cin >> s;

    // 建立 KMP 表
    vector<int> table = buildKMPTable(s);

    // 找到最短的重複子字串
    int n=s.size() ;
    string result="" ;
    int count=0 ;
    int i=0 , j=1 ;
    while (j < n)
    {
        if (s[i] == s[j]) i++ , j++ ;
        else
        {
            if (i==0) j++ ;
            else
            {
                if (table[i-1] > 0 && j % (j-table[i-1]) == 0)
                {
                    // 如果找到了重複的子字串，且長度比之前的結果更短，則更新結果
                    if (result.empty() || table[i-1] < result.size())
                    {
                        result = s.substr(0, j - table[i - 1]);
                        count = j / (j - table[i - 1]);
                    }
                }
                i = table[i - 1];
            }
        }
    }

// 輸出結果
    cout << "substring: " << result << endl;
    cout << "count: " << count << endl;
    return 0;
}