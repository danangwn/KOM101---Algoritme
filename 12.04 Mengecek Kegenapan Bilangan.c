#include <stdio.h>

int isEven(int x){
	if(x%2==0) printf("1\n");
	else printf("0\n");
	return 0;
}
int main(){
	int x;
	scanf("%d", &x);
	isEven(x);
	return 0;
	
	
	
	
	}


