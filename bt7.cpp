#include <stdio.h>
int main(){
	int a,day;
	printf ("nhap luong co ban ");
	scanf ("%d", &a);
	printf ("nhap ngay cong thuc te ");
	scanf ("%d", &day);
	int residual = day - 26;
	if (residual > 0) printf 
	( "luong la %d" , a*26 +((a / 100 *50) + (a * residual) );
	else printf ("luong %d" , a * day);
}

