#include <iostream>
#include <fstream>
#include <istream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
#include <sstream>
#include <stdlib.h>
using namespace std;

	// Varijable

int Odabir = 0;
string Odabir1;
string OdabirDA;
string Artikal;
string ArtikalCijena;
vector <string> artikliVector;
vector <string> artikliCijenaVector;
string artikliArray[100];
string artikli;
string artikliArrayCijena[1000];
string artiklicijena;
string KasaArtikal1;
float KasaCijena1;
int it = 0;
float SumaArtikala;
string OdabirKasa;


// Upis Fajla u Varijablu


int main() {
	ifstream izlazfile("artikli.txt");
	while (izlazfile >> artikli) {
		artikliVector.push_back(artikli);
	}
	copy(artikliVector.begin(), artikliVector.end(), ostream_iterator<string>(cout, "\n"));

	ifstream izlazfilecijena("artikliCijena.txt");
	while (izlazfilecijena >> artiklicijena) {
		artikliCijenaVector.push_back(artiklicijena);
	}
	copy(artikliCijenaVector.begin(), artikliCijenaVector.end(), ostream_iterator<string>(cout, "\n"));

	// Program
start:system("CLS");
	Odabir = 0;
	Odabir1 = "";
	cout << "\tDobrodosao, Kasa br. 1\n";
	cout << "\tOdaberi Jednu Od Opcija \n";
	cout << "Unos Artikala\t";
	cout << "Ispis Svih Artikala\t";
	cout << "Kasa \n\t\t";
	cin >> ws;
	getline(cin, Odabir1);
	if (Odabir1 == "Unos Artikala" || Odabir1 == "unos artikala" || Odabir1 == "1" || Odabir1 == "unos" || Odabir1 == "Unos") {

		Odabir = 1;

	}
	else if (Odabir1 == "Ispis Svih Artikala" || Odabir1 == "ispis svih artikala" || Odabir1 == "2" || Odabir1 == "ispis" || Odabir1 == "Ispis") {

		Odabir = 2;

	}
	else if (Odabir1 == "Kasa" || Odabir1 == "kasa" || Odabir1 == "3") {

		Odabir = 3;

	}
	else {

		goto start;

	}
	// Unos Artikala
	if (Odabir == 1) {

	unos:system("CLS");

		cout << "Unesi Novi Artikal:\t";
		cin >> Artikal;
		cout << "\n";
		artikliVector.push_back(Artikal);
		ofstream izlazfile("artikli.txt");
		ostream_iterator<string> out_iterator1(izlazfile, "\n");
		copy(artikliVector.begin(), artikliVector.end(), out_iterator1);
		cout << "Unesi Cijenu Artikla:\t";
		cin >> ArtikalCijena;
		cout << "\n";

		artikliCijenaVector.push_back(ArtikalCijena);
		ofstream izlazfilecijena("artikliCijena.txt");
		ostream_iterator<string> out_iteratorcijena1(izlazfilecijena, "\n");
		copy(artikliCijenaVector.begin(), artikliCijenaVector.end(), out_iteratorcijena1);


		cout << "Da li zelite unjeti jos artikala? (Da ili Ne) \n";
		cin >> OdabirDA;

		if (OdabirDA == "Da" || OdabirDA == "da") {
			Artikal = "";
			OdabirDA = "";
			goto unos;
			
		}
		else {

			goto start;

		}
	}

	int brojartikalaint = 0;
	string line;
	ifstream brojartikala("artikli.txt");
	while (getline(brojartikala, line))
		brojartikalaint++;

	if (Odabir == 2) {

		int brojartikalaint = 0;
		string line;
		ifstream brojartikala("artikli.txt");
		while (getline(brojartikala, line))
			brojartikalaint++;

		cout << "Ispis Svih Artikala: \n";
		fstream inputfile;
		inputfile.open("artikli.txt");
		fstream inputfilecijene;
		inputfilecijene.open("artikliCijena.txt");
		if (inputfile.is_open() && inputfilecijene.is_open()) {
			for (int a = 0; a <= brojartikalaint; ++a) {

				getline(inputfile, artikliArray[a]);
				getline(inputfilecijene, artikliArrayCijena[a]);
				cout << "Artikal je:" << artikliArray[a] << "\t Cijena je: " << artikliArrayCijena[a] << "\n";
			}
			inputfile.close();
			inputfilecijene.close();
			system("pause");
			goto start;
		}
	}

	if (Odabir == 3) {

		int brojartikalaint = 0;
		string line;
		ifstream brojartikala("artikli.txt");
		while (getline(brojartikala, line))
			brojartikalaint++;

		fstream inputfile;
		inputfile.open("artikli.txt");
		fstream inputfilecijene;
		inputfilecijene.open("artikliCijena.txt");
		if (inputfile.is_open() && inputfilecijene.is_open()) {
			for (int a = 0; a < brojartikalaint; ++a) {

				getline(inputfile, artikliArray[a]);
				getline(inputfilecijene, artikliArrayCijena[a]);

				vector<float> ArtikliCVF;
				ifstream fin("artikliCijena.txt");
				float num;

				while (fin >> num)
					ArtikliCVF.push_back(num);

				SumaArtikala = 0;
			Kasa:KasaArtikal1 = "";
				cout << "Unesi jedan artikal: \n";
				cin >> KasaArtikal1;

				ptrdiff_t pos = find(artikliVector.begin(), artikliVector.end(), KasaArtikal1) - artikliVector.begin();
				KasaCijena1 = ArtikliCVF.at(pos);
				if (pos >= artikliVector.size()) {

				}
				cout << "Cijena je: \t" << KasaCijena1 << "KM";
				SumaArtikala = SumaArtikala + KasaCijena1;
				cout << "\n\nDa li zelite unjeti jos artikala? (Da ili Ne) \n";
				cin >> OdabirKasa;
				if (OdabirKasa == "Da" || OdabirKasa == "da") {
					goto Kasa;
				}
				else {
					cout << "Ukupna Suma je:\t " << SumaArtikala << "KM"<< endl << endl;

					cout << "Treba li izracunati kusur?" << endl;
					string KusurO;
					cin >> ws;
					getline(cin, KusurO);

					if (KusurO == "Da" || KusurO == "da" || KusurO == "1") {

						goto Kusur;

					}
					else {

						goto Ende;

					}

					Kusur:cout << "\tKusur:"<< endl;
					cout << "Dobiveni novac: \t";

					float Novac;
					cin >> Novac;
					float Kusur;
					Kusur = Novac - SumaArtikala;
					
					cout << "Kusur je: " << Kusur << "KM";


				}
			Ende:cout << "\n";
				system("pause");
				goto start;
				return 0;
			}
		}
	}
}

// Bakir Omanovic
