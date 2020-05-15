#include <iostream>
#include <math.h>
using namespace std;

int perkalian(int a, int b);
float pembagian(float c, float d);
int main ()
{
	int n1, n2, hasil1;
	float n3, n4, hasil2;
	cout<<"Program Perkalian : \n";
	cout<<"-------------------\n";
	cout<<"Masukkan nilai 1 : ";cin>>n1;
	cout<<"Masukkan nilai 2 : ";cin>>n2;
	hasil1 = perkalian(n1,n2);
	cout<<"Hasil : "<<hasil1<<endl;
	cout<<"\n\n";
	cout<<"Program Pembagian : \n";
	cout<<"-------------------\n";
	cout<<"Masukkan nilai 1 : ";cin>>n3;
	cout<<"Masukkan nilai 2 : ";cin>>n4;
	hasil2 = pembagian (n3, n4);
	cout<<"Hasil : "<<hasil2<<endl;
}

int perkalian (int a, int b){
	return(a*b);}
float pembagian(float c, float d){
	return(c/d);}
