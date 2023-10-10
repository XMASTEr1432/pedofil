#include <iostream>

using namespace std;

int main()
{
	int dzien_tyg;
	int lekcja;
	cout << "Podaj dzien tygodnia: \nponiedzialek - 1, wtorek - 2, sroda - 3, czwartek - 4, piatek - 5" << endl;
	cin >> dzien_tyg;
	cout << "Podaj numer lekcji" << endl;
	cin >> lekcja;

	if (dzien_tyg == 1)
	{
		cout << "Masz teraz: ";
		switch (lekcja)
		{
		case 1:
			cout << "Jezyk angielski";
			break;
		case 2:
			cout << "WF";
			break;
		case 3: 
			cout << "WF";
			break;
		case 4: 
			cout << "M2.ip.J4 Naprawa sprzetu komputerowego";
			break;
		case 5: 
			cout << "M2.ip.J4 Naprawa sprzętu komputerowego";
			break;
		case 6: 
			cout << "Zajecia z wychowawca";
			break;
		case 7: 
			cout << "Jezyk polski";
			break;
		case 8: 
			cout << "Matematyka";
			break;
		default:
			cout << "Nie masz aktualnie lekcji.";
			break;
		}
	}
	else if (dzien_tyg == 2)
	{
		cout << "Masz teraz: ";
		switch (lekcja)
		{
		case 1:
			cout << "Jezyk angielski";
			break;
		case 2:
			cout << "Podstawy przedsiebiorczosci";
			break;
		case 3: 
			cout << "Matematyka";
			break;
		case 4: 
			cout << "Montowanie i eksploatowanie lokalnych sieci komputerowych i administrowanie nimi";
			break;
		case 5: 
			cout << "Montowanie i eksploatowanie lokalnych sieci komputerowych i administrowanie nimi";
			break;
		case 6: 
			cout << "Montowanie i eksploatowanie lokalnych sieci komputerowych i administrowanie nimi";
			break;
		case 7: 
			cout << "Historia";
			break;
		default:
			cout << "Nie masz aktualnie lekcji.";
			break;
		}
	}
	else if (dzien_tyg == 3)
	{
		cout << "Masz teraz: ";
		switch (lekcja)
		{
		case 1:
			cout << "Jezyk niemiecki";
			break;
		case 2:
			cout << "Jezyk niemiecki";
			break;
		case 3: 
			cout << "Historia";
			break;
		case 4: 
			cout << "Informatyka";
			break;
		case 5: 
			cout << "Jezyk polski";
			break;
		case 6: 
			cout << "Jezyk polski";
			break;
		case 7: 
			cout << "Geografia";
			break;
		default:
			cout << "Nie masz aktualnie lekcji.";
			break;
		}
	}
	else if (dzien_tyg == 4)
	{
		cout << "Masz teraz: ";
		switch (lekcja)
		{
		case 4:
			cout << "Chemia";
			break;
		case 5:
			cout << "M4.ip.J2 Tworzenie i administrowanie baz danych";
			break;
		case 6: 
			cout << "M4.ip.J2 Tworzenie i administrowanie baz danych";
			break;
		case 7: 
			cout << "Matematyka";
			break;
		case 8: 
			cout << "Fizyka";
			break;
		case 9: 
			cout << "WF";
			break;
		case 10: 
			cout << "Montowanie i eksploatowanie lokalnych sieci komputerowych i administrowanie nimi";
			break;
		case 11:
			cout << "Montowanie i eksploatowanie lokalnych sieci komputerowych i administrowanie nimi";
			break;
		case 12:
			cout << "Montowanie i eksploatowanie lokalnych sieci komputerowych i administrowanie nimi";
			break;
		default:
			cout << "Nie masz aktualnie lekcji.";
			break;
		}
	}
	else if (dzien_tyg == 5)
	{
		cout << "Masz teraz: ";
		switch (lekcja)
		{
		case 2:
			cout << "Jezyk angielski";
			break;
		case 3: 
			cout << "Jezyk angielski";
			break;
		case 4: 
			cout << "M4.ip.J1 Tworzenie stron internetowych";
			break;
		case 5: 
			cout << "M4.ip.J1 Tworzenie stron internetowych";
			break;
		case 6: 
			cout << "Biologia";
			break;
		default:
			cout << "Nie masz aktualnie lekcji.";
			break;
		}
	}
	else
	{
		cout << "Zle podane dane.";
	}
	return 0;

}
