#include<stdio.h>
int main(){
	float purchase;
	printf("Enter purchse \n");
	scanf("%f",&purchase);
	int membership;
	printf("Enter 1 if you have membership and 0 if not\n");
	scanf("%d",&membership);
	
	(membership == 1 && purchase > 100) ? printf("You are eligible for dsicount") : printf("You are not eligble for discount");
	return 0;
}