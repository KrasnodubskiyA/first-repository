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
		std::cout << "����: " << std::endl << std::endl;
		std::cout << "���-�o ������: ";	std::cin >> kol_tov;
		std::cout << "����: ";	std::cin >> Preis;
		std::cout << "���������� ���������: ";	std::cin >> zagruzka;
		std::cout << std::endl;
		std::cout << "���-�o �������: " << kol_tov << std::endl;
		std::cout << "����: " << Preis << std::endl;
		std::cout << "���������� ���������: " << zagruzka << std::endl;
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