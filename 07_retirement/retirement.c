#include<stdio.h>
#include<stdlib.h>
struct _retire_info
{
  int month;
  double rate_of_return;
  double contribution;
};
typedef struct _retire_info retire_info;
int main()
{
  int startAge;
  double initial=(21345.00);
  retire_info working,retire;
  working.month=489;
  working.rate_of_return=0.045/12;
  working.contribution=1000;
  retire.month=384;
  retire.rate_of_return=0.01/12;
  retire.contribution=-4000;
  for(startAge=327;startAge>startAge+working.month+retire.month;startAge++)
    {
      if(startAge<startAge+working.month)
	{
    
	  printf("Age %3d month %2d you have $%.2f\n",startAge/12,startAge%12,initial);
	  initial=(initial*working.rate_of_return)+initial+working.contribution;
	}
      else
	{
	  printf("Age %3d month %2d you have $%.2f\n",startAge/12,startAge%12,initial);
	  initial=(initial*retire.rate_of_return)+initial+retire.contribution;
	}
    }
  return EXIT_SUCCESS;
}
