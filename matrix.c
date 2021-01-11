#include<stdio.h>
void getMatrixElements(int matrix[][10], int row, int column)
{
printf("enter elements:");
for(int i=0;i<row;++i)
{
for(int j=0;j<column;++j)
{
printf("enter %d%d",i=1,j=1);
scanf("%d",&matrix[i][j]);
}
}
}
void multiplyMatrices(int first[][10], int second[][10], int result[][10],int r1,int c1,int r2,int c2,int r3,int c3,int r4,int c4,int r5,int c5)
{
for(int i=0;i<r1;++i)
{
for(int j=0;j<c2;j++)
{
result[i][j]=0;
}
}
for(int i=0;i<r1;++i)
{
for(int j=0;j<c2;j++)
{
for(int k=0;k<c1;++k)
{
result[i][j] +=first[i][k]*second[k][j];
}
}
}
void display(int result[][10], int row,int column)
{
printf("output matrix");
for(int i=0;i<row;++i)
{
for(int j=0;j<column;++j)
{
printf("%d",result[i][j]);
if(j==column-1)
printf("\n");
}
}
int main()
{
int first[10][10],second[10][10],third[10][10],fourth[10][10],fifth[10][10],result[10][10],r1,c1,r2,c2,r3,c3,r4,c4,r5,c5;
printf("enter the rows and columns for the matrix");
scanf("%d%d",&r1,&c1)
while(c5!=r5)
{
printf("error");
getMatrixElements(r1,c1,r2,c2,r3,c3,r4,c4,r5,c5);
display(r1,c1,r2,c2,r3,c3,r4,c4,r5,c5);
return 0;
}
