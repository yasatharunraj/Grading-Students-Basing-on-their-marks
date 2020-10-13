#include <stdio.h>
int main()
{
  int a;
  printf("enter marks of the student\n");
  scanf("%d",&a);
  if(a>=85 && a<=100)
  {
    printf("Student\'s Grade is A");
  }
  else if(a<=84 && a>=70)
  {
    printf("Student\'s grade is B");
  }
  else if(a>=55 && a<=69)
  {
    printf("Student\'s grade is C");
  }
  else if(a>=40 && a<=54)
  {
    printf(" Student\'s grade is D");
  }
  else
  {
    printf("Student\'s grade is F");
  }
  return 0;
}
