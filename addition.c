#include<stdio.h>
int main()
{
    int no1=0;
    int no2=0;
    int ans=0;

    printf("enter the value of no1 and no2\n");
    scanf("%d\n%d",&no1,&no2);
    ans=no1+no2;
    printf("addition of no1+no2 is..%d",ans);
    return 0;
}