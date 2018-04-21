#include <stdio.h>
#include <math.h>
int fpb(int n, int m){
    if(m==0) return n;
    else return fpb(m, n%m);
    return 0;
}
int main(){
    int n,m;
    scanf("%d %d", &n, &m);
     
    printf("%d\n", fpb(n,m));
    return 0;
    }
     
    
