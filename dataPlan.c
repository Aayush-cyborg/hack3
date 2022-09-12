/**
 * Aayush kulkarni
 * akulkarni3@huskers.unl.edu
 * Date: 2022/09/13
 *
 * help customers understand if they are using their monthly data too quickly or if they can afford to use more.
 *
 * // https://github.com/Aayush-cyborg/hack3 [View my repo and testcases]
 *
 */

#include <stdio.h>

int main(int argc, char **argv) {

     float num,used; int days;

     // input from user the amount of data
     printf("Enter the Number of GB in plan : ");
     scanf("%f",&num);

     // input from user the number of remaining days
     printf("Enter the number of days remaining from 1 to 30 : ");
     scanf("%d",&days);

     // input from user the amount of data used
     printf("Enter the Amount of data used till now : "); // input from user the amount of data used
     scanf("%f",&used);

     float given =num/30;//calculate average of data that should be used
     float avg=used/(30-days);//average of data that public is using
     float remaining=num-(avg*(30-days)); //calculating  remaining data


   if(avg>given)//printing the required output for exceeding the data limit

{

    printf("%d days used , %d days remaining \n",30-days,days);
    printf("Average daily use : %0.2f\n",avg);
    printf("You are EXCEEDING your DAILY Average use(%0.2f/day)\n",given);
    printf("Continuing this High usage, you will be exceeding your data plan by %0.2f GB\n",avg*days-remaining);
    printf("To stay below your data plan , use no more than %0.2f GB / day \n",remaining/days);

    }

      else if(avg<given)         //trying output for not exceeding the data limit

    {
        printf("%d days used , %d days remaining \n",30-days,days);
        printf("Average daily use : %0.2f\n",avg);
        printf("You are not EXCEEDING your DAILY Average use(%0.2f/day)\n",given);
        printf("Continuing this low usage, you will be losing your data plan by %0.2f GB\n",remaining-avg*days);
        printf("To stay on your data plan , use no more than %0.2f GB / day \n",remaining/days);

    }

      else if(avg==given)  //required output for exact on the data limit

     {

        printf("You are Exactly on your DAILY Average use(%0.2f/day)\n",given);

    }

        return 0;
    }








