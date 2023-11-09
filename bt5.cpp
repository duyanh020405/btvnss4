#include <stdio.h>
int main(){
	int ngay,thang,nam;
	printf ("nhap ngay");
	scanf("%d",&ngay);
	printf ("nhap thang");
	scanf("%d",&thang);
	printf ("nhap nam");
	scanf("%d",&nam);
	if (ngay<0 || nam<0 || thang<0||thang>12){
		printf ("khong hop le");}
	else if (thang=1&&ngay>31){
		printf ("khong hop le");
	}else if (thang=3&&ngay>31){
		printf ("khong hop le");
	}else if (thang=5&&ngay>31){
		printf ("khong hop le");
	}else if (thang=7&&ngay>31){
		printf ("khong hop le");
	}else if (thang=8&&ngay>31){
		printf ("khong hop le");
	}else if (thang=10&&ngay>31){
		printf ("khong hop le");
	}else if (thang=12&&ngay>31){
		printf ("khong hop le");
	}else if (thang=2&&ngay>28){
		printf ("khong hop le");
	}else if (thang=4&&ngay>30){
		printf ("khong hop le");
	}else if (thang=6&&ngay>30){
		printf ("khong hop le");
	}else if (thang=9&&ngay>30){
		printf ("khong hop le");
	}else if (thang=11&&ngay>30){
		printf ("khong hop le");
	}
	else {
		printf ("hop li");
	}
	}
	
