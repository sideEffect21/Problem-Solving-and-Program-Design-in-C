#include "scheduling.h" //personal library type data  scheduling.h sebagai header

void print_schedule(crew_t crew[], work_t work[],int n_crews, int n_jobs) //deklarasi fungsi void print_schedule
{
    int i, earliest_time =-1; // inisialisasi variable 
    int end_time, total_cost=0;

    printf("\nJOB \tSTART TIME\t END_TIME\tCREW\n"); //cetak START TIME END_TIME CREW

    for(i=0; i<n_jobs; i++) //looping untuk mencetak jadwal kru dengan waktu tercepat dan atau dengan biaya termurah
    {
        end_time = work[i].start_hours +work[i].hours;
        printf("%4d\t%10d\t%9d\t%4d\n", work[i].id,work[i].start_hours, end_time, work[i].crew); total_cost +=crew[work[i].crew].cost * work[i].hours;

        if (end_time > earliest_time) 
        earliest_time=end_time;
    }

    printf("\nALL JOBS WILL BE FINISHED IN %d HOURS AT A COST OF $%d\n", earliest_time, total_cost); //cetak waktu dan biaya yang digunakan 
}

