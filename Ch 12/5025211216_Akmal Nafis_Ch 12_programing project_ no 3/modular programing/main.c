
#include "scheduling.h" //personal library type data  scheduling.h sebagai header 

int main(void) //deklarasi fungsi main void
{
    crew_t crew[MAX_CREWS]; //deklarasi struct crew_t berisi macro constan MAX_CREWS 3
    work_t jobs[MAX_JOBS];  //deklarasi struct work_t berisi macro constan MAX_JOBS 25
    char testchar[10];  //deklarasi inpt testchar type char > string
    int n_crews,n_jobs, output_crew, order[MAX_JOBS]; //deklarasi input type integer
    int temp,i,j; //untuk menyimpan perhitungan data sementara

    get_crew(crew,&n_crews); //memanggil fungsi get_crew
    get_work(jobs,&n_jobs); //get_work

    for(i=0; i<n_jobs; i++) //loop untuk menghitung banyak jobs dan mengakses menyimpan ke array struct 

    {
        match_crew_work(crew,&jobs[i],n_crews, &output_crew); //memeriksa data crew, jobs banyak kru  dalam fungsi match_crew_work
        jobs[i].crew =output_crew;
        jobs[i].start_hours =crew[output_crew].hours_so_far;
        crew[output_crew].hours_so_far+=jobs[i].hours;
    }

    printf("\n\nLOWEST COST SCHEDULE \n"); //mencetak LOWEST COST SCHEDULE

    print_schedule(crew, jobs,n_crews,n_jobs); //memanggil fungsi print_schedule

// looping untuk memeriksa, mengakses ,mengganti isi array setiap komponen struck tiap banyak jobs, kru,hours_so_far
// sesuai dengan inputnya dan biaya yang sesuai
    for(i=0; i<n_jobs; i++)
    {
        jobs[i].crew = -1;
        jobs[i].start_hours =0;
    }

    for(i=0; i<n_crews; i++)
    {
        crew[i].hours_so_far =0;
    }

    for(i=0; i<n_jobs; i++)
    {
        order[i] =i;
    }

    for(i=0; i<n_jobs; i++)
    {
        for(j=i; j<n_jobs; j++)
        {
            if(jobs[i].level)
            temp=order[i];
            order[i]=order[j];
            order[j]=temp;
        }
    }

    for(i=0; i<n_jobs; i++) 
    {
        j=order[i];
        earliest_time(crew,&jobs[j],n_crews, &output_crew); //memanggil fungsi earliest_time
        jobs[j].crew =output_crew;
        jobs[j].start_hours= crew[output_crew].hours_so_far;
        crew[output_crew].hours_so_far +=jobs[j].hours;
    }

    printf("\n\nFASTEST SCHEDULE\n"); //mencetak FASTEST SCHEDULE
    print_schedule(crew, jobs,n_crews, n_jobs); //memanggil fungsi print_schedule
    return (0);
}
