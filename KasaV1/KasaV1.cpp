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
string OdabirString = "";
string OdabirDA1 = "";
string OdabirDA2 = "";
string OdabirDA3 = "";
string OdabirDA4 = "";
string OdabirDA5 = "";
string OdabirDA6 = "";
string OdabirDA7 = "";
string OdabirDA8 = "";
string OdabirDA9 = "";
string OdabirDA10 = "";
string Artikal1 = "";
string Artikal2 = "";
string Artikal3 = "";
string Artikal4 = "";
string Artikal5 = "";
string Artikal6 = "";
string Artikal7 = "";
string Artikal8 = "";
string Artikal9 = "";
string Artikal10 = "";
string ArtikalCijena1;
string ArtikalCijena2;
string ArtikalCijena3;
string ArtikalCijena4;
string ArtikalCijena5;
string ArtikalCijena6;
string ArtikalCijena7;
string ArtikalCijena8;
string ArtikalCijena9;
string ArtikalCijena10;
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
	OdabirString = "";
	cout << "\tDobrodosao, Kasa br. 1\n";
	cout << "\tOdaberi Jednu Od Opcija \n";
	cout << "Unos Artikala\t";
	cout << "Ispis Svih Artikala\t";
	cout << "Kasa \n\t\t";
	cin >> ws;
	getline(cin, OdabirString);
	if (OdabirString == "Unos Artikala" || OdabirString == "unos artikala" || OdabirString == "1" || OdabirString == "unos" || OdabirString == "Unos") {

		Odabir = 1;

	}
	else if (OdabirString == "Ispis Svih Artikala" || OdabirString == "ispis svih artikala" || OdabirString == "2" || OdabirString == "ispis" || OdabirString == "Ispis") {

		Odabir = 2;

	}
	else if (OdabirString == "Kasa" || OdabirString == "kasa" || OdabirString == "3") {

		Odabir = 3;

	}
	// Unos Artikala
	if (Odabir == 1) {

		cout << "Maksimalni Unos Artikala je :10\n";
		cout << "Unesi Novi Artikal:\t";
		cin >> Artikal1;
		cout << "\n";
		artikliVector.push_back(Artikal1);
		ofstream izlazfile("artikli.txt");
		ostream_iterator<string> out_iterator1(izlazfile, "\n");
		copy(artikliVector.begin(), artikliVector.end(), out_iterator1);
		cout << "Unesi Cijenu Artikla:\t";
		cin >> ArtikalCijena1;
		cout << "\n";

		artikliCijenaVector.push_back(ArtikalCijena1);
		ofstream izlazfilecijena("artikliCijena.txt");
		ostream_iterator<string> out_iteratorcijena1(izlazfilecijena, "\n");
		copy(artikliCijenaVector.begin(), artikliCijenaVector.end(), out_iteratorcijena1);



		//Dodatni Artikli
		cout << "Da li zelite unjeti jos artikala? (Da ili Ne) \n";
		cin >> OdabirDA1;

		if (OdabirDA1 == "Da" || OdabirDA1 == "da") {

			cout << "Unesi Novi Artikal:\t";
			cin >> Artikal2;
			cout << "\n";
			artikliVector.push_back(Artikal2);
			ofstream izlazfile("artikli.txt");
			ostream_iterator<string> out_iterator2(izlazfile, "\n");
			copy(artikliVector.begin(), artikliVector.end(), out_iterator2);
			cout << "Unesi Cijenu Artikla:\t";
			cin >> ArtikalCijena2;
			cout << "\n";

			artikliCijenaVector.push_back(ArtikalCijena2);
			ofstream izlazfilecijena("artikliCijena.txt");
			ostream_iterator<string> out_iteratorcijena2(izlazfilecijena, "\n");
			copy(artikliCijenaVector.begin(), artikliCijenaVector.end(), out_iteratorcijena2);

			cout << "Da li zelite unjeti jos artikala? (Da ili Ne) \n";
			cin >> OdabirDA2;

			if (OdabirDA2 == "Da" || OdabirDA2 == "da") {

				cout << "Unesi Novi Artikal:\t";
				cin >> Artikal3;
				cout << "\n";
				artikliVector.push_back(Artikal3);
				ofstream izlazfile("artikli.txt");
				ostream_iterator<string> out_iterator3(izlazfile, "\n");
				copy(artikliVector.begin(), artikliVector.end(), out_iterator3);
				cout << "Unesi Cijenu Artikla:\t";
				cin >> ArtikalCijena3;
				cout << "\n";

				artikliCijenaVector.push_back(ArtikalCijena3);
				ofstream izlazfilecijena("artikliCijena.txt");
				ostream_iterator<string> out_iteratorcijena3(izlazfilecijena, "\n");
				copy(artikliCijenaVector.begin(), artikliCijenaVector.end(), out_iteratorcijena3);


				cout << "Da li zelite unjeti jos artikala? (Da ili Ne) \n";
				cin >> OdabirDA3;

				if (OdabirDA3 == "Da" || OdabirDA3 == "da") {

					cout << "Unesi Novi Artikal:\t";
					cin >> Artikal4;
					cout << "\n";
					artikliVector.push_back(Artikal4);
					ofstream izlazfile("artikli.txt");
					ostream_iterator<string> out_iterator4(izlazfile, "\n");
					copy(artikliVector.begin(), artikliVector.end(), out_iterator4);
					cout << "Unesi Cijenu Artikla:\t";
					cin >> ArtikalCijena4;
					cout << "\n";

					artikliCijenaVector.push_back(ArtikalCijena4);
					ofstream izlazfilecijena("artikliCijena.txt");
					ostream_iterator<string> out_iteratorcijena4(izlazfilecijena, "\n");
					copy(artikliCijenaVector.begin(), artikliCijenaVector.end(), out_iteratorcijena4);

					cout << "Da li zelite unjeti jos artikala? (Da ili Ne) \n";
					cin >> OdabirDA4;

					if (OdabirDA4 == "Da" || OdabirDA4 == "da") {

						cout << "Unesi Novi Artikal:\t";
						cin >> Artikal5;
						cout << "\n";
						artikliVector.push_back(Artikal5);
						ofstream izlazfile("artikli.txt");
						ostream_iterator<string> out_iterator5(izlazfile, "\n");
						copy(artikliVector.begin(), artikliVector.end(), out_iterator5);
						cout << "Unesi Cijenu Artikla:\t";
						cin >> ArtikalCijena5;
						cout << "\n";

						artikliCijenaVector.push_back(ArtikalCijena5);
						ofstream izlazfilecijena("artikliCijena.txt");
						ostream_iterator<string> out_iteratorcijena5(izlazfilecijena, "\n");
						copy(artikliCijenaVector.begin(), artikliCijenaVector.end(), out_iteratorcijena5);

						cout << "Da li zelite unjeti jos artikala? (Da ili Ne) \n";
						cin >> OdabirDA5;

						if (OdabirDA5 == "Da" || OdabirDA5 == "da") {

							cout << "Unesi Novi Artikal:\t";
							cin >> Artikal6;
							cout << "\n";
							artikliVector.push_back(Artikal6);
							ofstream izlazfile("artikli.txt");
							ostream_iterator<string> out_iterator6(izlazfile, "\n");
							copy(artikliVector.begin(), artikliVector.end(), out_iterator6);
							cout << "Unesi Cijenu Artikla:\t";
							cin >> ArtikalCijena6;
							cout << "\n";

							artikliCijenaVector.push_back(ArtikalCijena6);
							ofstream izlazfilecijena("artikliCijena.txt");
							ostream_iterator<string> out_iteratorcijena6(izlazfilecijena, "\n");
							copy(artikliCijenaVector.begin(), artikliCijenaVector.end(), out_iteratorcijena6);

							cout << "Da li zelite unjeti jos artikala? (Da ili Ne) \n";
							cin >> OdabirDA6;

							if (OdabirDA6 == "Da" || OdabirDA6 == "da") {

								cout << "Unesi Novi Artikal:\t";
								cin >> Artikal7;
								cout << "\n";
								artikliVector.push_back(Artikal7);
								ofstream izlazfile("artikli.txt");
								ostream_iterator<string> out_iterator7(izlazfile, "\n");
								copy(artikliVector.begin(), artikliVector.end(), out_iterator7);
								cout << "Unesi Cijenu Artikla:\t";
								cin >> ArtikalCijena7;
								cout << "\n";

								artikliCijenaVector.push_back(ArtikalCijena7);
								ofstream izlazfilecijena("artikliCijena.txt");
								ostream_iterator<string> out_iteratorcijena7(izlazfilecijena, "\n");
								copy(artikliCijenaVector.begin(), artikliCijenaVector.end(), out_iteratorcijena7);

								cout << "Da li zelite unjeti jos artikala? (Da ili Ne) \n";
								cin >> OdabirDA7;

								if (OdabirDA7 == "Da" || OdabirDA7 == "da") {

									cout << "Unesi Novi Artikal:\t";
									cin >> Artikal8;
									cout << "\n";
									artikliVector.push_back(Artikal8);
									ofstream izlazfile("artikli.txt");
									ostream_iterator<string> out_iterator8(izlazfile, "\n");
									copy(artikliVector.begin(), artikliVector.end(), out_iterator8);
									cout << "Unesi Cijenu Artikla:\t";
									cin >> ArtikalCijena8;
									cout << "\n";

									artikliCijenaVector.push_back(ArtikalCijena8);
									ofstream izlazfilecijena("artikliCijena.txt");
									ostream_iterator<string> out_iteratorcijena8(izlazfilecijena, "\n");
									copy(artikliCijenaVector.begin(), artikliCijenaVector.end(), out_iteratorcijena8);

									cout << "Da li zelite unjeti jos artikala? (Da ili Ne) \n";
									cin >> OdabirDA8;

									if (OdabirDA8 == "Da" || OdabirDA8 == "da") {

										cout << "Unesi Novi Artikal:\t";
										cin >> Artikal9;
										cout << "\n";
										artikliVector.push_back(Artikal9);
										ofstream izlazfile("artikli.txt");
										ostream_iterator<string> out_iterator9(izlazfile, "\n");
										copy(artikliVector.begin(), artikliVector.end(), out_iterator9);
										cout << "Unesi Cijenu Artikla:\t";
										cin >> ArtikalCijena9;
										cout << "\n";

										artikliCijenaVector.push_back(ArtikalCijena9);
										ofstream izlazfilecijena("artikliCijena.txt");
										ostream_iterator<string> out_iteratorcijena9(izlazfilecijena, "\n");
										copy(artikliCijenaVector.begin(), artikliCijenaVector.end(), out_iteratorcijena9);
										cout << "Da li zelite unjeti jos artikala? (Da ili Ne) \n";
										cin >> OdabirDA9;

										if (OdabirDA9 == "Da" || OdabirDA9 == "da") {

											cout << "Unesi Novi Artikal:\t";
											cin >> Artikal10;
											cout << "\n";
											artikliVector.push_back(Artikal10);
											ofstream izlazfile("artikli.txt");
											ostream_iterator<string> out_iterator10(izlazfile, "\n");
											copy(artikliVector.begin(), artikliVector.end(), out_iterator10);
											cout << "Unesi Cijenu Artikla:\t";
											cin >> ArtikalCijena10;
											cout << "\n";

											artikliCijenaVector.push_back(ArtikalCijena10);
											ofstream izlazfilecijena("artikliCijena.txt");
											ostream_iterator<string> out_iteratorcijena10(izlazfilecijena, "\n");
											copy(artikliCijenaVector.begin(), artikliCijenaVector.end(), out_iteratorcijena10);

											cout << "Da li zelite unjeti jos artikala? (Da ili Ne) \n";
											cin >> OdabirDA10;

											if (OdabirDA10 == "Da" || OdabirDA10 == "da") {

												cout << "nemoze";

											}
											else if (OdabirDA10 == "Ne" || OdabirDA10 == "ne") {

												goto start;
											}
										}
										else if (OdabirDA9 == "Ne" || OdabirDA9 == "ne") {

											goto start;
										}
									}
									else if (OdabirDA8 == "Ne" || OdabirDA8 == "ne") {

										goto start;
									}
								}
								else if (OdabirDA7 == "Ne" || OdabirDA7 == "ne") {

									goto start;
								}
							}
							else if (OdabirDA6 == "Ne" || OdabirDA6 == "ne") {

								goto start;
							}
						}
						else if (OdabirDA5 == "Ne" || OdabirDA5 == "ne") {

							goto start;
						}
					}
					else if (OdabirDA4 == "Ne" || OdabirDA4 == "ne") {

						goto start;
					}
				}
				else if (OdabirDA3 == "Ne" || OdabirDA3 == "ne") {

					goto start;
				}
			}
			else if (OdabirDA2 == "Ne" || OdabirDA2 == "ne") {

				goto start;
			}
		}
		else if (OdabirDA1 == "Ne" || OdabirDA1 == "ne") {

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
					cout << "Ukupna Suma je:\t " << SumaArtikala << "KM";


				}
				cout << "\n";
				system("pause");
				goto start;
				return 0;
			}
		}
	}
}

