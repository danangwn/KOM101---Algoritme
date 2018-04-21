#include <stdio.h>
void cetakLagu(int N){
	
	while(N>0){
		printf("Anak ayam turun %d, ", N);
		N--;
		if(N>0) printf("mati 1 tinggal %d\n",N);
		else printf("mati 1 tinggal induknya\n");}
		return N;}
int main(){
	int N;
	scanf("%d", &N);
	cetakLagu(N);
	return 0;
}
	
