#include <iostream>
#include <windows.h>
#include <string>

class Counter 
{
   private:
       int value;
   public:
       Counter() : value(1) {}
       Counter(int initialValue) : value(initialValue) {}
       void increment() 
       {
           ++value;
       }
       void decrement() 
       {
           --value;
       }
       int getValue() const 
       {
           return value;
       }
   };
int main()
{
    setlocale(LC_ALL, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
   
    int initialValue = 1;
    std::string choice;
   
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> choice;
    
	if (choice == "да" || choice == "Да") 
    {
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> initialValue;
    }
    Counter counter(initialValue);
    char command;
    while (true)
   {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> command;

        switch (command) 
	{
        case '+':
            counter.increment();
            break;
        case '-':
            counter.decrement();
            break;
        case '=':
            std::cout << "Текущее значение счётчика: " << counter.getValue() << std::endl;
            break;
        case 'x':
            std::cout << "Завершение работы программы." << std::endl;
            return 0;
        default:
            std::cout << "Неизвестная команда. Попробуйте снова." << std::endl;
            break;
        }
    }
    return EXIT_SUCCESS;;
}
