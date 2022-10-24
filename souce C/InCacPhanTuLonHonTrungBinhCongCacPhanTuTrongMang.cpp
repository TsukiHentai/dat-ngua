#include<stdio.h>

//your function here

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    float sum=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    sum=sum/n;
    int dem=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=sum)
        {
            printf("%d ",a[i]);
            dem++;
        }
    }
    printf("\nSo phan tu thoa man: %d",dem);
}
