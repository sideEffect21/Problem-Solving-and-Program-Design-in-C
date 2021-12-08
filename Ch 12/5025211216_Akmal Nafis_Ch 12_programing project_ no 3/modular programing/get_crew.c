#include "scheduling.h" //personal library type data  scheduling.h sebagai header

void get_crew(crew_t crew[], int *num_crews) //deklarasi fungsi void get_crew
{
    int i;

    printf("Enter the number of crews> "); //cetak karakter 
    scanf("%d",num_crews); // mengambil iinput user ke num_crews

    while((*num_crews <=0) || (*num_crews>MAX_CREWS)) //looping dengan menggunakan operator logical
    {
        printf("Number is out of range. Maximum=%d. Try again.> ",MAX_CREWS); //jika false maka dicetak karakter
        scanf("%d",num_crews); //ulang pengambilan input
    }

    printf("For each crew: input a skill level and cost per hour. \n"); //cetak karakter

    for(i=0; i<*num_crews; i++) //untuk mengambil data crew, level dan cost memasukkannya ke struct of arr
    {
        scanf("%d%d",&crew[i].level, &crew[i].cost);
        crew[i].hours_so_far =0;
    }
}
