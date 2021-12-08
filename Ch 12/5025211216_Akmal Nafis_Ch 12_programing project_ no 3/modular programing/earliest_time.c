#include "scheduling.h" //personal library type data  scheduling.h sebagai header

void earliest_time(crew_t crew[], work_t *work, int n_crews, int *min_time_crew) //deklarasi fungsi void earliest_time 
{
    int i,flag = 0;
    *min_time_crew =0;

    for(i=0; i<n_crews; i++) //looping banyakknya n_jobs
    {
        if((crew[i].level >=work->level) && ((crew[i].hours_so_far<=crew[*min_time_crew].hours_so_far)|| (flag ==0))) //membandingkan waktu tercepat tiap kru sesuai levelnya dengan membandingkan data dalam structnya , 
																														//kriteria kru yang sesuai atau tidak dengan kondisinya 1/0 
        {
            *min_time_crew =i;
            flag =1;
        }

        else if((crew[i].hours_so_far == crew[*min_time_crew].hours_so_far) && (crew[i].level >= work->level) && ((crew[i].cost >= crew[*min_time_crew].cost)|| (flag ==0)))
        {
            *min_time_crew =i;
            flag =1;
        }
    }

    if(flag ==0) //kondisi tidak sesuai flag == 0 maka dicetak No crew of required skill level available. Exit
    {
        printf("No crew of required skill level available. Exit. \n"); 
        exit(1);
    }
}

