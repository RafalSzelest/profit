#include <iostream>
#define liczbamiesiecy 10  //definiuje symbol staly

using namespace std;
main()
/* Program wczytuj¹cy 12 kolejnych dochodów dla kolejnych dwunastu miesiêcy.
Program oblicza i wyœwietla dochód sumaryczny i dochód œredni. */


/* Przerobic program dochody by kazda wartosc dochodu czytal bezposrednio do kolejnego elementu tablicy jednowymiarowej
by zachowac je na pozniej. Obliczanie bez zmian. Rozmiar tablicy zdefiniujemy jako globalna stala. */


/* Powyzszy program zmodyfikowac:
0 zdefiniowac symbol staly liczbamiesiecy na wartosc 10
1 zadeklarowac tablice o tym wlasnie rozmiarze (jednowymiarowa typu float)
2 wczytac wszystkie elementy (dochody) do kolejnych komurek tablicy.
  po wczytaniu wszystkich elementow wypisac je w odwrotnej kolejnosci (od ostatniego) a nastepnie
  wypisac dochod sumaryczny i sredni.
3 nastepnie progrsm wczytuje szukny dochod i przeszukujac tsblice wypisuje nr miesiecy
  w ktorych taki dochod wystapil. gdyby nie znalazl ani razu tego szukanego dochodu ma
  wypisac komunikat nic nie znalazlem
*/
{
	int miesiac, licznikznalezionych;  
	float suma, srednia, a, b;  
	float dochody[liczbamiesiecy];
	
	cout<<"PROGRAM DOCHODY"<<endl<<endl;
	//ponizej jedynie wczytywanie dochodow
	
	for (miesiac=0; miesiac<liczbamiesiecy; miesiac++)  
	{
		cout<<"Podaj dochod z miesiaca nr "<<miesiac+1<<":  ";  
		cin>>dochody[miesiac];  
	
	}
	
	// ponizej wypisanie od koncowego elementu wraz z dumowaniem...
	suma=0;
		for (miesiac=liczbamiesiecy-1; miesiac>=0; miesiac--)
	{
	cout<<"Podane miesiace wyswietlam od ostatniego "<<miesiac+1<<"wynosi:  "<<dochody[miesiac]<<endl;
	suma+=dochody[miesiac];
	}	
	//  suma=0;
	
	
	srednia=suma/liczbamiesiecy;
		
	cout<<"Twoj sredni dochod wynosi: "<<srednia<<": "<<endl;
	cout<<"Twoj dochod wynosi: "<<suma<<": "<<endl;

// ponizej wyszukiwanie	
	cout<<"Jakiego zakresu dochodow szukasz ? Podaj <a,b> .a=   ";
	cin>>a;
	licznikznalezionych=0;
	for(miesiac=0; miesiac<liczbamiesiecy; miesiac++)  
		if (a==dochody[miesiac])
		{
			cout<<"znalazlem w miesiacu nr "<<miesiac+1<<endl;
			licznikznalezionych=1;
		}
	
	if (!licznikznalezionych) //lub if (znaleziono==0 )
	cout<<"Nic nie znalazlem ! "<<endl;
	
	cout<<"Jakiego zakresu dochodow szukasz ? Podaj <a,b> .b=   ";
	cin>>b;
	licznikznalezionych=0;
	for(miesiac=0; miesiac<liczbamiesiecy; miesiac++)  
		if (a==dochody[miesiac])
		{
			cout<<"znalazlem w miesiacu nr "<<miesiac+1<<endl;
			licznikznalezionych=1;
		}
	
	if (!licznikznalezionych) //lub if (znaleziono==0 )
	cout<<"Nic nie znalazlem ! "<<endl;
			//

}
