#include "stdafx.h"

#include "pytanie.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>


void pytanie::wczytaj()
{
	std::fstream plik;
	plik.open("quiz.txt", std::ios::in);

	if (plik.good() == false)
	{
		std::cout << "blad pliku";
		exit(0);
	}
	int nr_linii = (nr_pytania - 1) * 6 + 1;
	int aktualny_nr = 1;
	std::string linia;

	while(getline(plik,linia))
	{
		if (aktualny_nr == nr_linii) tresc = linia;
		if (aktualny_nr == nr_linii + 1) a = linia;
		if (aktualny_nr == nr_linii + 2) b = linia;
		if (aktualny_nr == nr_linii + 3) c = linia;
		if (aktualny_nr == nr_linii + 4) d = linia;
		if (aktualny_nr == nr_linii + 5) poprawna = linia;
		aktualny_nr++;
	}
	plik.close();
}
	void pytanie::zadaj()
	{
		std::cout << std::endl << tresc << std::endl;
		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		std::cout << "c: " << c << std::endl;
		std::cout << "d: " << d << std::endl;
		std::cout << "-----------------------------------------" << std::endl;
		std::cout << std::endl << "Odpowiedz:  "; std::cin >> odpowiedz;

	}
	void pytanie::sprawdz()
	{
		if(odpowiedz==poprawna) punkt = 1;
		else punkt = 0;
	}