#include<stdio.h>
int main(){
    float n1,n2,sol;
    int ch;
    printf("Enter value of 1st number:");
    scanf("%f",&n1);
    printf("Enter the value of 2nd number:");
    scanf("%f",&n2);
    printf("\n1.Addition 2. Subtraction 3.Multiplication 4.Division 5.Exponential");
    printf("\nEnter your choice:");
    scanf("%d",&ch);
    switch(ch){
        case 1: sol=n1+n2;
        break;
        case 2: sol=n1-n2;
        break;
        case 3: sol=n1*n2;
        break;
        case 4: sol=n1/n2;
        break;
        case 5: sol=pow(n1,n2);
        break;
        default: printf("Incorrect Choice");
        break;
    }
    printf("Result: % 2f",sol);
    return 0;
}
