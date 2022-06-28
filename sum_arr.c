#include<stdio.h>
#define MAX_SIZE 1000
int main()
{
    int arr[MAX_SIZE];
    int i,N,sum=0;

    printf("Enter size of array: ");
    scanf("%d",&N);

    printf("Enter %d elements in the array :",N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }

        for(i=0; i<N;i++)
    {
        sum = sum + arr[i];
    }

    printf("Sum of all elements of array = %d",sum);
    
    return 0;
}