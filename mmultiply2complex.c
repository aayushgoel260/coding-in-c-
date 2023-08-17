#include<stdio.h>
struct complex{
    int real;
    int img;

};
void input(struct complex *x){
    printf("Enter real part of complex no.");
    scanf("%d",&x->real);
    printf("Enter imaginary part of complex no");
    scanf("%d",&x->img);
}
void display(struct complex *x){
    printf("%d + %di",x->real,x->img);
}
struct complex multiply(struct complex *x1,struct complex *x2){
    struct complex res;
    res.real=(x1->real*x2->real)-(x1->img*x2->img);
    res.img=(x1->img * x2->real)+(x1->real* x2->img);
    return res;
}
int main(){
    struct complex x1,x2,res;
    input(&x1);
    input(&x2);
    res=multiply(&x1,&x2);
    display(&res);
    return 0;
}