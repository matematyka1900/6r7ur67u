#include <iostream>
#include "head.h"


using namespace std;

void Biblioteka::set_ewidencja(int k)
{
	ewidencja = k;
}
void Biblioteka::get_rodzaj()
{
	for (int i = 0; i < 4; i++)
	{
		cout << rodzaj[i] << endl;
	}

}

void bibl(Biblioteka b2[] , int k)
{
//dodawanie pozycji
	for (int i = 0; i < k; i++)
	{
		cout << b2[i].get_ewidencja() << "\t";
	}
	
}
void bibl(Bibliotekarka b1[], int k)
{
	for (int i = 0; i < k; i++)
	{
		cout << b1[i].get_pesel() << endl;
	}

}
void Czytelnik::set(const int& psl, const string& im, const string& nazw)
{
	pesel = psl;
	imie = im;
	nazwisko = nazw;
}
void Czytelnik::set()
{
	pesel = 141234;
	imie = "Matek";
	nazwisko = "Jarek";
}
void Czytelnik::pokaz()
{
	cout << "pesel :" << pesel << "\t" << "imie :" << imie << "\t" << "nazwisko :" << nazwisko << endl;
}
void Bibliotekarka::usun_osobe(int nr)
{
	// jezeli to pierwszy element listy
	if (nr == 1)
	{
		Ksiazka* temp = pierwsza;
		pierwsza = temp->nastepna; //ustawiamy poczatek na drugi element
		delete temp; // usuwamy stary pierwszy element z pamieci
	}
	// je¿eli nie jest to pierwszy element
	else if (nr >= 2)
	{
		int j = 1;

		// do usuniecia srodkowego elemetnu potrzebujemy wskaznika na osobe n-1
		// wskaznik *temp bedzie wskaznikiem na osobe poprzedzajaca osobe usuwana
		Ksiazka* temp = pierwsza;

		while (temp)
		{
			// sprawdzamy czy wskaznik jest na osobie n-1 niz usuwana
			if ((j + 1) == nr) break;

			// jezeli nie to przewijamy petle do przodu
			temp = temp->nastepna;
			j++;
		}

		// wskaznik *temp wskazuje teraz na osobe n-1
		// nadpisujemy wkaznik n-1 z osoby n na osobe n+1
		// bezpowrotnie tracimy osobe n-ta

		// jezeli usuwamy ostatni element listy
		if (temp->nastepna->nastepna == 0) {
			delete temp->nastepna;
			temp->nastepna = 0;
		}
		// jezeli usuwamy srodkowy element
		else {
			Ksiazka* usuwana = temp->nastepna;
			temp->nastepna = temp->nastepna->nastepna;
			delete usuwana;
		}
		cout << "zaktulizowana lista" << endl;
	}
}