#include "scheduling.h" //personal library type data  scheduling.h sebagai header

void get_work(work_t work[], int *num_jobs) //deklarasi fungsi void get_work
{
    int i; 

    printf("\nEnter the number of maintenance jobs> "); //cetak Enter the number of maintenance jobs
    scanf("%d",num_jobs); //mengambil normal input

    while((*num_jobs <= 0) || (*num_jobs >MAX_JOBS)) //looping jika banyak jobs berlebih, input kembali
    {
        printf("Number is out of range. Maximum=%d. Try again.> ",MAX_JOBS); //cetak Number is out of range
        scanf("%d",num_jobs); //mengambil normal input nomor jobs
    }

    printf("For each job: input an id (4-digit integer), a skill level and estimated hours.\n"); //karakter dicetak

    for(i=0; i<*num_jobs; i++) //looping sesuai banyak num jobs
    {
        scanf("%d%d%d", &work[i].id, &work[i].level, &work[i].hours); //mengambil input dan disimpan dalam struct of array
        work[i].crew =0;
        work[i].start_hours =0;
    }
 
}

