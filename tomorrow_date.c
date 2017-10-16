#include <stdio.h>
#include <stdbool.h>
/**
  * Program to determine tomorrow's date
  */

struct date
{
  int month;
  int day;
  int year;
};

int main(void)
{

    struct date today, tomorrow;

    const int numberOfDays (struct date d);
    printf("Enter today's date (mm dd yyyy): ");
    scanf("%i%i%i", &today.month, &today.day, &today.year);

    if (today.day != numberOfDays(today))
      {
	tomorrow.day = today.day + 1;
	tomorrow.month = today.month;
	tomorrow.year = today.year;
      }
    else if (today.month == 12) /* end of year */
      {
	tomorrow.day = 1;
	tomorrow.month = 1;
	tomorrow.year = today.year + 1;
      }
    else                        /* end of month */
      {
	tomorrow.day = 1;
	tomorrow.month = today.month + 1;
	tomorrow.year = today.year;
      }
    printf("Tomorrow's date is %i/%i/%.2i.\n", tomorrow.month, tomorrow.day, tomorrow.year % 100);
    return (0);
}

/* Function to determine if it's a leap year */

boo1 isLeapYear(struct date d)
{
  boo1 leapYearFlag;

  if((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0)
    leapYearFlag = true; /* It's a leap year */
  else
    leapYearFlag = false; /* Not a leap year */
  return (leapYearFlag);
}
