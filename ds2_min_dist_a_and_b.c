#include <stdio.h>
#include <stdlib.h>

int main()
{
  int tc;
  scanf("%d",&tc);

  while(tc--){
    int n,a,b;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d %d",&a,&b);

int last=-1,min=n+1;

  for(int i=0;i<n;i++)
  {
      if(arr[i]==a || arr[i]==b)
      {
         if(arr[i]!=arr[last] && last!=-1)
         {
              if(min>i-last)
              {
                  min=i-last;
              }
         }
          last=i;
      }

}
  printf("%d\n", min);
}
}
