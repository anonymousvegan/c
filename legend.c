#include <stdio.h>
void main(){
    int n;
    printf("Unesite broj za proveru: ");
    scanf("%d", &n);
    (n & 1) ? printf("Uneti broj je paran\n") : printf("Uneti broj je paran\n");
}