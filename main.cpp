#include <iostream>
#include <string>

using namespace std;

int main()
{
	string wyraz;
	bool czyJest;
	//int j = 0;
	//int dlugosc = 0;
	
	cout << "-     Zeby zakonczyc program wpisz: 0" << endl;
	
	do
	{
		//j = 0;
		czyJest = true;
		
		cout << "Wpisz slowo ktore mam sprawdzic: ";
		getline(cin, wyraz);
		
		//dlugosc = wyraz.length() / 2;
		
		/*for(int i = wyraz.length() - 1; i > dlugosc; i--)
		{
			if(wyraz[j] == wyraz[i] && czyJest == false)
			{
				j++;
				czyJest = true;
			}
			else
			{
				czyJest = false;
				i = 0;
			}
		}*/
		
		for(int i = 0; i < wyraz.length() / 2; i++)
		{
			if(wyraz[i] != wyraz[wyraz.length() - 1 - i])
			{
				czyJest = false;
				break;
			}
			else
			{
				czyJest = true;
			}
		}
		
		if(czyJest)
		{
			cout << "Slowo '" << wyraz << "' jest palindromem" << endl << endl;
		}
		else
		{
			cout << "Slowo '" << wyraz << "' nie jest palindromem" << endl << endl;
		}
	}
	while(wyraz != "0");
}
