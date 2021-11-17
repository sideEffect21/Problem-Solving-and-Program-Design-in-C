/*	Ditulis oleh:
	Nama	:- Afiq Fawwaz Haidar (5025211246)
			 - Melanie Sayyidina Sabrina Refman (5025211029)
			 - Mohammad Kamal(5025211180)

	Tanggal Pembuatan: 1 November 2021
	
	Problem:
		Membuat program yang menampilkan tabel hasil dari pemilihan walikota dan
	persentase serta hasil dari pemilihan dalam lima kali pemilihan
		
	Analysis:
		Dalam kasus ini diminta untuk memunculkan tabel hasil pemilihan walikota, lalu
	menghitung total suara dan persentase dari suara setiap pemilihan. Jika persentase
	yang didapatkan kandidat mencapati 50% maka kandidat adalah pemenang. Jika tidak ada 
	persentase kandidat yang melebihi 50%, maka dilakukan pemilihan ulang oleh 2 kandidat
	yang memiliki suara terbanyak.
	
	Data Requirement:
	Problem Inputs:		int one[5]={192,48,206,37}; //input array hasil data pemilihan pertama
						int two[5]={147,90,312,21}; //input array hasil data pemilihan kedua
						int thr[5]={186,12,121,38}; //input array hasil data pemilihan ketiga
						int four[5]={114,21,408,39}; //input array hasil data pemilihan keempat
						int fiv[5]= {267,13,382,29}; //input arrau hasil data pemilihan kelima
	
	Problem Outputs:	int one[5]={192,48,206,37}; //output array hasil data pemilihan pertama
						int two[5]={147,90,312,21}; //output array hasil data pemilihan kedua
						int thr[5]={186,12,121,38}; //output array hasil data pemilihan ketiga
						int four[5]={114,21,408,39}; //output array hasil data pemilihan keempat
						int fiv[5]= {267,13,382,29}; //output array hasil data pemilihan kelima
						int percent []; //output persentse suara kandidat dalam sebuah precinct
						int temp; //output kandidat dengan suara terbanyak
						int sec; //output kandidat dengan suara kedua terbanyak
						
						
	Design:
	Initial Alogrithm:
		1.	Membuat fungsi main
		2.	Deklarasi array sebagai input
		3.	Membuat fungsi loop untuk output tabel
		4.	Membuat fungsi loop untuk semua analisis precinct
		5.	Mencari jumlah suara dari sebuah precinct
		6.	Mencari persentase suara perkandidat
		7.	Mencari 2 persentase terbesar dalam array
		8.	Jika tidak ada yang mendapat lebih dari 50%, print output dua suara terbanyak
			sebagai runoff
		9.	Jika ada yang mendapat lebih dari 50%, print output pemenang
		
	Implementation:
*/

#include <stdio.h>

