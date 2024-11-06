#include<stdio.h>

int main(){
	float hoursWorked,hourlyWage,grossPay,taxes,netPay;
	float overtimeRate =1.5;
	float taxRate1 = 0.15,taxRate2 =0.20;
	float taxBracket1 =600;
	
	//Request user input
	printf("Enter hours worked in a week: ");
	scanf("%f",&hoursWorked);
	
	printf("Enter hourly wage:");
	scanf("%f",&hourlyWage);
	
	//Calculate gross pay
	if(hoursWorked>40){
		//Regular pay for 40 hours +overtime for hours exceeding 40
		grossPay=(40*hourlyWage)+((hoursWorked-40)*hourlyWage*overtimeRate);
	}else{
		//If no overtime , simply multiply hours worked by hourly wage
		grossPay = hoursWorked*hourlyWage;
	}
	
	//Calculate taxes
	if(grossPay <=taxBracket1){
		taxes = grossPay * taxRate1;
	}else{
		taxes = (taxBracket1*taxRate1)+((grossPay-taxBracket1)*taxRate2);
	}
	
	//Calculate net pay
	netPay =grossPay-taxes;
	
	//Print the results
	printf("\nGross Pay:$%.f\n", grossPay);
	printf("Taxes:$%.2f\n",taxes);
	printf("Net Pay:$%.2f\n",netPay);
	
	return 0;
}
	
		
		
	