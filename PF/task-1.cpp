#include<stdio.h>
int main(){
	float age;
	int citizenship;
	printf("Enter your age\n");
	scanf("%f",&age);
	printf("Enter 1 if you are Pakistani and 0 for any other Citizenship\n");
	scanf("%d",&citizenship);
	if(age >= 18.0 && citizenship == 1){
		printf("You are eligible to vote\n");
	}
	else{
		printf("You are not elligible to vote");
	}
	return 0;
}