/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2025/2026
 *   Modul               : Overview of C Language
 *   Hari dan Tanggal    : 22 April 2026
 *   Nama (NIM)          : Muhammad Adli Syauqi (13224082)
 *   Nama File           : soal1.c
 *   Deskripsi           : Program menerima sekuens bilangan lalu memasukannya ke fungsi untuk dievaluasi menggunakan pointer (passing by reference)
 * 
 */

 #include <stdio.h>
 #include <stdlib.h>

 void fungsi(int *array, int N, int *sum, float *avg, int *max, int *idx){
    *sum = 0;
    *avg = 0;
    *max = array[0];
    *idx = 0;

    for(int i = 0; i < N; i++){
        *sum += array[i];
        if(*max < array[i]){
            *max = array[i];
            *idx = i;
        }
    }
    *avg = (float)*sum/N;
 }

 int main(){
    int N;
    scanf("%d", &N);

    int array[N];

    for(int i = 0; i < N; i++){
        scanf("%d", &array[i]);
    }

    int sum;
    float avg;
    int max;
    int idx;

    fungsi(array, N, &sum, &avg, &max, &idx);

    printf("SUM %d\n", sum);
    printf("AVG %.2f\n", avg);
    printf("MAX %d\n", max);
    printf("IDX %d\n", idx);

 }
