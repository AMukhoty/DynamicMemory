#include<stdio.h>
#include<stdlib.h>
int **CreateMatrix(int rows,int columns)
{
    int **arr= (int **)malloc(sizeof(int)*rows);
    printf("Taking the array as input :\n");
    for(int i=0;i<rows;i++)
    {
        *(arr+i)=(int *)malloc(sizeof(int)*columns);
        for(int j=0;j<columns;j++)
        {
            printf("Pls enter the element at postion %d %d:",i,j);
            scanf("%d",(*(arr+i)+j));
            printf("\n");
        }
    }
    return arr;
}
void PrintMatrix(int **arr,int rows,int columns)
{
    printf("Printing the array:\n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            printf("%d\t",*(*(arr+i)+j));
        }
        printf("\n");
    }


}
int **MatrixSum(int **arr1,int **arr2,int rows,int columns)
{
    int **arr3=(int **)malloc(sizeof(int)*rows);
    for(int i=0;i<rows;i++)
    {
        *(arr3+i)=(int *)malloc(sizeof(int)*columns);
        for(int j=0;j<columns;j++)
        {
            *(*(arr3+i)+j)=*(*(arr1+i)+j)+*(*(arr2+i)+j);
        }
    }
return arr3;
}
int main()
{   
    int n,m; 
    printf("Enter the no of rows and columns you want to insert in the array:");
    scanf("%d %d",&n,&m);
    int **arr1=CreateMatrix(n,m);
    PrintMatrix(arr1,n,m);    
    int **arr2=CreateMatrix(n,m);
    PrintMatrix(arr2,n,m);
    int **arr_Sum=MatrixSum(arr1,arr2,n,m);
    PrintMatrix(arr_Sum,n,m);

}
