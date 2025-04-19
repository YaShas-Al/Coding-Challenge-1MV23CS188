#include<stdio.h>

int main()
{
    int n,i,j,flag;
    printf("Enter a number greater than 1:\n");
    scanf("%d",&n);
    if (n > 1) printf("2\t");
    for (i=3;i<=n;i+=2) {
        flag = 1;
        for (j=3;j<=i/2;j++) {
            if (i % j == 0) {
                flag = 0;
                break;
            }    
        }
        if (flag == 1) {
            printf("%d\t",i);
        }
    }
    return 0;
}