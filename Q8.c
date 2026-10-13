#include <stdio.h>
int main()
{
    int total_seconds = 31558150, reminder1;
    float days, hours, mins;
    days = total_seconds / 86400;      // seconds in a day=24*60*60
    reminder1 = total_seconds % 86400; // reminder1=spare time that will be counted in hours and mins
    hours = reminder1 / 3600;          // seconds in hour=60*60
    mins = reminder1 % 3600;
    printf("total time in days,hours & mins is:%f%f%f\n", days, hours, mins);
    return 0;
}