int main() //	1.	Membuat fungsi main
{
	//	2.	Deklarasi array sebagai input
	int one[5]={192,48,206,37};
	int two[5]={147,90,312,21};
	int thr[5]={186,12,121,38};
	int four[5]={114,21,408,39};
	int fiv[5]= {267,13,382,29};
	printf("Precinct\tCandidate A\tCandidate B\tCandidate C\tCandidate D\n");
	//3.	Membuat fungsi loop untuk output tabel
	int i;
	for(i=1;i<=5;i++)
	{
		printf("   %d",i);
		int p;
		for( p=0;p<4;p++)
		{
			if(i==1)printf("\t\t    %d",one[p]);
			if(i==2)printf("\t\t    %d",two[p]);
			if(i==3)printf("\t\t    %d",thr[p]);
			if(i==4)printf("\t\t    %d",four[p]);
			if(i==5)printf("\t\t    %d",fiv[p]);
		}
		printf("\n");
	}
	//	4.	Membuat fungsi loop untuk semua analisis precinct
	int q;
	for( q=1;q<=5;q++)
	{
		if(q==1)
		{
			int percent[5],sum=0;
			printf("\nResult in Precinct %d\n",q);
			//5.	Mencari jumlah suara dari sebuah precinct
			int w;
			for(w=0;w<4;w++)
			{
				sum=sum+one[w];
			}
			//	6.	Mencari persentase suara perkandidat
			int e;
			for( e=0;e<4;e++)
			{
				percent[e] = one[e]*100/sum;
				if(e==0)printf("Candidate A -> %d %% \n",percent[e]);
				if(e==1)printf("Candidate B -> %d %% \n",percent[e]);
				if(e==2)printf("Candidate C -> %d %% \n",percent[e]);
				if(e==3)printf("Candidate D -> %d %% \n",percent[e]);
			}
			int lose=0,check,temp,sec=0;
			// 7.  Mencari 2 persentase terbesar dalam array
			int c;
			for( c=0;c<4;c++)
			{
				check = percent[c]-50;
				if(0<=check) percent[c]=0;
				if(check<0) lose++;
			}
			//8.	Jika tidak ada yang mendapat lebih dari 50%, print output dua suara terbanyak
			//      sebagai runoff
			if(lose==4)
			{
				int k;
				for(k=0;k<3;k++)
				{
					if(percent[k]>percent[k+1]) 
					{
						temp =percent[k];
						if(percent[k+1]>sec) sec=percent[k+1];
					}
					if(percent[k]<percent[k+1]) 
					{
						temp =percent[k+1];
						if(percent[k]>sec) sec=percent[k];
					}
				}
				if(percent[0]>sec) sec=percent[0];
				printf("Runoff between  ");
				for(k=0;k<5;k++)
				{
					if(percent[k]==temp)
					{
						if(k==0)printf("A & ");
						if(k==1)printf("B & ");
						if(k==2)printf("C & ");
						if(k==3)printf("D & ");
					}
				}
				for(k=0;k<5;k++)
				{
					if(percent[k]==sec)
					{
						if(k==0)printf("A\n\n");
						if(k==1)printf("B\n\n");
						if(k==2)printf("C\n\n");
						if(k==3)printf("D\n\n");
					}
				}
			}
			//9.	Jika ada yang mendapat lebih dari 50%, print output pemenang
			else
			{
				int k;
				for(k=0;k<4;k++)
				{
					if(percent[k]==0)
					{
						if(k==0)printf("The winner is Candidate A\n\n");
						if(k==1)printf("The winner is Candidate B\n\n");
						if(k==2)printf("The winner is Candidate C\n\n");
						if(k==3)printf("The winner is Candidate D\n\n");
					}
				}
			}
		}
		if(q==2)
		{
			int percent[5],sum=0;
			printf("\nResult in Precinct %d\n",q);
			//5.	Mencari jumlah suara dari sebuah precinct
			int w;
			for(w=0;w<4;w++)
			{
				sum=sum+two[w];
			}
			//	6.	Mencari persentase suara perkandidat
			int e;
			for( e=0;e<4;e++)
			{
				percent[e] = two[e]*100/sum;
				if(e==0)printf("Candidate A -> %d %% \n",percent[e]);
				if(e==1)printf("Candidate B -> %d %% \n",percent[e]);
				if(e==2)printf("Candidate C -> %d %% \n",percent[e]);
				if(e==3)printf("Candidate D -> %d %% \n",percent[e]);
			}
			int lose=0,check,temp,sec=0;
			// 7.  Mencari 2 persentase terbesar dalam array
			int c;
			for( c=0;c<4;c++)
			{
				check = percent[c]-50;
				if(0<=check) percent[c]=0;
				if(check<0) lose++;
			}
			//8.	Jika tidak ada yang mendapat lebih dari 50%, print output dua suara terbanyak
			//      sebagai runoff
			if(lose==4)
			{
				int k;
				for(k=0;k<3;k++)
				{
					if(percent[k]>percent[k+1]) 
					{
						temp =percent[k];
						if(percent[k+1]>sec) sec=percent[k+1];
					}
					if(percent[k]<percent[k+1]) 
					{
						temp =percent[k+1];
						if(percent[k]>sec) sec=percent[k];
					}
				}
				if(percent[0]>sec) sec=percent[0];
				printf("Runoff between  ");
				for(k=0;k<5;k++)
				{
					if(percent[k]==temp)
					{
						if(k==0)printf("A & ");
						if(k==1)printf("B & ");
						if(k==2)printf("C & ");
						if(k==3)printf("D & ");
					}
				}
				for(k=0;k<5;k++)
				{
					if(percent[k]==sec)
					{
						if(k==0)printf("A\n\n");
						if(k==1)printf("B\n\n");
						if(k==2)printf("C\n\n");
						if(k==3)printf("D\n\n");
					}
				}
			}
			//9.	Jika ada yang mendapat lebih dari 50%, print output pemenang
			else
			{
				int k;
				for(k=0;k<4;k++)
				{
					if(percent[k]==0)
					{
						if(k==0)printf("The winner is Candidate A\n\n");
						if(k==1)printf("The winner is Candidate B\n\n");
						if(k==2)printf("The winner is Candidate C\n\n");
						if(k==3)printf("The winner is Candidate D\n\n");
					}
				}
			}
		}
		if(q==3)
		{
			int percent[5],sum=0;
			printf("\nResult in Precinct %d\n",q);
			//5.	Mencari jumlah suara dari sebuah precinct
			int w;
			for(w=0;w<4;w++)
			{
				sum=sum+thr[w];
			}
			//	6.	Mencari persentase suara perkandidat
			int e;
			for( e=0;e<4;e++)
			{
				percent[e] = thr[e]*100/sum;
				if(e==0)printf("Candidate A -> %d %% \n",percent[e]);
				if(e==1)printf("Candidate B -> %d %% \n",percent[e]);
				if(e==2)printf("Candidate C -> %d %% \n",percent[e]);
				if(e==3)printf("Candidate D -> %d %% \n",percent[e]);
			}
			int lose=0,check,temp,sec=0;
			// 7.  Mencari 2 persentase terbesar dalam array
			int c;
			for( c=0;c<4;c++)
			{
				check = percent[c]-50;
				if(0<=check) percent[c]=0;
				if(check<0) lose++;
			}
			//8.	Jika tidak ada yang mendapat lebih dari 50%, print output dua suara terbanyak
			//      sebagai runoff
			if(lose==4)
			{
				int k;
				for(k=0;k<3;k++)
				{
					if(percent[k]>percent[k+1]) 
					{
						temp =percent[k];
						if(percent[k+1]>sec) sec=percent[k+1];
					}
					if(percent[k]<percent[k+1]) 
					{
						temp =percent[k+1];
						if(percent[k]>sec) sec=percent[k];
					}
				}
				if(percent[0]>sec) sec=percent[0];
				printf("Runoff between  ");
				for(k=0;k<5;k++)
				{
					if(percent[k]==temp)
					{
						if(k==0)printf("A & ");
						if(k==1)printf("B & ");
						if(k==2)printf("C & ");
						if(k==3)printf("D & ");
					}
				}
				for(k=0;k<5;k++)
				{
					if(percent[k]==sec)
					{
						if(k==0)printf("A\n\n");
						if(k==1)printf("B\n\n");
						if(k==2)printf("C\n\n");
						if(k==3)printf("D\n\n");
					}
				}
			}
			//9.	Jika ada yang mendapat lebih dari 50%, print output pemenang
			else
			{
				int k;
				for(k=0;k<4;k++)
				{
					if(percent[k]==0)
					{
						if(k==0)printf("The winner is Candidate A\n\n");
						if(k==1)printf("The winner is Candidate B\n\n");
						if(k==2)printf("The winner is Candidate C\n\n");
						if(k==3)printf("The winner is Candidate D\n\n");
					}
				}
			}
		}
		if(q==4)
		{
			int percent[5],sum=0;
			printf("\nResult in Precinct %d\n",q);
			//5.	Mencari jumlah suara dari sebuah precinct
			int w;
			for(w=0;w<4;w++)
			{
				sum=sum+four[w];
			}
			//	6.	Mencari persentase suara perkandidat
			int e;
			for( e=0;e<4;e++)
			{
				percent[e] = four[e]*100/sum;
				if(e==0)printf("Candidate A -> %d %% \n",percent[e]);
				if(e==1)printf("Candidate B -> %d %% \n",percent[e]);
				if(e==2)printf("Candidate C -> %d %% \n",percent[e]);
				if(e==3)printf("Candidate D -> %d %% \n",percent[e]);
			}
			int lose=0,check,temp,sec=0;
			// 7.  Mencari 2 persentase terbesar dalam array
			int c;
			for( c=0;c<4;c++)
			{
				check = percent[c]-50;
				if(0<=check) percent[c]=0;
				if(check<0) lose++;
			}
			//8.	Jika tidak ada yang mendapat lebih dari 50%, print output dua suara terbanyak
			//      sebagai runoff
			if(lose==4)
			{
				int k;
				for(k=0;k<3;k++)
				{
					if(percent[k]>percent[k+1]) 
					{
						temp =percent[k];
						if(percent[k+1]>sec) sec=percent[k+1];
					}
					if(percent[k]<percent[k+1]) 
					{
						temp =percent[k+1];
						if(percent[k]>sec) sec=percent[k];
					}
				}
				if(percent[0]>sec) sec=percent[0];
				printf("Runoff between  ");
				for(k=0;k<5;k++)
				{
					if(percent[k]==temp)
					{
						if(k==0)printf("A & ");
						if(k==1)printf("B & ");
						if(k==2)printf("C & ");
						if(k==3)printf("D & ");
					}
				}
				for(k=0;k<5;k++)
				{
					if(percent[k]==sec)
					{
						if(k==0)printf("A\n\n");
						if(k==1)printf("B\n\n");
						if(k==2)printf("C\n\n");
						if(k==3)printf("D\n\n");
					}
				}
			}
			//9.	Jika ada yang mendapat lebih dari 50%, print output pemenang
			else
			{
				int k;
				for(k=0;k<4;k++)
				{
					if(percent[k]==0)
					{
						if(k==0)printf("The winner is Candidate A\n\n");
						if(k==1)printf("The winner is Candidate B\n\n");
						if(k==2)printf("The winner is Candidate C\n\n");
						if(k==3)printf("The winner is Candidate D\n\n");
					}
				}
			}
		}
		if(q==5)
		{
			int percent[5],sum=0;
			printf("\nResult in Precinct %d\n",q);
			//5.	Mencari jumlah suara dari sebuah precinct
			int w;
			for(w=0;w<4;w++)
			{
				sum=sum+fiv[w];
			}
			//	6.	Mencari persentase suara perkandidat
			int e;
			for( e=0;e<4;e++)
			{
				percent[e] = fiv[e]*100/sum;
				if(e==0)printf("Candidate A -> %d %% \n",percent[e]);
				if(e==1)printf("Candidate B -> %d %% \n",percent[e]);
				if(e==2)printf("Candidate C -> %d %% \n",percent[e]);
				if(e==3)printf("Candidate D -> %d %% \n",percent[e]);
			}
			int lose=0,check,temp,sec=0;
			// 7.  Mencari 2 persentase terbesar dalam array
			int c;
			for( c=0;c<4;c++)
			{
				check = percent[c]-50;
				if(0<=check) percent[c]=0;
				if(check<0) lose++;
			}
			//8.	Jika tidak ada yang mendapat lebih dari 50%, print output dua suara terbanyak
			//      sebagai runoff
			if(lose==4)
			{
				int k;
				for(k=0;k<3;k++)
				{
					if(percent[k]>percent[k+1]) 
					{
						temp =percent[k];
						if(percent[k+1]>sec) sec=percent[k+1];
					}
					if(percent[k]<percent[k+1]) 
					{
						temp =percent[k+1];
						if(percent[k]>sec) sec=percent[k];
					}
				}
				if(percent[0]>sec) sec=percent[0];
				printf("Runoff between  ");
				for(k=0;k<5;k++)
				{
					if(percent[k]==temp)
					{
						if(k==0)printf("A & ");
						if(k==1)printf("B & ");
						if(k==2)printf("C & ");
						if(k==3)printf("D & ");
					}
				}
				for(k=0;k<5;k++)
				{
					if(percent[k]==sec)
					{
						if(k==0)printf("A\n\n");
						if(k==1)printf("B\n\n");
						if(k==2)printf("C\n\n");
						if(k==3)printf("D\n\n");
					}
				}
			}
			//9.	Jika ada yang mendapat lebih dari 50%, print output pemenang
			else
			{
				int k;
				for(k=0;k<4;k++)
				{
					if(percent[k]==0)
					{
						if(k==0)printf("The winner is Candidate A\n\n");
						if(k==1)printf("The winner is Candidate B\n\n");
						if(k==2)printf("The winner is Candidate C\n\n");
						if(k==3)printf("The winner is Candidate D\n\n");
					}
				}
			}
		}
		
	}
			four[2]=108;
			int percent[5],sum=0;
			printf("\nResult in Precinct 4 (special case)\n");
			int w;
			for( w=0;w<4;w++)
			{
				sum=sum+four[w];
			}
			int e;
			for( e=0;e<4;e++)
			{
				percent[e] = four[e]*100/sum;
				if(e==0)printf("Candidate A -> %d %% \n",percent[e]);
				if(e==1)printf("Candidate B -> %d %% \n",percent[e]);
				if(e==2)printf("Candidate C -> %d %% \n",percent[e]);
				if(e==3)printf("Candidate D -> %d %% \n",percent[e]);
			}
			int lose=0,check,temp,sec=0;
			int c;
			for( c=0;c<4;c++)
			{
				check = percent[c]-50;
				if(0<=check) percent[c]=0;
				if(check<0) lose++;
			}
			if(lose==4)
			{
				int k;
				for( k=0;k<3;k++)
				{
					if(percent[k]>percent[k+1]) 
					{
						temp =percent[k];
						if(percent[k+1]>sec) sec=percent[k+1];
					}
					if(percent[k]<percent[k+1]) 
					{
						temp =percent[k+1];
						if(percent[k]>sec) sec=percent[k];
					}
				}
				if(percent[0]>sec) sec=percent[0];
				printf("Runoff between  ");
				for( k=0;k<5;k++)
				{
					if(percent[k]==temp)
					{
						if(k==0)printf("A & ");
						if(k==1)printf("B & ");
						if(k==2)printf("C & ");
						if(k==3)printf("D & ");
					}
				}
				for( k=0;k<5;k++)
				{
					if(percent[k]==sec)
					{
						if(k==0)printf("A\n\n");
						if(k==1)printf("B\n\n");
						if(k==2)printf("C\n\n");
						if(k==3)printf("D\n\n");
					}
				}
			}
			else
			{
				int k;
				for( k=0;k<4;k++)
				{
					if(percent[k]==0)
					{
						if(k==0)printf("The winner is Candidate A\n\n");
						if(k==1)printf("The winner is Candidate B\n\n");
						if(k==2)printf("The winner is Candidate C\n\n");
						if(k==3)printf("The winner is Candidate D\n\n");
					}
				}
			}
}

