// dziesi�tna kropka lub przecinek. zakres 0 - 9999.99  ver. 1.1.3

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



// g��wna funkcja kontroluj�ca wprowadzone znaki.
// Mo�liwe wszytkie cyfry oraz przecinek, kropka i enter. 
void przecinek_kropka()
{
	if (znak_licznik == 1)
	{
		++po_przecinku;
		do // Petla pierwsza bez  przecinka i kropki
		{
			if (key2 == 13)
				break;
															//printf("*** petla1 ***");
															//printf("licznik= %d  ", znak_licznik);
															//printf("-- key2 = %d -- ", key2);
															//printf("@@ key = %d @@ ", key);
															//printf("*** petla1 ***");
									
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
		do // P�tla druga z przecinkiem i kropk�
		{
														//printf("### petla2 ###");
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
															//printf(" key2_2=%d\n ", key2);
		} 
			while (key != '1' && key != '2' && key != '3' && key != '4' && key != '5' && key != '6' && key != '7' && key != '8' && key != '9' && key != '0' && key != ',' && key != '.');
	}
	

		if (znak == ',' && znak_licznik == 0 || znak == '.' && znak_licznik == 0)
		{
			printf("%c", znak); // program tylko go wy�wietla, w efekcie ko�cowym jest pomijany 
			znak_licznik = 1;
			++po_przecinku;// kontrola czy liczba ma cz�� u�amkow� ( 2 lub 3 to u�amek)
			cyfra = znak;
		}
	
	else

		if (znak != ',' && key2 != 13 && znak !='.'&& key2 != 13)
			printf("%d", cyfra);// wy�wietlanie wprowadzonych cyfr
	
	znak = '*';// zmiana znaku na dowolny, inny ni� kropka i przecinek.
}
		
void cyfra_1_liczby()
{
	if (licznik_a == 1)
	{
		liczba = cyfra_1;

		/*printf(" Liczba_1= %d\n ", liczba);
		printf("Po_przecinku = %d", po_przecinku);
		printf("key2 = %d", key2);*/
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
		/*printf(" liczba_2= %d\n ", liczba);
		printf("po_przecinku = %d", po_przecinku);
		printf("key2 = %d", key2);*/
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

		/*printf(" Liczba_3= %d\n ", liczba);
		printf("Po_przecinku = %d", po_przecinku);
		printf("key2 = %d", key2);*/
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
		/*printf(" Liczba_4= %d\n ", liczba);
		printf("Po_przecinku = %d", po_przecinku);
		printf("key2 = %d", key2);*/
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
		/*printf(" Liczba_5= %d\n ", liczba);
		printf("Po_przecinku = %d", po_przecinku);
		printf("key2 = %d", key2);*/
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

		/*printf(" Liczba_6= %d\n ", liczba);
		printf("Po_przecinku = %d", po_przecinku);
		printf("key2 = %d", key2);*/
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

		//printf(" Liczba_7= %d\n ", liczba);
		//printf("Po_przecinku = %d", po_przecinku);
		//printf("key2 = %d", key2);

	}
}
int main(void)
{
	setlocale(LC_ALL, "polish");// polskie literki
	printf("Podaj liczb� z zakresu 0 - 9999.99 = ");

	for (licznik_a = 0; key2 != 13 && po_przecinku <3 && licznik_a < 7; licznik_a++)
	{
		przecinek_kropka(); // wywo�anie g��wnej funkcji

		//printf("a_poczatek = %d\n", a);
		//printf("po_przecinku = %d\n", po_przecinku);
				
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

																					/*printf(" Cyfra_1= %d\n ", cyfra_1);
																					printf(" Cyfra_2= %d\n ", cyfra_2);
																					printf(" Cyfra_3= %d\n ", cyfra_3);
																					printf(" Cyfra_4= %d\n ", cyfra_4);
																					printf(" Cyfra_5= %d\n ", cyfra_5);
																					printf(" Cyfra_6= %d\n ", cyfra_6);
																					printf(" Cyfra_7= %d\n ", cyfra_7);*/


																					//printf("Znak %c ", znak);
																					//cyfra = znak;
																					//printf("Cyfra_znak %d ", cyfra);
																					//printf("cyfra_7 = %d\n", cyfra_7);
																					//printf("a_potem = %d\n", a);

	
	
	///////////////////////////// ��czenie cyfr w liczby ////////////////////////////// 
	cyfra_1_liczby();
	cyfra_2_liczby();
	cyfra_3_liczby();
	cyfra_4_liczby();
	cyfra_5_liczby();
	cyfra_6_liczby();
	cyfra_7_liczby();

		
	// g��wna cz�� licz�co wy�wietlaj�ca //
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
		printf("   !!! B��d, wprowad� sensowne dane !!!");
	if(po_przecinku == 0) // czyli je�li liczba jest bez cz�ci u�amkowej
		liczba_float = liczba;

	printf("\n");
	printf("\n");
	printf("\n");

																								//printf("liczba = %d\n", liczba);
	
	printf("wprowadzona liczba= %.2lf\n",liczba_float);
	printf("Liczba jest z przecinkiem lub krop�, w zale�no�ci od regionu jaki masz ustawiony.\n");
	printf("Dla Polski jest to przecinek.");
	printf("\n");
	printf("\n");
	printf("\n");




	
	//koniec:
	printf("Program zakonczy� dzia�anie");
		

	return 0;
}