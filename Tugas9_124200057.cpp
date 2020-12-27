#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int i = 1,ba[i], x = 1, max = 0, min = 0, ma= 0, mini, a[999] = {0};
	
	float rt,jmlh;
	
	
	cout <<"Nama = Renaldy Yohannes Aritonang"<< endl;
	cout <<"Nim  = 124200057"<< endl;
	cout <<endl;
	
	cout<< "Masukkan Banyak Angka : "; cin>> x;
		for(i=0;i<x;i++)
		{
		cout<< "Angka ke-" << i + 1 << " : ";
	    cin>> ba[i];
		jmlh += ba[i];
		}
    cout<<""<<endl;
	
	cout<<"_____Hasil_____"<<endl;
	cout<<"Deret       : "; 
	for(i=0;i<x;i++)
		{
		cout<< ba[i]<<" ";}
	cout<<endl;
	max = ba[0];
	for(i=0;i<x;i++)
		{
		if(ba[i] > max)
			{
			max = ba[i];}
		}
	cout<<"Maksimum    : "<< max <<endl;
	min = ba[0];
	for(i=0;i<x;i++)
		{
		if(ba[i] < min)
			{
			min = ba[i];}			
		}
	cout<<"Minimum     : "<< min <<endl; 
		rt = jmlh/x;
	cout<<"Rata-rata   : "<< rt <<endl; 
	cout<<"Selisih Max : "; 
	for(i=1;i<=x;i++)
		{
		if(i<x)mini=i+1;
		a[i] = ba[i] - ba[mini];
		if(a[i]<0) a[i] = a[i] * (-1);
		ma = a[1];
		for(i=1;i<=x;i++)
			{
			if(a[i]>ma)
				{
				ma=a[i];}
			}
		}
	cout<< ma <<endl; 
}

