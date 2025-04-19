#include<stdio.h>

int fib (int n) {
    int res,p = 0,q = 1;
    if (n == 1) {return 0;}
    if (n == 2) {return 1;}
    for (int i=2;i<n;i++) {
        res = p + q;
        p = q;
        q = res;
    }
    return res;
}
int main()
{
    int n,i;
    printf("Enter a number:\n");
    scanf("%d",&n);
    
    if (n > 0) {
        for (i=1;i<=n;i++) {
            printf("%d\n",fib(i));
        }
    }    
    return 0;
}