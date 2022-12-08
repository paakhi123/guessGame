#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
  srand(time(NULL));
  int goal= rand()%50+1;
  int guess;
  int count;
  count=0;
  
  while(count<=10)
  {
     printf("Enter your guess(between 1 and 50):");
     scanf("%d",&guess);
     
     if (guess>goal){
        printf("Too high...\n");
        count++;}
     else if(guess<goal){
        printf("Too low...\n");
        count++;}
     else{
        printf("Correct, the number was %d.\n",goal);
        break;}
   }
   if (count==11){
     printf("Sorry, the number was %d",goal);
     }
 return 0;
 }
