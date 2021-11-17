/*
    Ditulis oleh: Kelompok 2
    Nama(NRP):
        1. Mohammad Zhafran Dzaky (5025211142)
        2. Muhammad Zhafran (5025211100)
        3. Ken Anargya Alkausar (5025211168)

    Tanggal pembuatan: 1 November 2021
    modifikasi 1: 1 November 2021

    Problem:
        membuat program yang menampilkan jaringan listrik di suatu kota yang direpresentasikan dengan sel 3 x 4
        apabila setiap sel nya bernilai 1 maka tidak ada sektor yang mati listrik, tampilkan hal ini ke user
        dan apabila di sel nya ada yang bernilai 0, maka ada sektor yang mati listrik, tampilkan sektor mana yang mati pada user

    Analysis:
        untuk membuat program ini, kita perlu membuat array 2d berukuran 3 x 4 untuk sel nya lalu membuat fungsi yang meminta user untuk mengisinya,
        lalu buat fungsi untuk menampilkan array tersebut pada user, kemudian buat lagi fungsi untuk melihat apakah di dalam sel
        semuanya bernilai 1 atau ada yang 0,kemudian buat lagi fungsi untuk melihat dan menampilkan ke user sel mana saja yang mati

    Data requirements:
        Problem inputs:
            -

        Problem outputs:
            get_grid(grid);
            display_grid(grid)
            power_ok(grid)
            where_off(grid)

    Relevant formulas:
            -

    DESIGN
        Initial Algorithm:
            1. membuat array 2d berukuran 3 x 4
            2. membuat fungsi yang meminta user untuk mengisinya
            2. buat fungsi yang menampilkan array
            3. buat fungsi yang mengecek nilai setiap elemen dalam array
            4. buat fungsi yang menampilkan pada user sektor mana saja yang bernilai 0
            5. panggil fungsi - fungsi tadi ke fungsi utama

    refinement
        -

    IMPLEMENTATION
        pertama kita perlu membuat array 2d berukuran 3 x 4 dengan deklrasi array sebagai berikut :
            int grid[3][4];

        lalu buat fungsi yang meminta user mengisinya dengan statement :
            get_grid(int grid[3][4]){
                int i = 0, j = 0;
                for(i = 0;i < 3;i++){
                    for(j = 0;j < 4;j++){
                        scanf("%d", &grid[i][j]);
                    }
                }
            }

        kemudian buat fungsi untuk menampilkan array :
            display_grid(int grid[3][4]){
                int i = 0, j = 0;
                    printf("\n\nGRID DISPLAY\n");
                for(i = 0;i < 3;i++){
                    for(j = 0;j < 4;j++){
                        printf("%d ",  grid[i][j]);
                    }
                    printf("\n");
                }
            }

        kemudian kita buat fungsi untuk mengecek nilai setiap elemen dalam array :
            power_ok(int grid[3][4]){
                int i = 0, j = 0;
                int status = 1;
                for(i = 0;i < 3;i++){
                    for(j = 0;j < 4;j++){
                        if(grid[i][j] == 0){
                            status = 0;
                            break;
                        }
                    }
                }

                if (status == 1){ printf("Power is on throughout grid"); return 1; }
                else if (status == 0) { where_off(grid); return 0;}
            }

        kemudian buat fungsi untuk mencari dan menampilkan pada user sektor mana saja yang bernilai 0 (mati listrik)
            where_off(int grid[3][4]){
                printf("\n\nPower is off in sectors :\n");
                int i = 0, j = 0;
                for(i = 0;i < 3;i++){
                    for(j = 0;j < 4;j++){
                        if (grid[i][j] == 0){
                            printf("\t(%d,%d)\n", i, j);
                        }
                    }
                }
            }

        kemudian buat fungsi prototype nya dan panggil fungsi - fungsi tadi sesuai algoritma ke fungsi utama :
            void get_grid(int[3][4]);
            void display_grid(int[3][4]);
            int power_ok(int[3][4]);
            void where_off(int[3][4]);

            int main(){
                get_grid(grid);
                display_grid(grid);
                power_ok(grid);
            }

 */

#include<stdio.h>

int grid[3][4];

//function to get input of 3x4 grid
void get_grid(int[3][4]);

//function to display the 3x4 grid
void display_grid(int[3][4]);

//function to check power throughout the grid
int power_ok(int[3][4]);

//function to check where is the outage in the grid
void where_off(int[3][4]);


int main(){
	get_grid(grid);
	display_grid(grid);
	power_ok(grid);
}

get_grid(int grid[3][4]){
	int i = 0, j = 0;
	for(i = 0;i < 3;i++){
		for(j = 0;j < 4;j++){
			scanf("%d", &grid[i][j]);
		}
	}
}

display_grid(int grid[3][4]){
	int i = 0, j = 0;
		printf("\n\nGRID DISPLAY\n");
	for(i = 0;i < 3;i++){
		for(j = 0;j < 4;j++){
			printf("%d ",  grid[i][j]);
		}
		printf("\n");
	}
}

power_ok(int grid[3][4]){
	int i = 0, j = 0;
	int status = 1;
	for(i = 0;i < 3;i++){
		for(j = 0;j < 4;j++){
			if(grid[i][j] == 0){
				status = 0;
				break;
			}
		}
	}

	if (status == 1){ printf("Power is on throughout grid"); return 1; }
	else if (status == 0) { where_off(grid); return 0;}
}

where_off(int grid[3][4]){
	printf("\n\nPower is off in sectors :\n");
	int i = 0, j = 0;
	for(i = 0;i < 3;i++){
		for(j = 0;j < 4;j++){
			if (grid[i][j] == 0){
				printf("\t(%d,%d)\n", i, j);
			}
		}
	}
}

