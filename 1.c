#include<stdio.h>
int main()
{
    int a1=0,a2=1,term,n;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    printf("Fibonacci series%d%d",a1,a2);
    for(int i=3;i<n;i++)
    {
        term=a1+a2;
        printf("%d",term);
        a1=a2;
        a2=term;
    }
    return 0;
}
