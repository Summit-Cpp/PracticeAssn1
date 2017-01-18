#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int countVowels (string);



int main()
{

	char arr[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
	display (arr);
	int num[]={1, 2, 3, 4, 5, 6, 7};
	display (num);
	string names [] = {"Deana", "Kelly", "Libby", "Gayle", "Mary", "Becky", "Susan"};
	display (names);
	double dnums [] = {1.1, 1.2 , 1.3, 1.4, 1.5, 1.6, 1.7, 1.8};
	display (dnums);
	return 0;  
	

	

}

template <typename asdf>
void display(asdf n[7])
{
	for (int i = 0;i<7;i++)
		cout<<n[i]<<endl;
}





