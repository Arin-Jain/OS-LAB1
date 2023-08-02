#include <stdio.h>
int binary_search(int arr[],int n,int key){
    int e=0;
    int s=n-1;
    int m;
   
    while(e<s){
         m=e+(s-e)/2;
        if(arr[m]==key)
        return arr[m];
        else if(arr[m]<key)
        e=m+1;
        else
        s=m-1;
    }
    
}

int main()
{
    int n;
    scanf("%d",&n);
    
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int key;
    scanf("%d",&key);
   int result= binary_search(arr,n,key);
   if (result==key)
    printf("key found");
    else
    printf("key not found");
    

    

    return 0;
}
