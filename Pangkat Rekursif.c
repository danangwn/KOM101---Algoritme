#include <stdio.h>
#include <math.h>
long double pang(int n, int p){
	
	if(p>0) return n*pang(n,p-1);
	else if(p<0) return (1.0/n)*pang(n,p+1);
	else return 1;
	return 0;
}
int main(){
	int n,p;
	scanf("%d %d", &n, &p);
	
	printf("%.6LE\n", pang(n,p));
	return 0;
	}
	
	
