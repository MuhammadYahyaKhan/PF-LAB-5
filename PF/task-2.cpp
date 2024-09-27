#include<stdio.h>

int main(){
	float n1,n2,n3;
	printf("Enter the values of angles upto two decimal place\n");
	scanf("%f %f %f",&n1,&n2,&n3);
	float angle = n1 + n2 + n3;
	if(angle == 180.00 && (n1 > 0 && n2 > 0 && n3 > 0 )){
		printf("These angles are of triangle");
	}
	else{
		printf("These angles are not of triangle");
	}
	return 0;
}