// converting time into total seconds
#include <stdio.h>
int main()
{
    float hours, mins, seconds;
    long total_seconds;
    printf("time in hours:");
    scanf("%f", &hours);
    printf("time in mins:");
    scanf("%f", &mins);
    printf("time in seconds:");
    scanf("%f", &seconds);
    // calculating total seconds
    total_seconds = (hours * 3600) + (mins * 60) + seconds; // 1 hour=60*60=3600 secs,1 min=60 secs
    printf("total seconds are:%ld\n", total_seconds);
    return 0;
}