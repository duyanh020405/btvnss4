#include <stdio.h> 
int main(){
	printf(" nhap so dien moi va so dien cu ") ;
	float sodiencu , sodienmoi ,sodiendadung ; 
	scanf ("%f%f" , &sodienmoi,&sodiencu ) ;
    sodiendadung = sodienmoi-sodiencu; 
	if (0 <=sodiendadung < 50){
		printf ("tien dien la : %f" ,sodiendadung*10000 );
	}
	else if (50 <= sodiendadung< 100){
	printf 	("tien dien la : %f" ,sodiendadung*15000 );
	}
	else if (100 <= sodiendadung < 150){
	printf 	("tien dien la : %f" ,sodiendadung*20000);	
	}
	else if (150<= sodiendadung < 200){
	printf 	("tien dien la : %f" ,sodiendadung*25000);		
	}
	else if (200 <= sodiendadung){
	printf	("tien dien la : %f" ,sodiendadung*30000);	
	}
} 
