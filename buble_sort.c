#include<stdio.h>

void buble_sort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {

                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }

        }

    }

}


int main()
{
    int n;
    printf("Enter the length of the array");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    buble_sort(arr,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
