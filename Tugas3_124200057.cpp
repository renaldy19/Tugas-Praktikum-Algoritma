#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
	string Username,Password;
	float NH, UTS, UAS, rata_a, rata_b;
	int  MK;
	
	cout<<"Renaldy"<<endl;
	cout<<"124200057"<<endl;
	cout<<"=============================="<<endl;
	cout<<"==========LOGIN AKUN=========="<<endl;
	cout<<"=============================="<<endl;
	
	//proses penginputan Username dan Password
	
	cout<<"Username   : "; cin>>Username;
	cout<<"Password   : "; cin>>Password;
	
	if (Username!="Renaldy" && Password!="bangjago") {cout <<"Username Dan Password Salah"<<endl;}
     	else if (Username=="Renaldy" && Password!="bangjago") {cout <<" Password Salah"<<endl;}
	    else if (Username!="Renaldy" && Password=="bangjago") {cout <<" Username Salah"<<endl;}
	    else if (Username=="Renaldy" && Password=="bangjago") 
	        {cout <<"Login Akun Anda Berhasil"<<endl;
			 cout <<"========================"<<endl;
			 cout <<""<<endl;
			 cout <<"=============================="<<endl;
			 cout <<"Input Nilai Mata Kuliah Anda  "<<endl;
             cout <<"=============================="<<endl;
             cout <<"|1.Algoritma dan Pemograman  |"<<endl;
             cout <<"|2.Kalkulus		          |"<<endl;
             cout <<"=============================="<<endl;
             cout <<"Pilih MataKuliah  :  ";
             cin  >>MK;
             cout <<"======================="<<endl;}
             
          switch (MK)
		{
		case 1 : 
			cout<<"Nilai Harian : ";
			cin >>NH ;
			cout<<"Nilai UTS	: ";
			cin >>UTS;
			cout<<"Nilai UAS	: ";
			cin >>UAS;
			cout<<""<<endl;
			rata_a =(NH+UTS+UAS)/3;
			
				if (rata_a>=80 && rata_a<=100)
				{
				cout<<"Selamat Anda Lulus Mata Kuliah Algoritma dan Pemograman dengan nilai " <<fixed<<setprecision(4)<< rata_a <<endl;
				}
				else if (rata_a>100)
				{
				cout<<"Anda menginput Data Yang Salah"<<endl;
			    }
				else
				{
				cout<<"Maaf Anda Tidak Lulus Mata Kuliah Algoritma dan Pemograman dengan nilai " <<fixed<<setprecision(4)<< rata_a <<endl;
				}
			break;
			
		case 2 :
			cout<<"Nilai Harian	: ";
			cin>>NH;
			cout<<"Nilai UTS 	: ";
			cin>>UTS;
			cout<<"Nilai UAS	: ";
			cin>>UAS;
			rata_b = (NH+UTS+UAS)/3;
			
				if (rata_b>=80 && rata_b<=100)
				{
				cout<<"Selamat Anda Lulus Mata Kuliah Kalkulus dengan nilai " <<fixed<<setprecision(4)<< rata_b <<endl;
				}
				else if (rata_b>100)
				{
				cout<<"Anda menginput Data Yang Salah"<<endl;
			    }
				else
				{
				cout<<"Maaf Anda Tidak Lulus Mata Kuliah Kalkulus dengan nilai " <<fixed<<setprecision(4)<< rata_b <<endl;	
				}
			break;
			
		case 3 :
			cout<<"Anda Menginput Data Yang Salah"<<endl;
			break;
		}

	  
	    
	
		

}
