#include <stdio.h>

int main(void)
{
	double principal;
	double amount;
	double rate;
	double profit;
	double totalPrincipal;
	int year;
	int MaxYear;

	printf("                                WELCOME");
	printf("\n\nWRITE THE INTEREST RATE -> ");
	scanf("%lf", &rate);
	printf("\n\nWRITE THE MAX YEAR -> ");
	scanf("%d", &MaxYear);
	printf("\n\nWRITE PRINCIPAL AMOUNT -> ");	
	scanf("%lf", &principal);
	

	if (rate<=0 ) {
		printf("\nERROR !!WRITE POSITIVE VALUE \n\n\n");
	}
	else if (MaxYear<=0) {
		printf("\nERROR !!WRITE POSITIVE VALUE \n\n\n");
	}
	else if (principal <=0) {
		printf("\nERROR !!WRITE POSITIVE VALUE \n\n\n");
	}
	else { 
	
		printf("\n\n   PRINCIPAL			NUMBER OF YEAR		AMOUNT  ON  DEPOSIT\n\n");
		
	year = 1;
	totalPrincipal = principal;
	amount = principal;

	while (year <= MaxYear) {
		principal = amount;
		amount = amount * (rate + 1);
		printf("%10.3lf %29d %33.4lf\n", principal, year, amount);
		year = year + 1;
	}
	profit = amount - totalPrincipal;
	
	printf("\n\nYOUR PROFIT FOR  %d YEAR IS $%.2lf\n\n", MaxYear, profit);
	}
	printf("\n\n");
		      "	                                                    *****************\n"
          "			                                    * OMER GOKDERE  *\n"
          "	                                                    *****************\n");


	return 0;
}
