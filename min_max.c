#include<stdio.h>
#define MAX_SIZE 100
int main()
{
    int arr[MAX_SIZE];
    int i,N,max,min;

    printf("Enter size of array: ");
    scanf("%d",&N);

    printf("Enter %d elements in the array :",N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for(i=1; i<N;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
printf("Maximum element = %d\n",max);
printf("Minimum element = %d\n",min);  
    
    return 0;
}