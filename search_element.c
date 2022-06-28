#include<stdio.h>
#define MAX_SIZE 1000
int main()
{
    int arr[MAX_SIZE];
    int i,N,toSearch,found;

    printf("Enter size of array: ");
    scanf("%d",&N);

    printf("Enter %d elements in the array :",N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nEnter element to search :");
    scanf("%d",&toSearch);

    found = 0;
    for(i=0;i<N;i++)
    {
        if(arr[i] == toSearch)
        {
            found =1;
            break;
        }
    }

    if(found == 1)
    {
        printf("\n%d is found at position %d",toSearch,i+1);
    }
    else
    {
        printf("\n%d is not found in the array",toSearch);
    }
     
       return 0;
}