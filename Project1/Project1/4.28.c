#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int payCode;
	double pay;
	double totalPay = 0;
	int countManagers = 0;
	int countHourlyWorkers = 0;
	int countCommissionWorkers = 0;
	int countPieceworkers = 0;
	const int WEEKS_PER_YEAR = 52;
	double salary;
	const int HOURS_PER_WEEK_THRESHOLD = 40; 
	const double OVERTIME_MULTIPLIER = 1.5; 
	double hourlyRate;
	double hoursWorked;
	double overtimeHours;
	const double COMMISSION_BASE = 250;
	const double COMMISSION_MULTIPLIER = .057; 
	double grossWeeklySales;
	double numberPieces;
	double wagePerPiece;


	do
	{
		puts("");
		puts("Select type of Employee from menu");
		puts("1. Manager/Salary");
		puts("2. Hourly Worker");
		puts("3. Commission Worker");
		puts("4. Pieceworker");
		printf("%s", "Enter paycode (-1 to end): ");
		scanf_s("%d", &payCode);

		switch (payCode)
		{
		case 1:
			pay = salary = 0;
			puts("");
			puts("Manager selected.");
			printf("%s", "Enter the yearly salary: $");
			scanf_s("%lf", &salary);

			pay = salary / WEEKS_PER_YEAR;

			printf("Manager's weekly pay is $%.2lf", pay);

			countManagers++;
			totalPay += pay; 

			break;
			
		case 2:
			pay = hourlyRate = hoursWorked = overtimeHours = 0;

			puts("");
			puts("Hourly worker selected.");
			printf("%s", "Enter the hourly rate: $");
			scanf_s("%lf", &hourlyRate);
			printf("%s", "Enter the total hours worked: ");
			scanf_s("%lf", &hoursWorked);

			if (hoursWorked > HOURS_PER_WEEK_THRESHOLD)
			{
				overtimeHours = hoursWorked - HOURS_PER_WEEK_THRESHOLD; 
				hoursWorked = HOURS_PER_WEEK_THRESHOLD;
			}

			pay = (hourlyRate * hoursWorked) + (hourlyRate * overtimeHours * OVERTIME_MULTIPLIER);

			printf("Worker's pay this week is $%.2lf", pay);

			countHourlyWorkers++; 
			totalPay += pay;

			break;

		case 3:
			pay = grossWeeklySales = 0;

			puts("");
			puts("Commission worker selected.");
			printf("%s", "Enter the gross weekly sales: $");
			scanf_s("%lf", &grossWeeklySales);

			pay = COMMISSION_BASE + (grossWeeklySales * COMMISSION_MULTIPLIER);

			printf("Worker's pay this week is $%.2lf", pay);

			countCommissionWorkers++;
			totalPay += pay; 

			break;

		case 4:
			pay = numberPieces = wagePerPiece = 0;

			
			puts("");
			puts("Pieceworker selected.");
			printf("%s", "Enter the number of pieces: ");
			scanf_s("%lf", &numberPieces);
			printf("%s", "Enter the wage per piece: $");
			scanf_s("%lf", &wagePerPiece);

			pay = numberPieces * wagePerPiece;

			printf("Worker's pay this week is $%.2lf", pay);

			countPieceworkers++;
			totalPay += pay; 

			break;

		case -1:
			break;

		default:
			puts("Invalid pay code.");
			break;
		}
	}
	while (payCode != -1);

	puts("");
	printf("Number of Employees:\t\t\t\t%d\n",
		countManagers
		+ countHourlyWorkers
		+ countCommissionWorkers
		+ countPieceworkers
	);
	printf("Total number of managers paid:\t\t\t%d\n", countManagers);
	printf("Total number of hourly workers paid:\t\t%d\n", countHourlyWorkers);
	printf("Total number of commission workers paid:\t%d\n", countCommissionWorkers);
	printf("Total number of pieceworkers paid:\t\t%d\n", countPieceworkers);
	printf("Total value paid:\t\t\t$%.2lf\n", totalPay);
}