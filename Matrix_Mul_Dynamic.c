#include<stdio.h>
#include<stdlib.h>
int ** Matrix_Initialise(int rows,int columns)
{   
    printf("taking array as input:\n");
    int **arr=(int **)malloc(rows*sizeof(int));
    for(int i=0;i<rows;i++)
    {
        *(arr+i)=(int *)malloc(sizeof(int)*columns);
        for(int j=0;j<columns;j++)
        {
            printf("Pls enter %d %d element:",i,j);
            scanf("%d",*(*(arr+i)+j));
        }
    }
return arr;
}
int ** Matrix_Mul(int **arr_result,int **arr1,int **arr2,int rows,int columns)
{   
    
    for(int i=0;i<rows;i++)
    {   
        
        for(int j=0;j<columns;j++)
        {
            for(int k=0;k<columns;k++)
            {
                *(*(arr_result+i)+j)+= (*(*(arr1+i)+k)) * (*(*(arr2+i)+j));
            }
        }
    }
return arr_result;

}
void PrintMatrix(int **arr,int rows,int columns)
{   
    printf("printing the array:");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            printf("%d\t",(*(*(arr+i)+j)));
        }
        printf("\n");
    }
}
int main()
{   
    int rows,columns;
    printf("pls enter the number of rows and columns required:");
    scanf("%d %d",&rows,&columns);
    int **arr1=Matrix_Initialise(rows,columns);
    PrintMatrix(arr1,rows,columns);
    int **arr2=Matrix_Initialise(rows,columns);
    PrintMatrix(arr2,rows,columns);
    int **arr_result=Matrix_Initialise(rows,columns);
    PrintMatrix(arr_result,rows,columns);
}