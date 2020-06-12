/**
 * Write a program to define a structure time and read two times from user and perform addition.
 */

#include <stdio.h>

struct Time
{
  int hour;
  int minute;
  int second;
};

int main()
{
  struct Time t1, t2;
  int a, b, c, d, hour, min, sec;

  printf("Enter hour, minute, second for time 1:\n");
  scanf("%d %d %d", &t1.hour, &t1.minute, &t1.second);
  printf("Enter hour, minute, second for time 2:\n");
  scanf("%d %d %d", &t2.hour, &t2.minute, &t2.second);

  a = t1.hour + t2.hour;
  b = t1.minute + t2.minute;
  c = t1.second + t1.second;
  d = a * 3600 + b * 60 + c;
  hour = d / 3600;
  min = (d % 3600) / 60;
  sec = (d % 3600) % 60;

  printf("Sum of two time:\n");
  printf("%d:%d:%d\n", hour, min, sec);

  return 0;
}
