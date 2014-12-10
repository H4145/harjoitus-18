/*
Eetu Salo

Harjoitus 18 (Palautus vko 46)
Tee ohjelma, joka kysyy viiden koiran nimet ja iät.
Tiedot tallennetaan tietuetaulukkoon.
a) järjestä tiedot ikä -kentän mukaan suuruusjärjestykseen
(pienimmästä suurimpaan). Ohjelma tulostaa lopuksi
jarjestetyn taulukon näytälle.
b) järjestä tiedot nimi -kentän mukaan aakkosjärjestyksessä
Ohjelma tulostaa lopuksi jarjestetyn taulukon näytolle.

Lajittelu tulee toteuttaa siten, että se toimisi samoin
myäs 50 tai 5000 koiran tapauksssa.


*/





#include <iostream> 
using namespace std;

const int MAX_K = 3;

struct KOIRATIEDOT
{
	char nimi[10];
	int ikä;
};
int main()
{
	KOIRATIEDOT koira[MAX_K];
	int ind;

	for (ind = 0; ind < MAX_K; ind++)
	{
		cout << "Anna " << ind + 1 << ". koiran nimi ja ika: ";
		cin >> koira[ind].nimi >> koira[ind].ikä;
	}

	cout << "Tiedot ennen jarjestamista " << endl;
	for (ind = 0; ind < MAX_K; ind++)
	{
		cout << "Koiran " << ind + 1 << ". nimi ja ika: ";
		cout << koira[ind].nimi << koira[ind].ikä << endl;
	}
//a)kohta
	/*cout << "jarjestetaan... " << endl;
	for (int i = 0; i < MAX_K - 1; i++)
		for (int j = i + 1; j < MAX_K; j++)
			if (koira[i].ikä > koira[j].ikä)
			{
				KOIRATIEDOT a = koira[i];
				koira[i] = koira[j];
				koira[j] = a;
			}*/

	cout << "jarjestetaan... " << endl;
	for (int i = 0; i < MAX_K - 1; i++)
		for (int j = i + 1; j < MAX_K; j++)
			if ((strcmp(koira[i].nimi , koira[j].nimi))>0)
			{
				KOIRATIEDOT a = koira[i];
				koira[i] = koira[j];
				koira[j] = a;
			}

	cout << "Tiedot jarjestamisen jalkeen" << endl;
	for (ind = 0; ind < MAX_K; ind++)
	{
		cout << "Koiran " << ind + 1 << ". nimi ja ika: ";
		cout << koira[ind].nimi << " " << koira[ind].ikä << endl;
	}
}