/*
  Awal file sumber di mana perpustakaan pribadi (personal library) dan  sistem I/O
  digunakan.
 */

#include <stdio.h>    // system's standard I/O functions    
#define MAX_CREWS 3  // macro constan untuk crew
#define MAX_JOBS 25	//macro constan untuk jobs

typedef struct { 
    int level, cost, hours_so_far;  //deklarasi isi struct tipe crew_t dengan komponen level, cost, hours_so_far
} crew_t;

typedef struct
{
    int id, level, hours, crew, start_hours; //deklarasi isi struct tipe work_t dengan komponen id, level, hours, crew, start_hours
} work_t;

void get_crew(crew_t crew[], int *num_crews);  //fungsi untuk memindai dan menyimpan data kru dalam struktur yang sesuai.
void get_work(work_t work[], int *num_jobs);   //fungsi untuk memindai dan menyimpan dalam struktur yang sesuai data pemeliharaan yang diperlukan.
void match_crew_work(crew_t crew[], work_t *work, int n_crews, int *min_cost_crew); /*Sebuah fungsi yang memeriksa tingkat pemeliharaan (maintenance level) yang diperlukan terhadap 
																				   kemampuan kru dan mengembalikan 
																					jumlah kru dengan biaya terendah yang dapat melakukan pemeliharaan.*/
																					
void earliest_time(crew_t crew[], work_t *work, int n_crews, int *min_time_crew); /*Sebuah fungsi yang memeriksa tingkat pemeliharaan yang diperlukan terhadap kru
																					kemampuan dan jadwal saat ini dan mengembalikan jumlah yang memenuhi jumlah	
																					kru yang memenuhi syarat dengan biaya terendah dikembalikan. sesuai dengan waktu tercepat*/
void print_schedule(crew_t crew[], work_t work[], int n_crews, int n_jobs);     // fungsi untuk mencetak schedule mengumpulkan jam yang 
																					//diperlukan untuk setiap kru karena setiap tugas pemeliharaan dijadwalkan.



