Autor:		Paweł Kamiński
Przedmiot:	AAL

Problem: 	W jakiej kolejności należy ustawić żółwie jeden na drugim, aby utworzyć tron króla Yertle. 
			Każdy z 5607 żółwi ma inną wagę i inną wytrzymałość. 
			Zadaniem jest zbudować najwyższy możliwy stos żółwi.
			
Kompilacja:

1. Windows:
Należy uruchomić projekt Yertle-The-Turtle.sln w Microsoft Visual Studio 2015. Następnie należy wybrać opcję Build->Build Solution.

2. Linux:
Do skompilowania projektu potrzebne jest narzędzie CMake w wersji co najmniej 2.8.
W katalogu głównym projektu należy użyć następujących komend:

$   mkdir build && cd build
$   cmake ..
$   make

Po ich wykonaniu powinien pojawić się skompilowany plik o nazwie "yertle".

Uruchamianie:

Uruchamianie z generowaniem danych:
			
			yertle [-d/-n/-s] starting_size how_much_to_increase

Uruchamianie z wczytywaniem z pliku:
			yertle [-d/-n/-s] < file_name
			
Uruchamianie z wczytywaniem z klawiatury:
			yertle [-d/-n/-s]

Gdzie:
			-d - algorytm programowania dynamicznego
			-n - algorytm naiwny
			-f - algorytm z presortowaniem
			starting_size - rozmiar problemu od jakiego startujemy
			how_much_to_increase - o ile zwiększać rozmiar problemu w kolejnych iteracjach
			file_name - nazwa pliku
			
Format pliku danych wejściowych:
Przykład:
1 1
2 4
2 3
5 7

Pierwsza liczba to waga żółwia, a druga to jego wytrzymałość.

Przy wprowadzaniu danych recznie z klawiatury, korzystamy z tej samej konwencji co w przypadku z pliku, ale kończymy wpisywanie poprzez
wpisanie jakiejkolwiek litery(lub ciągu liter) i zatwierdzenie tego enterem.

Opis algorytmów:
Wszystkie algorytmy zwracają optymalne wyniki.
				
				1. Programowanie dynamiczne - złożoność obliczeniowa O(n^2), duża złożoność pamięciowa.
				2. Algorytm naiwny - złożoność obliczeniowa O(n^2), szybkość działania podobna do programowania dynamicznego, mała złożoność pamięciowa.
				3. Algorytm z presortowaniem - zdecydowanie najszybszy algorytm, złożoność obliczeniowa O(n*lg(n)), złożoność pamięciowa podobna do naiwnego.
				
Zastosowane struktury danych:
				std::vector, std::tuple
				
Moduły źródłowe:
				1. ResultsTable - klasa tworząca tabelkę z wynikami.
				2. Throne - klasa abstrakcyjna, przechowująca zbiór żółwi, umożliwiająca ich generowanie oraz posiadająca metodę do rozwiązania problemu.
				3. ThroneDynamicProgramming - klasa dziedzicząca po Throne, rozwiązuje problem za pomocą programowania dynamicznego.
				4. ThroneFast - klasa dziedzicząca po Throne, rozwiązuje problem w najszybszy sposób.
				5. ThroneNaive - klasa dziedzicząca po Throne, rozwiązuje problem za pomocą algorytmu naiwnego.
				6. Timer - singleton, klasa timera odmierzającego czas, wykorzystywanego do sprawdzenia czasu wykonania algorytmów.
				7. Turtle - klasa reprezentująca pojedynczego żółwia.