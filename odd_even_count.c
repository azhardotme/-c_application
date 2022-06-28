#include<stdio.h>
#define MAX_SIZE 1000
int main()
{
    int arr[MAX_SIZE];
    int i,N,odd,even;

    printf("Enter size of array: ");
    scanf("%d",&N);

    printf("Enter %d elements in the array :",N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }

     odd = 0;
     even = 0;

     for(i=0;i<N;i++)
     {
        if(arr[i]%2 == 0)
        {
            even++;
        }else
        {
            odd++;
        }
     }

    printf("Total Odd elements = %d\n",odd);
    printf("Total Even elements = %d\n",even);
    return 0;
}