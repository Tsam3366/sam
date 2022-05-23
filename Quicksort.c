#include<stdio.h>
void swap(int*a,int*b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
int partition(int a[],int start,int end)
{
    int pivot=a[start];
    int isSmaller=start;
    int isGreater=end;
    while(isSmaller<isGreater)
    {
        while(a[isSmaller]<=pivot)
        {
            isSmaller++;
        }
        while(a[isGreater]>pivot)
        {
            isGreater--;
        }
        if(isSmaller<isGreater)
        {
            swap(&a[isSmaller],&a[isGreater]);
        }
    }
    swap(&a[start],&a[isGreater]);
    return isGreater;
}
void Quicksort(int a[],int low,int high)
{
    if(low<high)
    {
        int value=partition(a,low,high);
        Quicksort(a,low,value-1);
        Quicksort(a,value+1,high);
    }
}
void print(int ar[],int v)
{
    for(int j=0;j<v;j++)
        printf("%d\n",ar[j]);
}
void main()
{
    printf("\n\n***QUICKSORT***\n");
    printf("Enter Array size:\n");
    int n;
    scanf("\n%d",&n);
    int arr[n];
    printf("Enter Array elements\n");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("Before Sorting:\n");
    print(arr,n);
    Quicksort(arr,0,n);
    printf("After Sorting:\n");
    print(arr,n);
}
