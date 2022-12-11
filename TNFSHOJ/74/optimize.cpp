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

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x , now , str_size , period ;
    string str ;
    char first , current ;
    while (cin>>str)
    {
        // 令 x 在字串索引為 0 的位置，now 在字串索引為 1 的位置
        str_size = str.size() , x = 0 , period = -1 , first = str[0] ;
        // 遍歷字串
        for (now=1 ; now<str_size ; ++now)
        {
            current = str[now] ;
            // 檢查兩個字元是否相同，如果相同，取 period 為 now-x 並遞增 x
            if (current==str[x]) period = now - x ,  ++x ;
            // 如果字串的索引 now 與 x 的字元不相同，則與索引 0 的位置進行比較
            // 若兩個字元相同，則設 period 為 now，並把 x 更新到索引 1 的位置
            else if (current==first) x = 1 , period = now ;
            // 若沒有匹配的字元，則設 period 為 -1，並更新 x 為 0
            else period = -1 , x = 0 ;
        }
        // 如果 period 長度為字串長的因數，則從 0~period-1 的字串為最短循環子字串
        if (str_size % period==0) cout << str.substr (0 , period) << '\n' ;
        // 若不是因數，則輸出整個字串
        else cout << str << '\n' ;
        cout << flush ;
    }
    return 0;
}