# DataPlan

👋Hey There!!! This is my HACK-3 Assignment
======================================================

Here you go ⋙⋙⋙⋙

Directory Layout
======================================================
* [hack3](https://github.com/Aayush-cyborg/hack3)---------------------------# Application repository
   * [.gitignore](https://github.com/Aayush-cyborg/hack3/blob/main/.gitignore)  -----------------------# .gitignore file
   * [Test-cases](https://github.com/Aayush-cyborg/hack3/blob/main/Test-cases)-----------------------# 3 Test cases designed according to selected dataPlan set
   * [DataPlan.c](https://github.com/Aayush-cyborg/hack3/blob/main/dataPlan.c)--------------------# Main source code written in C language



Problem Statement
======================================================

A cell phone broadband provider offers monthly data plans to its customers. Each data plan is for 30 days and each plan gives customers a certain number of Gigabytes (GB) which must be used each month or they are lost (no "rollover"). The provider wants to help customers understand if they are using their monthly data too quickly or if they can afford to use more.

In this exercise, you will write an application for the company to help customers track their mobile data usage. Write a program that reads the following pieces of data as command line arguments.

Number of GB in the plan per 30 day period

The current day in the 30 day period (in the range 1, first day, 30 for the last day)

The total number of GB used so far

The program should then compute whether the customer is over, under, or right on the average daily usage of their plan. It should also inform them of how many GB are left and how many, on average, they can use per day for the rest of the 30 day period. Of course, if they've run out of data, it should inform them of that too.

For example, if the user enters 15, 10, 13  for each piece of data respectively, your program should print out something similar to the following.





Your output should look something like the following.
======================================================
If you run C program with help of following test cases you will receive similar output mentioned below for example:-

  [Test-cases](https://github.com/Aayush-cyborg/hack3/blob/main/Test-cases)

  [DataPlan.c](https://github.com/Aayush-cyborg/hack3/blob/main/dataPlan.c)

10 days used, 20 days remaining
Average daily use: 1.3 GB/day

You are EXCEEDING your average daily use (0.50 GB/day).
Continuing this high usage, you'll exceed your data plan by
24 GB.

To stay below your data plan, use no more than 0.1 GB/day.




Instructions
======================================================

>Design at least 3 test cases before you begin designing or implementing your program. Test cases are input-output pairs that are known to be correct using means other than your program (a calculator, online tool, etc.).
refer my test cases

>Name your program dataPlan.c, and turn it in via webhandin. Make sure that it runs and executes correctly in the grader.
