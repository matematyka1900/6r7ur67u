#include <iostream>
#include "head.h"
using namespace std;



int main()
{
	Biblioteka b1;
	Biblioteka b3[4];
	Biblioteka b2[10];
	Bibliotekarka b5[10];
	Czytelnik czytelnik;
	
	

	
	for (int i = 0; i < 10; i++)
	{
		b2[i].set_ewidencja(i * 100);
	}
	for (int i = 0; i < 10; i++)
	{
		cout << b2[i].get_ewidencja() << "\t"<<endl;
	}
	string l = "literatura:";
	cout << l << endl;
	b1.get_rodzaj();
	cout << endl;
	bibl(b2, 10);
	cout << endl;
	bibl(b5, 5);
	
	Bibliotekarka* baza = new Bibliotekarka;
	

	//dodajemy rekordy do bazy
	baza->zapisz_w_bazie(1, "Krol", "Macius");
	baza->zapisz_w_bazie(2, "Ogniem i mieczem", "Sienkiewicz");
	baza->zapisz_w_bazie(3, "Krol Edyp", "Sofokles");
	baza->zapisz_w_bazie(4, "Miszcz i Malgorzata", "Ktostam");
	baza->zapisz_w_bazie(5, "Krol Julian", "Julia");
	baza->zapisz_w_bazie(6, "Krol Jarek", "Jarek");
	
	// wyswietlamy 1 osobę - macieja
	/*cout << baza->pierwsza->tytul<<"\t";
	cout << baza->pierwsza->autor<<"\t";
	cout << baza->pierwsza->numer<< "\t";
	cout << baza->pierwsza->nastepna->tytul << "\t";
	cout << baza->pierwsza->nastepna->autor << "\t";
	cout << baza->pierwsza->nastepna->numer << "\t";
	cout << baza->pierwsza->nastepna->nastepna->tytul << "\t";
	cout << baza->pierwsza->nastepna->nastepna->autor << "\t";
	cout << baza->pierwsza->nastepna->nastepna->numer << "\t";
	cout << baza->pierwsza->nastepna->nastepna->nastepna->tytul << "\t";
	cout << baza->pierwsza->nastepna->nastepna->nastepna->autor << "\t";
	cout << baza->pierwsza->nastepna->nastepna->nastepna->numer << "\t";
	cout << baza->pierwsza->nastepna->nastepna->nastepna->nastepna->tytul << "\t";
	cout << baza->pierwsza->nastepna->nastepna->nastepna->nastepna->autor << "\t";
	cout << baza->pierwsza->nastepna->nastepna->nastepna->nastepna->numer << "\t";*/

	baza->wyswietl_liste();
	baza->usun_osobe(4);
	baza->wyswietl_liste();

	
	
	/*baza->dodaj_osobe("arkadiusz", "drugi", 44);
	baza->dodaj_osobe("dariusz", "trzeci", 19);
	baza->dodaj_osobe("andrzej", "czwarty", 21);*/
	//cout << b1.rodzaj[2] << endl;
	czytelnik.set(1324124, "Maciej", "Pokora");
	czytelnik.pokaz();

	

	//czytelnik.set();
	//czytelnik.pokaz();


	delete (baza);
	return 0;
	



}

