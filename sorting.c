#include<stdio.h>
#define MAX_SIZE 1000
int main()
{
    int arr[MAX_SIZE];
    int i,N,j,temp;

    printf("Enter size of array: ");
    scanf("%d",&N);

    printf("Enter %d elements in the array :",N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
   
    for(i=0;i<N;i++)
    {
        for(j=i+1; j<N;j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\nAscending order :");
    for(i= 0;i<N;i++)
    {
        printf("%d\t",arr[i]);
    }
     
       return 0;
}