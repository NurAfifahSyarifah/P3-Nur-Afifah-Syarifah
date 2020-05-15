#include <iostream>
#include <stdlib.h>

using namespace std;

int pilihan, pil, ulang;
int C, hasil = 0;
char keluar;
int ARnilai[3];
const double jual = 2000;

int main ()
{	
	kembali:
	system("cls");

	cout<< ".//////////////////.\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\."<< endl;
	cout<< "#-------------------------------------#"<< endl;
	cout<< "|                                     |"<< endl;
	cout<< "|   Paket Internet 					  |"<< endl;
	cout<< "|                                     |"<< endl;
	cout<< "#-------------------------------------#"<< endl;
	cout<< ""<< endl;
	cout<< "1. As"<< endl;
	cout<< "2. exis"<< endl;
	cout<< "3. im3"<< endl;
	cout<< "4. exit"<< endl;
	cout<< ""<< endl;
	cout<< "Silahkan pilih paket internetnya : ";cin >> pilihan;
		
	switch(pilihan){
	case 1:
	cout << "As"<<endl;
	cout<< ""<< endl;
	cout<< "1. Internet Harian 3GB"<< endl;
	cout<< "   Kuota:3 GB"<< endl;
	cout<< "   Masa Berlaku:3 Hari"<< endl;
	cout<< "   Rp. 18.000"<< endl;
	cout<< ""<< endl;
	cout<< "2. Combo 4GB"<< endl;
	cout<< "   Kuota Internet:2 GB 2GB"<< endl;
	cout<< "   30 Hari"<< endl;
	cout<< "   60 Menit"<< endl;
	cout<< "   Rp. 38.000"<< endl;
	cout<< ""<< endl;
	cout<< "3. Best Deal Combo 12GB"<< endl;
	cout<< "   Kuota Internet:10 GB"<< endl;
	cout<< "   Youtube:2 GB"<< endl;
	cout<< "   Masa Aktif:30 Hari"<< endl;
	cout<< "   Bonus Telpon:100 Menit"<< endl;
	cout<< "   Rp120.000"<< endl;
	cout<< ""<< endl;
	cout<< "4. Kembali ke Utama"<< endl;
	cout<< ""<< endl;
	cout<< "   Silahkan pilih paketnya ; ";cin >> pil;
		if(pil==1){
			cout << "Terima Kasih atas pembeliannya paket 1";
		} else if (pil== 2){
			cout<<"Terima Kasih atas pembeliannya paket 2";
		}
		else if (pil==3){
			cout<<"Terima Kasih atas pembeliannya paket 3";
		}
		else if (pil==4){
			goto kembali;
		}
		else {
			cout<<"Pilihan tidak ada";
		}	
	break;
	
	case 2:
	cout << "exis"<<endl;
	cout<< ""<< endl;
	cout<< "1.  Kuota 30GB"<< endl;
	cout<< "   Kuota Utama: 1GB"<< endl;
	cout<< "   Kuota Nonton: 14GB"<< endl;
	cout<< "   Kuota Malam (01.00-06.00 WIB): 15GB"<< endl;
	cout<< "   Rp 51.900"<< endl;
	cout<< ""<< endl;
	cout<< "2.  Combo 10GB"<< endl;
	cout<< "   Kuota Utama: 5GB"<< endl;
	cout<< "   Kuota YouTube 24 Jam: 5GB"<< endl;
	cout<< "   Bonus Nelpon: 20 menit"<< endl;
	cout<< "   Bonus YouTube Tanpa Kuota: 01.00-06.00 WIB"<< endl;
	cout<< "   Rp. Rp 70.000"<< endl;
	cout<< ""<< endl;
	cout<< "3.  Combo 20GB"<< endl;
	cout<< "   Kuota Utama: 10GB"<< endl;
	cout<< "   Kuota YouTube 24 Jam: 10GB"<< endl;
	cout<< "   Bonus Nelpon: 40 menit"<< endl;
	cout<< "   Bonus YouTube Tanpa Kuota: 01.00-06.00 WIB"<< endl;
	cout<< "   Rp 100.000"<< endl;
	cout<< ""<< endl;
	cout<< "4. Kembali ke Utama"<< endl;
	cout<< ""<< endl;
	cout<< "   Silahkan pilih paketnya ; ";cin >> pil;
		if(pil==1){
			cout << "Terima Kasih atas pembeliannya paket 1";
		} else if (pil== 2){
			cout<<"Terima Kasih atas pembeliannya paket 2";
		}
		else if (pil==3){
			cout<<"Terima Kasih atas pembeliannya paket 3";
		}
		else if (pil==4){
			goto kembali;
		}
		else {
			cout<<"Pilihan tidak ada";
		}
	
	break;
	
	case 3:
	cout<<"Silahkan masukan pulsa yang dibeli?"<<endl;
     for(int i=0; i<3;i++){
          cout<<"Isi pulsa ke ["<<i<<"] = ";
          cin>>ARnilai[i];
          hasil+= ARnilai [i];
		  cout << hasil+jual;
     }
	break;
	
	case 4:
	do {
		cout <<"Apakah anda yakin ingin keluar?" << endl;
		C++;
	} while (C<5);
	cout << "Apakah anda yakin ingin keluar? y/t = ";
	cin >> keluar;
		if(keluar=='y'){
		exit(0);	
		} else if (keluar=='t'){
			goto kembali;
		}
		else {
			cout<<"Pilihan tidak ada";
		}	
	exit(0);	
	break;
	
	default:
	cout << "Tidak ada pilihan"<<endl;
	}

	return 0;	
}


