#include <stdio.h>
int luasLingkaran(float r){
	float luas;
	luas=3.14*r*r;
	printf("%.2f\n", luas);
	return 0;}
int main(){
	float r;
	scanf("%f", &r);
	luasLingkaran(r);
	return 0;
}
	
