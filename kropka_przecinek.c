// dziesiêtna kropka lub przecinek. zakres 0 - 9999.99  ver. 1.1.4

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



char key;
int key2;
int znak_licznik = 0;
int cyfra, cyfra_1, cyfra_2, cyfra_3, cyfra_4, cyfra_5, cyfra_6, cyfra_7;
char znak;
int liczba;
double liczba_float;
int po_przecinku = 0;
int licznik_a;



// g³ówna funkcja kontroluj¹ca wprowadzone znaki.
// Mo¿liwe wszytkie cyfry oraz przecinek, kropka i enter. 
void przecinek_kropka()
{
	if (znak_licznik == 1)
	{
		++po_przecinku;
		do // Petla pierwsza bez  przecinka i kropki
		{
			if (key2 == 13)
				break;
									
			key = _getch(); // wprowadzenie znaku z kalwiatury
			key2 = key;

			if (key == '1')
				cyfra = 1;
			if (key == '2')
				cyfra = 2;
			if (key == '3')
				cyfra = 3;
			if (key == '4')
				cyfra = 4;
			if (key == '5')
				cyfra = 5;
			if (key == '5')
				cyfra = 5;
			if (key == '6')
				cyfra = 6;
			if (key == '7')
				cyfra = 7;
			if (key == '8')
				cyfra = 8;
			if (key == '9')
				cyfra = 9;
			if (key == '0')
				cyfra = 0;
			if (key2 == 13)
				break;
		} 			
			while (key != '1' && key != '2' && key != '3' && key != '4' && key != '5' && key != '6' && key != '7' && key != '8' && key != '9' && key != '0');
	}
	else
	{
		do // Pêtla druga z przecinkiem i kropk¹
		{
			if (key2 == 13)
				break;

			key = _getch();
			key2 = key;

			if (key == '1')
				cyfra = 1;
			if (key == '2')
				cyfra = 2;
			if (key == '3')
				cyfra = 3;
			if (key == '4')
				cyfra = 4;
			if (key == '5')
				cyfra = 5;
			if (key == '5')
				cyfra = 5;
			if (key == '6')
				cyfra = 6;
			if (key == '7')
				cyfra = 7;
			if (key == '8')
				cyfra = 8;
			if (key == '9')
				cyfra = 9;
			if (key == '0')
				cyfra = 0;
			if (key2 == 13)
				break;
			if (key == ',')
				znak = ',';
			if (key == '.')
				znak = '.';
															
		} 
			while (key != '1' && key != '2' && key != '3' && key != '4' && key != '5' && key != '6' && key != '7' && key != '8' && key != '9' && key != '0' && key != ',' && key != '.');
	}
	

		if (znak == ',' && znak_licznik == 0 || znak == '.' && znak_licznik == 0)
		{
			printf("%c", znak); // program tylko go wyœwietla, w efekcie koñcowym jest pomijany 
			znak_licznik = 1;
			++po_przecinku;// kontrola czy liczba ma czêœæ u³amkow¹ ( 2 lub 3 to u³amek)
			cyfra = znak;
		}
	
	else

		if (znak != ',' && key2 != 13 && znak !='.'&& key2 != 13)
			printf("%d", cyfra);// wyœwietlanie wprowadzonych cyfr
	
	znak = '*';// zmiana znaku na dowolny, inny ni¿ kropka i przecinek.
}
		
void cyfra_1_liczby()
{
	if (licznik_a == 1)
	{
		liczba = cyfra_1;

	}
}
			
void cyfra_2_liczby()
{
	if (licznik_a == 2)
	{
		if (cyfra_2 == 44 || cyfra_2 == 46)
			liczba = cyfra_1;
		else
			liczba = cyfra_1 * 10 + cyfra_2;
	}
}

void cyfra_3_liczby()
{
	if (licznik_a == 3)
	{
		if (cyfra_2 == 44 || cyfra_2 == 46)
			liczba = cyfra_1 * 10 + cyfra_3;
		if (cyfra_3 == 44 || cyfra_3 == 46)
			liczba = cyfra_1 * 10 + cyfra_2;
		if (znak_licznik == 0)
			liczba = cyfra_1 * 100 + cyfra_2 * 10 + cyfra_3;
	}
}
void cyfra_4_liczby()
{
	if (licznik_a == 4)
	{

		if (cyfra_2 == 44 || cyfra_2 == 46)
			liczba = cyfra_1 * 100 + cyfra_3 * 10 + cyfra_4;
		if (cyfra_3 == 44 || cyfra_3 == 46)
			liczba = cyfra_1 * 100 + cyfra_2 * 10 + cyfra_4;
		if (cyfra_4 == 44 || cyfra_4 == 46)
			liczba = cyfra_1 * 100 + cyfra_2 * 10 + cyfra_3;
		if (znak_licznik == 0)
			liczba = cyfra_1 * 1000 + cyfra_2 * 100 + cyfra_3 * 10 + cyfra_4;
	}
}
void cyfra_5_liczby()
{
	if (licznik_a == 5)
	{

		if (cyfra_3 == 44 || cyfra_3 == 46)
			liczba = cyfra_1 * 1000 + cyfra_2 * 100 + cyfra_4 * 10 + cyfra_5;
		if (cyfra_4 == 44 || cyfra_4 == 46)
			liczba = cyfra_1 * 1000 + cyfra_2 * 100 + cyfra_3 * 10 + cyfra_5;
		if (cyfra_5 == 44 || cyfra_5 == 46)
			liczba = cyfra_1 * 1000 + cyfra_2 * 100 + cyfra_3 * 10 + cyfra_4;
		if (znak_licznik == 0)
			liczba = cyfra_1 * 10000 + cyfra_2 * 1000 + cyfra_3 * 100 + cyfra_4 * 10 + cyfra_5;
	}
}
void cyfra_6_liczby()
{
	if (licznik_a == 6)
	{

		if (cyfra_4 == 44 || cyfra_4 == 46)
			liczba = cyfra_1 * 10000 + cyfra_2 * 1000 + cyfra_3 * 100 + cyfra_5 * 10 + cyfra_6;
		if (cyfra_5 == 44 || cyfra_5 == 46)
			liczba = cyfra_1 * 10000 + cyfra_2 * 1000 + cyfra_3 * 100 + cyfra_4 * 10 + cyfra_6;
		if (cyfra_6 == 44 || cyfra_5 == 46)
			liczba = cyfra_1 * 10000 + cyfra_2 * 1000 + cyfra_3 * 100 + cyfra_4 * 10 + cyfra_5;
		if (znak_licznik == 0)
			liczba = cyfra_1 * 100000 + cyfra_2 * 10000 + cyfra_3 * 1000 + cyfra_4 * 100 + cyfra_5 * 10 + cyfra_6;

	}

}

