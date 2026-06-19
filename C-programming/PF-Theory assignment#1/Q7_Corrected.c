#include <stdio.h>
int main()
{
int value;
printf("Please enter a value in the range 1-7:");
scanf("%d", &value);
// Translate number into its English word
if (value == 1)
{
printf("Monday\n");
}
else if (value == 2)
{
printf("Tuesday\n");
}
else if (value == 3)
{
printf("Wednesday\n");
}
else if (value == 4)
{
printf("Thursday\n");
}
else if (value == 5)
{
printf("Friday\n");
}
else if (value == 6){
    printf("Saturday\n");
}
else if(value == 7){
    printf("Sunday\n");
}
else {
    printf("Entered Value out of range");
}
return 0;
}
