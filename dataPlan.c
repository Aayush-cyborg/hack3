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

     float tot-gb,cur-day,Gb_used;

     // input from user the amount of data
     printf("Enter the Number of GB in plan : ");
     scanf("%f",&tot-gb);

     // input from user the number of remaining days
     printf("Enter the number of days remaining from 1 to 30 : ");
     scanf("%f",&cur-day);
    if(cur-day>30)
    {
        printf("Enter in range of 1 to 30:");// IF input is more than 30
        scanf("%f",&cur-day);
    }


    // input from user the amount of data used
    printf("Enter the Amount of data used till now : ");
    scanf("%f",&Gb_used);


    float left_GB=tot-gb-Gb_used; //calculate average of data that should be used
    float left_day=30-cur-day; //average of data that public is using
    float avg_left_GB=left_GB/left_day; //calculating  remaining data


    double avg_gb_used=Gb_used/cur-day;

        printf("%0.1f days used , %0.1f days remaining\n",cur-day,left_day);
        printf("Average daily use: %0.1f GB/day\n\n",avg_gb_used);

    if(avg_gb_used>0.5)

            {
                float exceed=avg_gb_used*left_day;

                printf("You are EXCEEDING your average daily use (0.50 GB/day).\n");
                printf("Continuing this high usage, you'll exceed your data plan by %0.1f GB.\n\n",exceed);
                printf("To stay below your data plan, use no more than %0.1f GB/day.",avg_left_GB);
            }
              else
            {
                float lose=tot-gb-(left_day*avg_gb_used);

                printf("You are under using your average daily use(0.50 GB/day).\n");
                printf("Continuing this low usage, you'll lose your data plan by %0.1f GB.\n\n",lose);
                printf("To stay above your data plan , use %0.1f GB/day .",avg_left_GB);
            }
               return 0;
         }







