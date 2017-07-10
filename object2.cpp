// Prosty quiz wykorzystuj¹cy podstawy programowania obiektowego
// oraz odczyt danych z pliku

#include "stdafx.h"

int main()
{
	
	pytanie p[5];
	int suma = 0;
	for (int i = 0; i <= 4; i++)
	{
	p[i].nr_pytania = i+1;
	p[i].wczytaj();
	p[i].zadaj();
	p[i].sprawdz();
	suma += p[i].punkt;
}
	std::cout << "koniec testu otrzymales " << suma << " punktow" << std::endl;
	

	system("PAUSE");
}

