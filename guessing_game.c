#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int random,guess;
    int no_of_guess=0;
    srand(time(NULL));

    printf("Welcome to the world of guessing");
    random = (rand()% 100 )+ 1 ;
    do
    {
        printf("\nenter your guess between 1-100");
        scanf("%d",&guess);
        no_of_guess++;

        if (guess < random){
            printf("guess larger number :\n");
        }
        else if (guess > random){
            printf("guess a smaller number :\n");
        }
        else {
            printf("you have successfully guessed the number.");
            printf("Congrattulations ::: No of attempts are %d ",no_of_guess);
        }
    } while (random!=guess);

    printf("Bye Bye , Shukriya for playing ");
    printf("Developed by Shubh Raj ");
    
}
