#include "scheduling.h" //personal library type data  scheduling.h sebagai header

void match_crew_work(crew_t crew[], work_t *work, int n_crews, int *min_cost_crew) //deklarasi fungsi void match_crew_work
{
    int i,flag=0;  //inisialisasi variable
    *min_cost_crew=0;
   
    for(i=0; i<n_crews; i++)
    {
        if((work->level <=crew[i].level) && ( (crew[i].cost <=crew[*min_cost_crew].cost) || (flag ==0))) /*membandingkan harga yang di keluarkan dengan perbedaan tiap 
																											kru sesuai level maintenance. dengan menhitung data dalam struct*/
        {
            *min_cost_crew =i;
            flag =1;
        }
    }

    if(flag ==0)
    {
        printf("No crew of required skill level available. Exit.\n"); //jika kru dan kondisi tidak terpenuhi maka dicetak karakter
        exit(1);
    }
}
