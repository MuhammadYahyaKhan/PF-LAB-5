#include<stdio.h>
int main(){
	float percentage;
	printf("Enter percentage\n");
	scanf("%f",&percentage);
	(percentage >= 90) ? (printf("A")) : 
	( (percentage >= 80 && percentage < 90) ? printf("B") : 
	( (percentage >=70 && percentage <80) ? (printf("C")) : 
	( percentage >= 60 && percentage < 70 ) ? printf("D") : printf("F") ) );
	return 0;
}