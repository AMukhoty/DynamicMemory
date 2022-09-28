#include<stdlib.h>
#include<stdio.h>
int main()
{
    int size,*arr;
    printf("Pls enter the number of elements:");
    scanf("%d",&size);
    if(arr==NULL)
    {
        printf("Array cannot be allocated!!");
    }
    arr =(int *)calloc(size,sizeof(int));
    for(int i=0;i<size;i++)
    {
        printf("\nPlease enter element at location %d:",i);
        scanf("%d",(arr+i));
    }
    printf("the original array is:\n");
    for(int j=0;j<size;j++)
    {
        printf("%d\n",*(arr+j));
    }
    int new_size;
    printf("Pls enter the number of elements to be inserted:");
    scanf("%d",&new_size);
    int *arr1;
    arr1=(int *)realloc(arr,sizeof(int)*new_size);
    for(int j=size;j<size+new_size;j++)
    {
        printf("Pls enter the element at %d location",j);
        scanf("%d",arr1+j);
    }
    printf("The new array inserted is:");
    for(int i=0;i<new_size+size;i++)
    {
        printf("%d\n",*(arr1+i));
    }
    free(arr1);
    free(arr);
    return 0;
}