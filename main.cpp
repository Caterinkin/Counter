#include <iostream>
#include <windows.h>
#include <string>


class Counter
{
private:
	char symbol;
	int num = 1;
public:
	Counter()
	{
	}
	Counter(char symbol)
	{
		this->symbol = symbol;
	}
	Counter(int num)
	{
		this->num = num;
	}
	void enter_num(int num)
	{
		this->num = num;
	}
	void progres(char symbol)
	{
		if (symbol == '+')
		{
			++num;
		}
		if (symbol == '-') 
		{ 
			--num;
		}
		if (symbol == '=')
		{
			std::cout << num << std::endl;
		}
	}

};

int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	
	Counter count;
	std::string answer;
	char symbol;
	int i = 0, start;
	std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
	std::cin >> answer;
	do
	{
		if (answer == "да")
		{
			std::cout << std::endl << "Введите начальное значение счётчика: ";
			std::cin >> start;
			i = 1;
			count.enter_num(start);
	    }
		else 
		{
			std::cout << "Вы отказались от запуска счетчика! " << std::endl;
			return 0;
	    }
	} while (i==0);

	do
	{
		std::cout << "Введите команду ('+', '-', '=' или 'x'):";
		std::cin >> symbol;
		std::cout << std::endl;
		if (symbol == '+')
		{
			count.progres(symbol); continue;
		}
		if (symbol == '-')
		{
			count.progres(symbol); continue;
		}
		if (symbol == '=')
		{
			count.progres(symbol); continue;
		}
	} while (symbol != 'x');
	std::cout << "До свидания!" << std::endl;

	return EXIT_SUCCESS;
}