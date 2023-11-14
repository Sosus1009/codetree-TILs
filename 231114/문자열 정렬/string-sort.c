#include <stdio.h>
#include <string.h>
void sort(char a[], int len);
void swap(char *x, char *y);
int main() {
    int n,i;
    char arr[100];
    n=strlen(arr);
    scanf("%s",&arr[i]);
    sort(arr,strlen(arr));
    for(i=0;i<strlen(arr);i++)
    {
        printf("%c",arr[i]);
    }
    printf("\n");
    return 0;
}
void swap(char *x, char *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void sort(char a[], int len)
{
    int i,j;
    for(i=0;i<len-1;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(a[i]>a[j])
            {
                swap(&a[i],&a[j]);
            }
        }
    }
}