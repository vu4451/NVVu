#include <stdio.h>
int main(){
    int a[100];
    int n,i;
    
    do{
        printf("Nhap mang n: ");
        scanf("%d",&n);
    }while(n<1 || n>100);
    
    for(int i=0;i<n;i++){
        printf("Nhap a[%d]: ",i+1);
        scanf("%d",&a[i]);
    }
    
    printf("So le cuoi cung trong mang la:  ");
    for(int i=n-1;i<=n;i++){
        if(a[i]%2!=0){
            printf("%d ",a[i]);
        }
    }
}
