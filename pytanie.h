#pragma once
#include <iostream>

/*
* Odczyt z pliku, zadawanie pytan w systemie 1z4 i sprawdzenie poprawnoœci odpowiedzi
*/

class pytanie
{
	std::string tresc;
	std::string a, b, c, d;
	std::string poprawna;
	std::string odpowiedz;

	
public:
	
	int nr_pytania;
	int punkt;
	void wczytaj(); // wczytywaniedanych z pliku
	void zadaj();   //zadawanie pytan i pobiernie odpowiedzi
	void sprawdz(); //sprawdzaie poprawnosci odpowiedzi
};