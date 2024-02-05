//Repeted Array
#include<stdio.h>
#include<conio.h>
int main(){
    int n,i,digit,a[10]={};
    printf("Enter any number: ");
    scanf("%d", &n);
    while (n>0)
    {
        digit= n%10;
        a[digit]++;
        n=n/10;
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d appears %d times.\n", i,a[i]);
    }
    getch();
    return 0;  
}