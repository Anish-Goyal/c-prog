#include<stdio.h>
#include<stdlib.h>
struct _retire_info
{
  int months;
  double rate_of_return;
  double contribution;
};
typedef struct _retire_info retire_info;
void retirement(int,double,retire_info,retire_info);
int main(void)
{
  int startAge=327;
  double initial=(21345.00);
  retire_info working,retire;
  working.months=489;
  working.rate_of_return=0.045/12;
  working.contribution=1000;
  retire.months=384;
  retire.rate_of_return=0.01/12;
  retire.contribution=-4000;
  retirement(startAge,initial,working,retire);
  return EXIT_SUCCESS;
}
  void retirement(int startAge,double initial,retire_info working,retire_info retired)
  {
    while(startAge<327+(working.months)+(retired.months))
    {
      if(startAge<327+(working.months))
	{
    
	  printf("Age %3d month %2d you have $%.2f\n",startAge/12,startAge%12,initial);
	  initial=(initial*(working.rate_of_return))+initial+(working.contribution);
	}
      else
	{
	  printf("Age %3d month %2d you have $%.2f\n",startAge/12,startAge%12,initial);
	  initial=(initial*(retired.rate_of_return))+initial+(retired.contribution);
	}
      startAge++;
    }
}
