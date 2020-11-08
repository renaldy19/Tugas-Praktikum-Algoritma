#include <iostream>

using namespace std;

int main ()
{
	int m,n,pilih,hasil;
	cout<<"Nama : Renaldy Yohannes Aritonang"<<endl;	
	cout<<"Nim  : 124200057                 "<<endl;
	cout<<"=========================="<<endl;
	cout<<"Perkalian Dan Perpangkatan"<<endl;	
	cout<<"=========================="<<endl;
	cout<<"1.Perkalian"<<endl;
	cout<<"2.Perpangkatan"<<endl;
	cout<<"Pilih :";
	cin >>pilih;
	
	switch (pilih)
	{
		case 1 :
		cout<<"Input Angka N :";cin>>n;
		cout<<"Input Angka M :";cin>>m;
		cout<<"Hasil "<<n<<" x "<<m<<endl;
		hasil = 0;
	         for(int i=1; i<=n; i++)
	         {
		         hasil=hasil+m;
		         if(i!=n)
			     {cout<<m<<" + ";}
		         else
		         {cout<<m<<" = "<<hasil;}
	         }
		break;
		
		case 2 :
		cout<<"Input Angka N :";cin>>n;
		cout<<"Input Angka M :";cin>>m;
		cout<<"Hasil "<<n<<" ^ "<<m<<endl;
		hasil = 1;
	         for(int i=1; i<=m; i++)
	         {
		         hasil=hasil*n;
		         if(i!=m)
			     {cout<<n<<" X ";}
		         else
		         {cout<<n<<" = "<<hasil;}
	         }
	    break;
	}
	
}
		
	
		

			
		  
				

		

		
		
		
		
	



