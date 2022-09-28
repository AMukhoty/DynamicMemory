#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size;
    printf("\nEnter how many elements you want to insert:");
    scanf("%d",&size);
    int *arr;//creating an array of size dynamically at the run time
    if(arr==NULL)
    {
        printf("\nArray could not be initialized!!");
    }
    arr =(int *)calloc(size,sizeof(int));
    for(int i=0;i<size;i++)
    {
        printf("\nPlease enter element at location %d:",i);
        scanf("%d",(arr+i));
    }
    for(int i=0;i<size;i++)
    {
        if(*(arr+i)>max)
        {
            max=*(arr+i);
        }
    }
    printf("the max element in the list is %d",max);
    free(arr);
    return 0;
}