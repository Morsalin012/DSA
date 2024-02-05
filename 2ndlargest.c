#include<stdio.h>
int main(){
    int large1,large2,n,a[100],i;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    large1=a[0];
    large2=a[1];
    for(i=2; i<n; i++){
        if(a[i]>large1){
            large1=a[i];
        }
        else if(a[i]<large1 && a[i]>large2){
            large2=a[i];
        }
    }
    printf("First Largest number= %d, Second Largest number= %d", large1, large2);
    return 0;
}

