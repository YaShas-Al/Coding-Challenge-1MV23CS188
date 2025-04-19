#include<stdio.h>
#include<ctype.h>

int main()
{
    int n,i=0,j=0,len;
    char str[50],ch;
    
    printf("Enter a string:\n");
    gets(str);
    
    for (n=0;str[n]!='\0';n++) {
        if (isalpha(str[n])) {
            ch = toupper(str[n]);
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                i++;
            }    
            else
                j++;    
        }
    }
    printf("Vowels: %d\n",i);
    printf("Consonants: %d\n",j);
    return 0;
}