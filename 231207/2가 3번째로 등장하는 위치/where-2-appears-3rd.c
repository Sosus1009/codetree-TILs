#include <stdio.h>

int main() {
    int n;
    int i,j;
    int c=0;
    int arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=0;j<n;j++)
    {
        if(arr[j]==2)
        {
            c=c+1;
            if(c==3)
            {
                printf("%d",j+1);
            }
        }
    }
    
    return 0;
}