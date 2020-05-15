#include<stdio.h>
void contoh (int a, int b){
	a+=5;
	b+=7;
	printf("\nNilai dalam fungsi = %i",a);
	printf("\nNilai dalam fungsi = %i",b);
}
int main (){
	int c=7;
	int d=7;
	printf("Nilai sebelum digunakan = %i\n",c);
	printf("Nilai sebelum digunakan = %i",d);
	contoh (c,d);
	printf("\nNilai sesudah digunakan = %i",c);
	printf("\nNilai sesudah digunakan = %i",d);
}