/*	Testing:
		Dalam uji kasus tersebut, program di run dan benar akan menampilkan tabel hasil
	pemilihan, persentase serta hasil dari pemilihan dalam lima kali pemilihan.
	
	Precinct        Candidate A     Candidate B     Candidate C     Candidate D
   	   1                192             48              206             37
  	   2                147             90              312             21
   	   3                186             12              121             38
  	   4                114             21              408             39
  	   5                267             13              382             29

Result in Precinct 1
Candidate A -> 39 %
Candidate B -> 9 %
Candidate C -> 42 %
Candidate D -> 7 %
Runoff between  C & A


Result in Precinct 2
Candidate A -> 25 %
Candidate B -> 15 %
Candidate C -> 54 %
Candidate D -> 3 %
The winner is Candidate C


Result in Precinct 3
Candidate A -> 52 %
Candidate B -> 3 %
Candidate C -> 33 %
Candidate D -> 10 %
The winner is Candidate A


Result in Precinct 4
Candidate A -> 19 %
Candidate B -> 3 %
Candidate C -> 70 %
Candidate D -> 6 %
The winner is Candidate C


Result in Precinct 5
Candidate A -> 38 %
Candidate B -> 1 %
Candidate C -> 55 %
Candidate D -> 4 %
The winner is Candidate C


Result in Precinct 4 (special case)
Candidate A -> 40 %
Candidate B -> 7 %
Candidate C -> 38 %
Candidate D -> 13 %
Runoff between  C & A
*/
