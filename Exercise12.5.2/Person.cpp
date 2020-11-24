#include "Person.h"

/*

1* Hvis CPR nummer ikke  er 10 numre langt terminerer programmet
2* Hvis CPR nummer ikke er et tal terminerer programmet
3* Er navnet skrevet med andet end bogstaver og mellemrum terminerer programmet

Når valideringen er godkendt, dvs. cpr nummer på 10 tal, navn kun med bogstaver og mellemrum
initialiseres klassens 2 atributter
*/

Person::Person(string navn, string nummer)
{
	if (nummer.length() != 10)
	{
	cout << "Fejl i data. Programmet lukkes ned." << endl;
	exit(1);
	}

		
		 for (int i = 0; i < 10; i++)
		 {
		 if (!isdigit(nummer[i]))
			 {
			cout << "Fejl i data. Programmet lukkes ned." << endl;
			exit(1);
			}
		}
	
		for (int i = 0; navn[i] != '\0'; i++)
		{
		if (!isalpha(navn[i]) && navn[i] != ' ')
			{
			cout << "Fejl i data. Programmet lukkes ned." << endl;
			exit(1);
			}
		}
	
		navn_ = navn;
	personnummer_ = nummer;
}

void Person::print(void) const
{
	cout << "\nNavn : " << navn_ <<" kr." << endl;
	cout << "Personnr: " << personnummer_ << endl;
}