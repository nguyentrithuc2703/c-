#include<stdio.h>
int main(){
    int n;
    printf("Nhap vao so nguyen n:");
    scanf("%d",&n);
    for(int i=0; i<=n; i++){
        if(n % 3 == 0){
            printf("%d",i);
        }
}
return 0;
}