#include <iostream>

using namespace std;

int good_suffix[55] ;

void GoodSuffix (string keyword)
{
    int keyword_size=keyword.length() ;
    int j=keyword_size-1 ;
    good_suffix[j] = keyword_size ;
    // 使用兩個指針i和j，從後往前遍歷關鍵字串。
    for (int i=j-1 ; i>=0 ; --i)
    {
        if (i>j-1 && good_suffix[keyword_size-1 - (j-i)] < i - good_suffix[i])
            good_suffix[i] = good_suffix[keyword_size-1 - (j-i)] ;
            // 當i和j指向的字符相同時，j向前移動，直到不匹配為止。
        else
        {
            j = i ;
            while (j>=0 && keyword[j]==keyword[keyword_size-1 - (j-i)]) j-- ;
            good_suffix[i] = j + 1 ;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t , n ;
    string str , keyword ;
    cin >> t ;
    while (t--)
    {
        cin >> str >> n ;
        while (n--)
        {
            cin >> keyword ;
            bool flag=false;
            int shift=0 , str_size=str.size() , keyword_size=keyword.size() ;
            int badchar[130]={0} ;
            // 建構壞字符表
            for (int i=0 ; i<keyword_size ; ++i) badchar[(int) keyword[i]] = i ;
            GoodSuffix(keyword) ;
            // 當關鍵字的位移量不大於主字串長度時執行
            while (shift<=(str_size-keyword_size))
            {
                int index=keyword_size-1 ;
                // 當後綴字元匹配時，減少 index 的值
                while (index>=0 && keyword[index]==str[index+shift]) index-- ;
                // 匹配時，即當 index 值小於 0 時
                if (index<0)
                {
                    cout << "y\n" ;
                    flag = true ;
                    break ;
                }
                // 不匹配時，增加位移量
                // 使壞字符與其在關鍵字中最後一次出現的位置對齊
                // max 函數用於保證正位移
                // 若關鍵字中最後一次出現的壞字符在右側，則可能得到負位移
                shift += max (good_suffix[index] , index-badchar[str[shift+index]]) ;
            }
            if (!flag) cout << "n\n" ;
        }
    }
}