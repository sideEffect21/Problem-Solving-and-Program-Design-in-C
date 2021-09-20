
#include <stdio.h>

int main()

{
    int number;

    
    printf("masukkan angka =");
    scanf("%d",&number);
    
    int satuan = number%10;
    int puluhan = number%100/10;
    int ratusan=number/100;
    int zz=number%100;
   
  if(number<10)
	{
		switch(satuan){
			case 1:
				printf("satu");
				break;
			case 2:
				printf("dua");
				break;
			case 3:
				printf("tiga");
				break;
			case 4:
				printf("empat");
				break;
			case 5:
				printf("lima");
				break;
			case 6:
				printf("enam");
				break;
			case 7:
				printf("tujuh");
				break;
			case 8:
				printf("delapan");
				break;
			case 9:
				printf("sembilan");
				break;
		}
	}
	else if(number==10){
		printf("sepuluh");
	}
	else if(number==11){
		printf("sebelas");
	}
	else if(number<20){
		switch(satuan){
			case 1:
				printf("satu");
				break;
			case 2:
				printf("dua");
				break;
			case 3:
				printf("tiga");
				break;
			case 4:
				printf("empat");
				break;
			case 5:
				printf("lima");
				break;
			case 6:
				printf("enam");
				break;
			case 7:
				printf("tujuh");
				break;
			case 8:
				printf("delapan");
				break;
			case 9:
				printf("sembilan");
				break;
		}
		printf(" belas");
	}

	else if(number<100){
		switch(puluhan){
			case 0:
				printf("puluh");
				break;
			case 1:
				printf("satu");
				break;
			case 2:
				printf("dua");
				break;
			case 3:
				printf("tiga");
				break;
			case 4:
				printf("empat");
				break;
			case 5:
				printf("lima");
				break;
			case 6:
				printf("enam");
				break;
			case 7:
				printf("tujuh");
				break;
			case 8:
				printf("delapan");
				break;
			case 9:
				printf("sembilan");
				break;
		}
		printf(" puluh ");
		
		switch(satuan){
			case 1:
				printf("satu");
				break;
			case 2:
				printf("dua");
				break;
			case 3:
				printf("tiga");
				break;
			case 4:
				printf("empat");
				break;
			case 5:
				printf("lima");
				break;
			case 6:
				printf("enam");
				break;
			case 7:
				printf("tujuh");
				break;
			case 8:
				printf("delapan");
				break;
			case 9:
				printf("sembilan");
				break;
		}
	}
		else if(number==100){
		printf("seratus");
	}
	    	else if(number==110){
		printf("seratus sepuluh");
	}
	else if (number<200){
		printf("seratus ");
		if(zz<20){
		switch(satuan){
			case 1:
				printf("satu");
				break;
			case 2:
				printf("dua");
				break;
			case 3:
				printf("tiga");
				break;
			case 4:
				printf("empat");
				break;
			case 5:
				printf("lima");
				break;
			case 6:
				printf("enam");
				break;
			case 7:
				printf("tujuh");
				break;
			case 8:
				printf("delapan");
				break;
			case 9:
				printf("sembilan");
				break;
		}
		printf(" belas");
	}
	else {
		switch(puluhan){
			case 0:
				printf("puluh");
				break;
			case 1:
				printf("satu");
				break;
			case 2:
				printf("dua");
				break;
			case 3:
				printf("tiga");
				break;
			case 4:
				printf("empat");
				break;
			case 5:
				printf("lima");
				break;
			case 6:
				printf("enam");
				break;
			case 7:
				printf("tujuh");
				break;
			case 8:
				printf("delapan");
				break;
			case 9:
				printf("sembilan");
				break;
		}
		printf(" puluh ");
		
		switch(satuan){
			case 1:
				printf("satu");
				break;
			case 2:
				printf("dua");
				break;
			case 3:
				printf("tiga");
				break;
			case 4:
				printf("empat");
				break;
			case 5:
				printf("lima");
				break;
			case 6:
				printf("enam");
				break;
			case 7:
				printf("tujuh");
				break;
			case 8:
				printf("delapan");
				break;
			case 9:
				printf("sembilan");
				break;
		}
	}
	}
	
	else if(number<1000){
		switch(ratusan){
			case 1:
				printf("satu");
				break;
			case 2:
				printf("dua");
				break;
			case 3:
				printf("tiga");
				break;
			case 4:
				printf("empat");
				break;
			case 5:
				printf("lima");
				break;
			case 6:
				printf("enam");
				break;
			case 7:
				printf("tujuh");
				break;
			case 8:
				printf("delapan");
				break;
			case 9:
				printf("sembilan");
				break;
		}
		printf(" ratus ");
		if(zz<20){
		switch(satuan){
			case 1:
				printf("satu");
				break;
			case 2:
				printf("dua");
				break;
			case 3:
				printf("tiga");
				break;
			case 4:
				printf("empat");
				break;
			case 5:
				printf("lima");
				break;
			case 6:
				printf("enam");
				break;
			case 7:
				printf("tujuh");
				break;
			case 8:
				printf("delapan");
				break;
			case 9:
				printf("sembilan");
				break;
		}
		printf(" belas");
	}
		else{
		switch(puluhan){
			case 1:
				printf("satu");
				break;
			case 2:
				printf("dua");
				break;
			case 3:
				printf("tiga");
				break;
			case 4:
				printf("empat");
				break;
			case 5:
				printf("lima");
				break;
			case 6:
				printf("enam");
				break;
			case 7:
				printf("tujuh");
				break;
			case 8:
				printf("delapan");
				break;
			case 9:
				printf("sembilan");
				break;
			}
			printf(" puluh ");
			switch(satuan){
			case 1:
				printf("satu");
				break;
			case 2:
				printf("dua");
				break;
			case 3:
				printf("tiga");
				break;
			case 4:
				printf("empat");
				break;
			case 5:
				printf("lima");
				break;
			case 6:
				printf("enam");
				break;
			case 7:
				printf("tujuh");
				break;
			case 8:
				printf("delapan");
				break;
			case 9:
				printf("sembilan");
				break;
			
	}}
	
	return 0;
}
}
