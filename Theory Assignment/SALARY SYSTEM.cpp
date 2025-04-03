#include <stdio.h>

int main (){
	
	int wd, pd, absent, leave, without_salary_days;
	float income,da, da_percentage, per_day_salary, shorten_salary, salary, net_sal;
	printf("Write your monthly income: ");
	scanf("%f", &income);
	printf("Write your DA percentage: ");
	scanf("%f", &da_percentage);
	da = income * da_percentage/100;
	printf("Write Working days in this month: ");
	scanf("%d", &wd);
	
	printf("Write Days of present this month: ");
	scanf("%d", &pd);
	
	absent = wd - pd;
	if (absent > 0)
	{
		printf("Write Availability of your leave: ");
		scanf("%d", &leave);
		if(absent > leave){
			without_salary_days = absent - leave;
			per_day_salary = income / 30;
			shorten_salary = without_salary_days * per_day_salary;
			salary = (income - shorten_salary) + da;
			printf("Your  Net Salary in this month: %0.2f", salary);
		}
		else{
			net_sal = income + da;
			printf("Your Net salary in month: %0.2f", net_sal);
		}
	}
	
	if(absent == 0){
		net_sal = income + da;
		printf("Your Net Salary: %0.2f", net_sal);
	}
	return 0;
}
