#include<stdio.h>
struct complex{
    int year;
    int month;
    int day;

};
void input(struct complex *x){
    printf("Enter year");
    scanf("%d",&x->year);
    printf("Enter month");
    scanf("%d",&x->month);
    printf("Enter day");
    scanf("%d",&x->day);
}
void display(struct complex *x){
    printf("%d / %d / %d",x->day,x->month,x->year);
}
int main(){
    struct complex x;
    input(&x);
    display(&x);
    return 0;
}