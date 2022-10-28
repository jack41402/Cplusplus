#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int number = 0 , sum[50] ;
    scanf("%d",&number);
    int total = 0;
    sum[0] = 0 ;
    sum[1] = 1 ;
    if(number == 0 || number == 1)
        printf("%d",&number);
    for(int i=2 ; i<=number ; i++)
    {
        sum[i] = sum[i-1] + sum[i-2];
        printf("%d\n" , sum[i]) ;
    }
//    printf("%d",sum[number]);
}
