#include <stdio.h>
#include <string.h>
int main() {
    char st[10][21];
    char ch;
    int i,sw=0;
    int len=0;
    for(i=0;i<10;i++)
    {
        scanf("%s",st[i]);
    }
    scanf("%*c%c",&ch);
    for(i=0;i<10;i++)
    {
        len=strlen(st[i]);
        if(ch==st[i][len-1]){
            printf("%s\n",st[i]);
            sw=1;
        }
    }
    if(sw==0)
    printf("None");
    return 0;
}