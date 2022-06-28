#include<stdio.h>
#define MAX_SIZE 1000
int main()
{
    int arr[MAX_SIZE];
    int i,N;

    printf("Enter size of array: ");
    scanf("%d",&N);

    printf("Enter %d elements in the array :",N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n Array in revers order :");
     for(i=N-1;i>=0;i--)
     {
       printf("%d\t",arr[i]);
     }
   
    return 0;
}