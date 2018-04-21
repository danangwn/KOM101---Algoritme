#include <stdio.h>
int fibo(int n){
	if(n==1 || n==2) return 1;
	else return fibo(n-1)+fibo(n-2);
}
int main(){
	int x,n;
	scanf("%d", &x);
	while(x!=0){
		scanf("%d", &n);
		printf("%d\n", fibo(n));
		x--;
	}
	return 0;
	}
	
