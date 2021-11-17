/*
    Ditulis oleh: Kelompok 2
    Nama(NRP):
        1. Mohammad Zhafran Dzaky (5025211142)
        2. Muhammad Zhafran (5025211100)
        3. Ken Anargya Alkausar (5025211168)

    Tanggal pembuatan: 1 November 2021
    modifikasi 1: 1 November 2021

    Problem:
        memilih dan membuat program yang paling efisien untuk menemukan suatu elemen dari
        sebuah array berukuran sangat kecil dan berisikan bilangan bulat

    Analysis:
        untuk membuat program ini, kita perlu membuat array berukuran kecil dan berisikan bilangan bulat,
        kemudian dengan menggunakan looping, kita akan mencari bilangan inputan user di dalam array tersebut
        dan menampilkan hasilnya kepada user

    Data requirements:
        Problem inputs:
            int n

        Problem outputs:
            int i

    Relevant formulas:
            -

    DESIGN
        Initial Algorithm:
            1. membuat array yang berisi 5 bilangan bulat
            2. menerima inputan angka yang ingin dicari oleh user
            3. mencari angka inputan di dalam array menggunakan looping
            4. menampilkan hasilnya kepada user

    refinement
        1.1 array yang digunakan
            arr[5] = {1,2,3,4,5};

    IMPLEMENTATION
        pertama kita perlu membuat array berisikan 5 bulat dengan statement :
            int arr[5] = {1,2,3,4,5};

        kemudian kita bisa meminta user untuk menginput data angka yang ingin dicari dengan statement :
            printf("enter an integer : ");
            scanf("%d", &x);

        lalu kita bisa mencari angka inputan user tadi dengan memindai isi array satu per satu menggunakan looping dengan statement:
            for(i = 0; i < 5; i++){
            if(arr[i] == x){
                search = 1;
                break;}
            }

        dan untuk menampilkan hasilnya pada user, kita dapat menggunakan statement:
            if(search == 1)printf("your number is the %dth number in the array\n", i+1);    //jika ditemukan angkanya
            else printf("we can't find your number in the array\n");                        //jika tidak ditemukan angkanya

 */

#include <stdio.h>

int main()
{
    int x,i,search;
    int arr[5] = {1,2,3,4,5};
    printf("enter an integer : ");
    scanf("%d", &x);
    for(i = 0; i < 5; i++){
        if(arr[i] == x){
            search = 1;
            break;
        }
    }
    if(search == 1)printf("your number is the %dth number in the array\n", i+1);
    else printf("we can't find your number in the array\n");
    return 0;
}

/*
Testing

enter an integer : 4
your number is the 4th number in the array

enter an integer : 7
we can't find your number in the array

*/
