#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size;
    printf("Please enter how many elements you want to insert:\n");
    scanf("%d",&size);
    int *arr;
    arr=(int *)malloc(sizeof(int)*size);
    //store elements in the array
    for (int i = 0; i < size; i++)
    {
        printf("\nPlease enter element into the position:%d",i);
        scanf("%d",(arr+i));
    }
    //printting the content of the array
    for (int j = 0; j < size; j++)
    {
        printf("a[%d]",*(arr+j));
    }
    
    return 0;
}