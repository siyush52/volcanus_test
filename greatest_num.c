#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("Enetr the value of a :- ");
    scanf("%d",&a);
    printf("Enetr the value of b:- ");
    scanf("%d",&b);
    printf("Enetr the value of c :- ");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("the value of a %d is greatest",a);
    }
    if(b>a && b>c){
        printf("the value of b-%d is greatest",b);
    }
    if(c>a && c>b){
        printf("the value of b-%d is greatest",c);

}
return 0;
}