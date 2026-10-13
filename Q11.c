// converting total seconds into time
#include <stdio.h>
int main()
{
    int total_seconds, reminder1, reminder2;
    float hours, mins, seconds, time;
    printf("total seconds are:");
    scanf("%d", &total_seconds);
    hours = (float)total_seconds / 3600; // 1 hour=60*60
    reminder1 = total_seconds % 3600;
    mins = (float)reminder1 / 60;

    seconds = reminder1 % 60;
    printf("total time is:%.2f\n", hours, mins, seconds);
}