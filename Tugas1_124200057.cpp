#include <iostream>

using namespace std;

int main()
{
	char nm[30] ;
	int r, n1, n2, nim ;

		cout << " " << endl ;
		cout << " Nama 		: " ;
		cin.ignore () ;
		cin.getline (nm, sizeof(nm));
		cout << " NIM		: " ;
		cin >> nim ;
		cout << " Nilai UTS	: " ;
		cin >> n1 ;
		cout << " Nilai UAS	: "  ;
		cin >> n2 ;
		
		r =  ( n1 + n2 )/2;
		cout << " mahasiswa dengan nama " << nm << endl ;
		cout << " memiliki rata-rata nilai : " <<r << endl ;

		
	return 0;
}

