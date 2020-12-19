#include <iostream>
#include <conio.h>
#include <iomanip>
#include <stdio.h>
using namespace std;

int main ()
{	int pilih,r,j,b,a;
	float l, k, v,phi = 3.14 ; 
	string up;
	

	cout <<"Nama =Renaldy Yohannes Aritonang"<< endl;
	cout <<"NIM  = 124200057"<< endl;
	cout <<"---------------------------------"<<endl;
	cout <<endl;	
	ulang :	
	cout <<"Hitung Lingkaran================="<<endl;
	cout <<"1. Luas Lingkarang \n2. Keliling Lingkaran \n3. Volume Tabung"<<endl;
	cout <<"Pilih  :"; cin >>pilih;
	switch (pilih)
	{
	case (1) :
		cout <<"Jari-jari : "; cin >> r ; 	
		l = phi * r *r ;									
		cout <<"Luas Lingkaran  : "<< l <<endl;
		cout <<"Ulangi Program ? (y/n)"; cin >> up;
		cout <<endl;
	break ;
	
	case (2) :
		cout <<"Jari-jari  : "; cin >>j ;	
		k = phi * (2 * j) ;
		cout <<"Keliling Lingkaran  : "<<k<<endl; 
		cout <<"Ulangi Program ? (y/n) "; cin >> up;
		cout <<endl;	
	break ;
			
	case (3) :
		 cout <<"Jari-jari : "; cin >>a ;
		 cout <<"Tinggi    : "; cin >>b ;
		 v = (phi * a * a ) * b ;					
		 cout <<"Volume Lingkaran  : "<< v <<endl;
		 cout <<"Ulangi Program ? (y/n) "; cin >> up;
		 cout <<endl;
    break ;
    
    default : 
		cout<< "Input Anda Salah"<<endl;
	}
if(up=="y")
{
	goto ulang;
}
else
{
	cout<<"Program Anda Telah Selesai,Terimakasih"<<endl;
}
}
	


    

		 


		 

	




 



		
		

