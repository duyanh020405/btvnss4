include <stdio.h>
int main(){
	int a, b , c; 
	printf("nhap 3 canh tam giac ");
	scanf("%d%d%d", &a , &b, &c);
    if (a==b || b==c || a==c){
		printf("tam giac can ");
	}else if ( a*a==b*b+c*c || b*b==c*c+a*a|| c*c==a*a+b*2){
		printf ("tam giac vuong");
	}else if (a==b==c){
		printf ("tam giac deu ");
	}else if(a*a==b*b+c*c || b*b==c*c +a*a|| c*c==a*a+b*b ){
	printf ("tam giac vuong can");
    }else if (a+b>c || a+c>b ||b+c>a){
		printf("tam giac thuong");}
}
