#include<stdio.h>
int main(){
	int a , b , c ,max,min,conlai;
	printf ("nhap 3 chu so");
	scanf ("%d%d%d", &a,&b,&c);
	max=a;
	max=(a>b)?a:b;
	max=(a>c)?a:c;
	min=(a<b)?a:b;
	min=(a<c)?a:c;
	conlai=a+b+c-max-min;
	printf ("day so : %d,%d,%d",max,conlai,min);	
}
