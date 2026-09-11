#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tc;

    scanf("%d", &tc);

    while (tc--)
    {
        int n,k;
        scanf("%d", &n);
        int arr[n];

        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }

        scanf("%d",&k);

        if (k==0 || k==n)
        {
            for (int i=0;i<n;i++)
            {
                printf("%d ",arr[i]);
            }
        }
        else
        {
            int temp[k];
            for (int i=0;i<k;i++)
            {
            temp[i]=arr[i];
            }
            for (int i=k; i<n; i++)
            {
                arr[i-k ]=arr[i];
            }
            
            for(int i = 0;i <k;i++)
            {
                arr[n -k+i]=temp[i];
            }

            for (int i=0; i<n;i++)
            {
                printf("%d ",arr[i]);
            }
        }

        printf("\n");
    }

    return 0;
}