#include <stdio.h>

int main() {
    int a , b , c ;
    
  
    printf("Moi ban nhap vao canh dau tien  : ");
    scanf("%d", &a);
    printf("Moi ban nhap vao canh thu hai   : ");
    scanf("%d", &b);
    printf("Moi ban nhap vao canh thu ba    : ");
    scanf("%d", &c);
    if ( a + b >= c && a + c >= b && b + c >= a ) {
        printf(" la ba canh cua tam giac ");  
    } 
    else {
        printf ( " khong phai ba canh cua tam giac ");
    }
    return 0;
}