void cyfra_7_liczby()
{
	if (licznik_a == 7)
	{

		if (cyfra_5 == 44 || cyfra_5 == 46)
			liczba = cyfra_1 * 100000 + cyfra_2 * 10000 + cyfra_3 * 1000 + cyfra_4 * 100 + cyfra_6 * 10 + cyfra_7;
		if (cyfra_6 == 44 || cyfra_6 == 46)
			liczba = cyfra_1 * 100000 + cyfra_2 * 10000 + cyfra_3 * 1000 + cyfra_4 * 100 + cyfra_5 * 10 + cyfra_7;
		if (cyfra_7 == 44 || cyfra_7 == 46)
			liczba = cyfra_1 * 100000 + cyfra_2 * 10000 + cyfra_3 * 1000 + cyfra_4 * 100 + cyfra_5 * 10 + cyfra_6;
		if (znak_licznik == 0)
			liczba = cyfra_1 * 1000000 + cyfra_2 * 100000 + cyfra_3 * 10000 + cyfra_4 * 1000 + cyfra_5 * 100 + cyfra_6 * 10 + cyfra_7;
	}
}
int main(void)
{
	setlocale(LC_ALL, "polish");// polskie literki
	printf("Podaj liczbê z zakresu 0 - 9999.99 = ");

	for (licznik_a = 0; key2 != 13 && po_przecinku <3 && licznik_a < 7; licznik_a++) // przypisywanie wartoœci kolejnym cyfr¹.  
	{
		przecinek_kropka(); // wywo³anie g³ównej funkcji

		if (key2 == 13)
			licznik_a--;
		
			if (licznik_a == 0)
				cyfra_1 = cyfra;
			if (licznik_a == 1)
				cyfra_2 = cyfra;
			if (licznik_a == 2)
				cyfra_3 = cyfra;
			if (licznik_a == 3)
				cyfra_4 = cyfra;
			if (licznik_a == 4)
				cyfra_5 = cyfra;
			if (licznik_a == 5)
				cyfra_6 = cyfra;
			if (licznik_a == 6)
				cyfra_7 = cyfra;
		
	}
		
	///////////////////////////// ³¹czenie cyfr w liczby ////////////////////////////// 
	cyfra_1_liczby();
	cyfra_2_liczby();
	cyfra_3_liczby();
	cyfra_4_liczby();
	cyfra_5_liczby();
	cyfra_6_liczby();
	cyfra_7_liczby();

		
	// g³ówna czêœæ licz¹co wyœwietlaj¹ca //
	if (po_przecinku == 3 && key2 == 13)
		liczba_float = liczba * 0.1;
	if (po_przecinku == 3 && key2 != 13) 
		liczba_float = liczba * 0.01;
	if ( po_przecinku == 2 && key2 == 13)
		liczba_float = liczba ;
	if (licznik_a==7 && po_przecinku==2 && key2 != 13)
		liczba_float = liczba * 0.1;
	if (po_przecinku == 1 && key2 != 13)
		liczba_float = liczba;
	if (licznik_a==1 && key2 == 13 && po_przecinku == 2)
		printf("   !!! B³¹d, wprowadŸ sensowne dane !!!");
	if(po_przecinku == 0) // czyli jeœli liczba jest bez czêœci u³amkowej
		liczba_float = liczba;

	printf("\n");
	printf("\n");
	printf("\n");

	printf("wprowadzona liczba= %.2lf\n",liczba_float);
	printf("Liczba jest z przecinkiem lub krop¹, w zale¿noœci od regionu jaki masz ustawiony.\n");
	printf("Dla Polski jest to przecinek.");

	printf("\n");
	printf("\n");
	printf("\n");

	
	//koniec:
	printf("Program zakonczy³ dzia³anie");
		

	return 0;
}