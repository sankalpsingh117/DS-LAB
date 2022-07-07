#Find second maximum and second minimum of an input array.

#include<stdio.h>
int main()
{
    int arr[10],j,k;
    printf("Enter Numbers in Array\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=0;j<10;j++)
    {
        for(k=0;k<10;k++)
        {
            int swap;
            if(arr[j]>arr[k])
            {
                swap=arr[j];
                arr[j]=arr[k];
                arr[k]=swap;
             }
        }
    }
    printf("\nSecond Maximum  is %d\n",arr[1]);
    printf("Second Minimum is %d",arr[8]);
return 0;
}
