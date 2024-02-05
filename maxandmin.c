#include<stdio.h>
int main(){
    int min, max, i, n, a[100];
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    min=max=a[0];
    for(i=1; i<n; i++){
        if(a[i]>max){
            max= a[i];
        }
        else if(a[i]<min){
            min= a[i];
        }
    }
    printf("Max= %d, min= %d", max, min);
    return 0;
}
