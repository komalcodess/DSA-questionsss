 #include <stdio.h>
void findOccuring(int arr[], int n){
int temp=0,i=0;
while(i<n){
    temp=temp^arr[i];
    i++;
}
printf("%d",temp);
}


int main(){
int tc;
scanf("%d",&tc);
while(tc--){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    findOccuring(arr, n);
    }



