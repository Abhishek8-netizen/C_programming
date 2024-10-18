#include <stdio.h>

int main()
{
    int a[20],n,i,temp;

    printf("Enter n : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter the value for a[%d] : ",i);
        scanf("%d",&a[i]);
    }

    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }

    printf("\n");

    temp = a[0];
    for(i=0;i<n;i++)
    {
        a[i] = a[i+1];
    }
    a[n-1] = temp;

    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
