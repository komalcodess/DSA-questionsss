    #include <stdio.h>

    int main()
    {
      int n;
      scanf("%d",&n);

      int mat[n][n];
      int prev,curr;

      for(int i= 0; i<n;i++)
      {
          for(int j= 0; j<n;j++)
          {
              scanf("%d",&mat[i][j]);
          }
      }

      int top=0,bottom=n-1,left=0,right=n-1;

      while(top<bottom && left<right)
      {
          prev=mat[top+1][left];

          for(int i =left;i<=right;i++)
          {
              curr=mat[top][i];
              mat[top][i]=prev;
              prev=curr;
          }
          top++;

          for(int i= top;i<= bottom;i++)
          {
              curr=mat[i][right];
              mat[i][right]=prev;
              prev=curr;
          }
          right--;

          for(int i= right;i >=left;i--)
          {
              curr= mat[bottom][i];
              mat[bottom][i]=prev;
              prev=curr;
          }
          bottom--;

          for(int i =bottom;i>= top;i--)
          {
              curr=mat[i][left];
              mat[i][left]=prev;
              prev=curr;
          }
          left++;
      }

      for(int i =0;i<n;i++)
      {
          for(int j=0;j< n;j++)
          {
              printf("%d ",mat[i][j]);
          }
          printf("\n");
      }

      return 0;
    }
