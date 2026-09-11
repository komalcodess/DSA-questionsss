#include <stdio.h>
#include <stdlib.h>

int main()
{
   int m,n;
   scanf("%d %d",&m,&n);
   int mat[m][n];
   for(int i=0;i<m;i++)
   {
       for(int j=0;j<n;j++)
       {
           scanf("%d",&mat[i][j]);
       }
   }

   int row=0,col=n-1;
   int maxRow=-1;

   while(row<m && col>=0)
   {
       if(mat[row][col]==1)
       {
           maxRow=row;
           col=col-1;
       }
       else{
        row=row+1;
       }
   }
   printf("%d",maxRow+1);


}
