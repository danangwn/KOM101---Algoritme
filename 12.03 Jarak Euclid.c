#include <stdio.h>
#include <math.h>
float jarakEuclid(float x1, float y1, float x2, float y2){
	float jarak;
	jarak=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	printf("%.2f\n", jarak);
	return 0;}
int main(){
	float x1,y1,x2,y2;
	scanf("%f %f %f %f", &x1,&y1,&x2,&y2);
	jarakEuclid(x1,y1,x2,y2);
	return 0;
}


