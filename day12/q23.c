/*Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.*/


#include <stdio.h>

int main()
{
	int late_days;
	int fine;

	printf("Enter the number of late days: ");
	scanf("%d", &late_days);

	if (late_days < 0) {
		printf("Late days cannot be negative.\n");
	} else if (late_days > 30) {
		printf("Membership Cancelled.\n");
	} else if (late_days <= 5) {
		fine = late_days * 2;
		printf("Library fine: Rs. %d\n", fine);
	} else if (late_days <= 10) {
		fine = (5 * 2) + ((late_days - 5) * 4);
		printf("Library fine: Rs. %d\n", fine);
	} else {
		fine = (5 * 2) + (5 * 4) + ((late_days - 10) * 6);
		printf("Library fine: Rs. %d\n", fine);
	}

	return 0;
}