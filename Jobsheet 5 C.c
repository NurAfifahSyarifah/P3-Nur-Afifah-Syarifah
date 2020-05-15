#include<stdio.h>
void contoh(int *a, int *b){
*a+=8;  // nim
*b+=7;  // bulan lahir
printf("\nnilai dalam fungsi = %i",*a);
printf("\nnilai dalam fungsi = %i ",*b);
}
int main()
{
int c=7; 
int d=7; 
printf("nilai sebelum digunakan= %i ",c);
printf("\nnilai sebelumdigunakan = %i ",d);
contoh(&c , &d);

//pemannggilan fungsi dengan refrence
printf("\nnilai sesudahdigunakan = %i ",c);
printf("\nnilai sesudahdigunakan = %i ",d);
}
