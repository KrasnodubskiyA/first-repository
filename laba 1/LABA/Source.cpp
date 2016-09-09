#include <iostream>

class Bush
{
private:
	int kol_tov;
	int Preis;
	int zagruzka;
public:
	int Bush_bus()
	{
		std::cout << "Меню: " << std::endl << std::endl;
		std::cout << "Кол-вo товара: ";	std::cin >> kol_tov;
		std::cout << "Цена: ";	std::cin >> Preis;
		std::cout << "Необходимо загрузить: ";	std::cin >> zagruzka;
		std::cout << std::endl;
		std::cout << "Кол-вo товвара: " << kol_tov << std::endl;
		std::cout << "Цена: " << Preis << std::endl;
		std::cout << "Необходимо загрузить: " << zagruzka << std::endl;
		return 0;
	}
};

void main()
{
	system("chcp 1251");
	Bush a;
	a.Bush_bus();
	system("pause");
}