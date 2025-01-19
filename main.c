#include <stdio.h>

void calcPercentage();

int main(){
    calcPercentage();
    return 0;
}

void calcPercentage(){
    int s1, s2, s3, s4, s5;
    printf("Enter marks in 1st subject : ");
    scanf("%d", &s1);
    printf("Enter marks in 2nd subject : ");
    scanf("%d", &s2);
    printf("Enter marks in 3rd subject : ");
    scanf("%d", &s3);
    printf("Enter marks in 4th subject : ");
    scanf("%d", &s4);
    printf("Enter marks in 5th subject : ");
    scanf("%d", &s5);
    float p = (s1+s2+s3+s4+s5)/5.0;
    printf("Percentage = %f\n", p);
}