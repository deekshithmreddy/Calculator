#include <stdio.h>

int first_num;
int second_num;

int main(void){
    int sum;
    int dif;

    printf("\n----   Welcome to the calculater   ---\n\n");
    printf("Enter two numbers");
    printf("Use a comma to separate them E.G., 5,3 \n");
    printf("\n\n");
    printf("addition \n");
    scanf("%d,  %d", &first_num, &second_num);
    sum = first_num + second_num;
    printf("Your result: %d \n", sum);
    printf("\n---\n");

    printf("subtraction \n");
    scanf("%d,  %d", &first_num, &second_num);
    dif = first_num - second_num;
    printf("Your result: %d \n", dif);
return 0;
}
