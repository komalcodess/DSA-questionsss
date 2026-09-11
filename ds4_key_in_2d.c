#include <stdio.h>
#include <stdlib.h>
int searchMat(int n, int mat[n][n], int key){
int row=0, col=n-1;
 while (row < n && col >= 0){
if(mat[row][col]==key)
    return 1;
else if(mat[row][col]>key)
    col=col-1;
else
{
    row=row+1;
}
}
return 0;
}

int main()
{
    int n;
    scanf("%d",&n);
    int mat[n][n];
    for (int i=0; i<n; i++)
    {
        for (int j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    int key;
    scanf("%d",&key);
    if(searchMat(n,mat,key)==1)
        printf("Present");
    else
        printf("Not present");
}
