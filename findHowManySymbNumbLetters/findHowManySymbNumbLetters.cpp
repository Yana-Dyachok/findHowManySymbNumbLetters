//2. Данo рядок символів. Визначити кількість літер, цифр та інших символів, присутніх у рядку.
#include <iostream>
#include <string>
using namespace std;
int main()
{	string Sentence;//створюємо об'єкт для типу string 
	cout << "Enter sentence with letters, numbers and any symbols" << endl;
	getline(cin, Sentence);//вводимо дані в рядок
	int size = Sentence.size();//створюємо розмір для даного рядка
	int Lett = 0;//оголошуємо змінну для підрахунку кількості літер
	int Numb = 0;//оголошуємо змінну для підрахунку кількості цифр
	int Symb = 0;//оголошуємо змінну для підрахунку кількості символів
	for (int i = 0; i < size; i++)//створюємо цикл для підрахунку кількості літер, цифр та інших символів, присутніх у рядку.
	{
		if (isalpha(Sentence[i]))//якщо в рядку є літери- isalpha
			Lett++;//підраховуємо кількість літер
		else if (isdigit(Sentence[i]))//якщо в рядку є цифри- isdigit
			Numb++;//підраховуємо кількість цифр
		else
			Symb++;//підраховуємо кількість символів
	}
	cout <<"The sentence has "<<Lett<<" letters" << endl;//виводимо кількість слів- адже їх на один більше за пробілів
	cout <<"The sentence has "<< Numb << "  numbers" << endl;//виводимо кількість слів- адже їх на один більше за пробілів
	cout <<"The sentence has "<< Symb << "  symbols" << endl;//виводимо кількість слів- адже їх на один більше за пробілів
}
