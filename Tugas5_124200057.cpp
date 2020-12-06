#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
int main ()
{
	int p,a,b,r,y,t,i,j,urutan;
	
	cout<<"Renaldy Yohannes Aritonang || 124200057"<<endl;
	cout<<"Gambar Bangun Datar========"<<endl;
	cout<<"1.Kotak Bolong"<<endl;
	cout<<"2.Segitiga"<<endl;
	cout<<"Pilih :";cin>>p;
	cout<<""<<endl;
	
	switch (p)
	{
		case 1:
		cout<<"Panjang :";cin>>a;
		cout<<"Lebar   :";cin>>b;
		for(r=0;r<a;r++)
		{
			for(y=0;y<b;y++)
			{
				if(r==0||r==a-1||y==0||y==b-1)
				{
				cout<<" *";
			}
			else{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
	break ;
	    case 2:
	    cout<<"Tinggi :";cin>>t;
	    for(i=1;i<=t;i++)
	    {
			urutan=i;
			for(j=1;j<=i;j++)
			{
				cout<<urutan<<" ";
				urutan=urutan+t-j;
			}
			cout<<endl;
		}
	}
}

			
		





		
	

		
