#include <stdio.h>
#include <string.h>
int main() {
    int n,i;
    char str[100];
    int len=0;
    int cnt=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",str);
        len+=strlen(str);
        if('a'==str[0])
        {
            cnt++;
        }
    }
    printf("%d %d",len,cnt);
    return 0;
}