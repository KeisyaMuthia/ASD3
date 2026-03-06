/*PROGRAM Segitiga*/

#include <iostream>
#include <conio.h>

using namespace std;

/*deklarasi prosedur yang digunakan*/
void HitungLuasSegitiga();

main()
{
	/*DEKLARASI*/
	int i, N;

	/*PROGRAM UTAMA*/
	cout << "banyaknya segitiga?: "; cin >> N;
	for (i = 1; i <= N; i++)
		HitungLuasSegitiga();

	/*endfor*/
}
void HitungLuasSegitiga()
/*menghitung luas segitiga dengan rumus L = (alas x tinggi) /2*/

{
	/*DEKLARASI*/
	float alas;
	float tinggi;
	float luas;

	/*ALGORITMA*/
	cout << "panjang alas segitiga: "; cin >> alas;
	cout << "tinggi          : "; cin >> tinggi;
	luas = (alas * tinggi) / 2;
	cout << "luas segitiga        = "; cout << luas;
	getch();
}