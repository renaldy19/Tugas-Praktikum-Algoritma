#include <iostream>

using namespace std;

int main()
{
	int A, B, C, D, Total ;
	
	cout <<"Biaya dari pemerintah"<<endl; 
	cout <<"Biaya yang didapatkan Keluarga"<<endl;

	//proses penginputan umur Ayah
	cout <<"Umur Ayah	:";
	cin >> A ;
	// if,else
	  if (A > 20) {
         A = 30000;
    } else if (A >= 12 &&  A <= 20) {
         A = 20000; 
    } else if (A <= 12 ) { 
         A = 15000;
    } 
	
	//Proses penginputan umur Ibu
	cout <<"Umur Ibu	:";
	cin >> B ;
	//if, else
	  if (B > 20) {
         B = 30000;
    } else if (B >= 12 && B  <= 20) {
         B = 20000; 
    } else if (B <= 12 ) { 
         B = 15000;
    } 
    
	//Proses penginputan umur Anak 1
	cout <<"Umur Anak 1	:";
	cin >> C ;
	//if,else
	  if (C > 20) {
         C = 30000;
    } else if (C >= 12 && C <= 20) {
         C = 20000; 
    } else if (C <= 12 ) { 
         C = 15000;
    } 
    
    //Proses penginputan umur Anak 2
    cout <<"Umur Anak 2	:";
    cin >> D ;
    //if,else
      if (D > 20) {
         D = 30000;
    } else if (D >= 12 && D  <= 20) {
         D = 20000; 
    } else if (D <= 12 ) { 
         D = 15000;
    }
    
    //proses penghitungan total yang diterima per bulan
    Total = (A*30)+(B*30)+(C*30)+(D*30) ;
    
    cout <<"Biaya yang diterima oleh keluarga adalah Rp."<< Total << endl ;
	
	return 0; 
}

