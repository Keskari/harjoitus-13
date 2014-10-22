// Harjoitus 13a, tehnyt Miko Keskinen

#include <iostream>
using namespace std;
#include <cstring>
void main()
{
	char etunimi[20], sukunimi[20], kokonimi[45];
	cout << "Syota etunimi, ja sukunimi\n";
	cin >> etunimi >> ws >> sukunimi;

	strcpy_s(kokonimi, etunimi);
	strcat_s(kokonimi, " ");
	strcat_s(kokonimi, sukunimi);

	cout << "Nimesi on " << kokonimi;
}


