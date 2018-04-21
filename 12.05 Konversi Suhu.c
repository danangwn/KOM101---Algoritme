#include <stdio.h>
int celciusToReamur(float c){
	float r;
	r=(4.0*c)/5.0;
	printf("%.2f\n", r);
	return 0;}
int main (){
	float c;
	scanf("%f", &c);
	celciusToReamur(c);
	return 0;}
