#include <stdio.h>

int arr[100]={0} ;

int main()
{
    arr[0] = 1 ;
    for (int i=2 ; i<=50 ; ++i)
    {
        for (int j=0 ; j<100 ; ++j)
        {
            arr[j] *= i ;
        }
        int temp=0 ;
        for (int j=0 ; j<100 ; ++j)
        {
            arr[j] += temp ;
            temp = arr[j]/10 ;
            arr[j] %= 10 ;
        }
    }
    int flag=1 ;
    for (int i=99 ; i>=0 ; --i)
    {
        if (arr[i]==0 && flag) continue ;
        else flag=0 ;
        printf ("%d" , arr[i]) ;
    }
}