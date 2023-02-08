#include <stdio.h>

int main() {
  
 int appleQuantity;
 double applePrice = 1.49;
 double appleReview;
 int appleReviewDisplay;
 const char appleLocation = 'F';
 int totalScore = 823;
 int numReviewers = 9;
int dayOfWeek = 4;

 appleQuantity = 23;
 totalScore+=52;
 numReviewers+=1;
 
 appleReview = totalScore / numReviewers;

 appleReviewDisplay = appleReview;

dayOfWeek += 2;
 if(appleQuantity < 10 || dayOfWeek == 3)
 {
  printf("Sale on apples today, today only they are: $%.2f\n", applePrice * .9);
 }

 // Put all your code above this and if you declare your variables using the given names and types there is no need to change any of the code below.
 printf("\nAn apple costs: $%.2f, there are %d in inventory found in section:\n%c and your customers gave it an average review of %d%%!\n", applePrice, appleQuantity, appleLocation, appleReviewDisplay);

}