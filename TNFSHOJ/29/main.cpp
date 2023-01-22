#include <iostream>

#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("sse,sse2,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("inline")
#pragma GCC optimize("-fgcse")
#pragma GCC optimize("-fgcse-lm")
#pragma GCC optimize("-fipa-sra")
#pragma GCC optimize("-ftree-pre")
#pragma GCC optimize("-ftree-vrp")
#pragma GCC optimize("-fpeephole2")
#pragma GCC optimize("-ffast-math")
#pragma GCC optimize("-fsched-spec")
#pragma GCC optimize("-falign-jumps")
#pragma GCC optimize("-falign-loops")
#pragma GCC optimize("-falign-labels")
#pragma GCC optimize("-fdevirtualize")
#pragma GCC optimize("-fcaller-saves")
#pragma GCC optimize("-fcrossjumping")
#pragma GCC optimize("-fthread-jumps")
#pragma GCC optimize("-funroll-loops")
#pragma GCC optimize("-fwhole-program")
#pragma GCC optimize("-freorder-blocks")
#pragma GCC optimize("-fschedule-insns")
#pragma GCC optimize("inline-functions")
#pragma GCC optimize("-ftree-tail-merge")
#pragma GCC optimize("-fschedule-insns2")
#pragma GCC optimize("-fstrict-aliasing")
#pragma GCC optimize("-fstrict-overflow")
#pragma GCC optimize("-falign-functions")
#pragma GCC optimize("-fcse-skip-blocks")
#pragma GCC optimize("-fcse-follow-jumps")
#pragma GCC optimize("-fsched-interblock")
#pragma GCC optimize("-fpartial-inlining")
#pragma GCC optimize("no-stack-protector")
#pragma GCC optimize("-freorder-functions")
#pragma GCC optimize("-findirect-inlining")
#pragma GCC optimize("-fhoist-adjacent-loads")
#pragma GCC optimize("-frerun-cse-after-loop")
#pragma GCC optimize("inline-small-functions")
#pragma GCC optimize("-finline-small-functions")
#pragma GCC optimize("-ftree-switch-conversion")
#pragma GCC optimize("-foptimize-sibling-calls")
#pragma GCC optimize("-fexpensive-optimizations")
#pragma GCC optimize("-funsafe-loop-optimizations")
#pragma GCC optimize("inline-functions-called-once")
#pragma GCC optimize("-fdelete-null-pointer-checks")

using namespace std;

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
                shift += max (1 , index-badchar[str[shift+index]]) ;
            }
            if (!flag) cout << "n\n" ;
        }
    }
    return 0;
}