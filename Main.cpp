#include <iostream>
#include <Windows.h>
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
/*	std::cout << "Hello world, Timur Smyk";	*/
/*	std::cout << "\n \t\t-----------------------------";
	std::cout << "\n \t\t\t< KY Farit! >";
	std::cout << "\n \t\t-----------------------------";

	std::cout << "\n \t\t\t\t " << " \\ " << "\t^--^";
	std::cout << "\n \t\t\t\t  " << " \\" << "\t(00)\\________";
	std::cout << "\n \t\t\t\t  " << " " << "\t(__)\\	     )\\/\\";
	std::cout << "\n \t\t\t\t  " << " " << "\t    ||-----W |";
	std::cout << "\n \t\t\t\t  " << "" << "\t    ||      ||";*/
/*// Задание 1
	double distance = 0;
	double time = 0;
	double speed = 0;
	std::cout << "Введите расстояние до аэропорта: ";
	std::cin >> distance;
	std::cout << "Введите время за которые нужно доехать: ";
	std::cin >> time;
	std::cout << "Надо ехать со скоростю: " << distance / time << " км/ч";

// Задание 2
  int h1, m1, s1;
    std::cout << "Введите время начала поездки (часы минуты секунды): ";
    std::cin >> h1 >> m1 >> s1;

    int h2, m2, s2;
    std::cout << "Введите время окончания поездки (часы минуты секунды): ";
    std::cin >> h2 >> m2 >> s2;

    int startSeconds = h1 * 3600 + m1 * 60 + s1;
    int endSeconds = h2 * 3600 + m2 * 60 + s2;
	int durationSeconds = endSeconds - startSeconds;

    int durationMinutes = durationSeconds / 60;
    int costMinute = 2;
    int totalCost = durationMinutes * costMinute;
    std::cout << "Стоимость поездки: " << totalCost << " гривен";

// Задание 3
   double distance, consumption100km;
    double price1, price2, price3;

    std::cout << "Введите расстояние поездки (км): ";
    std::cin >> distance;

    std::cout << "Введите расход бензина на 100 км (л): ";
    std::cin >> consumption100km;

    std::cout << "Введите стоимость первого вида бензина (за литр): ";
    std::cin >> price1;

    std::cout << "Введите стоимость второго вида бензина (за литр): ";
    std::cin >> price2;

    std::cout << "Введите стоимость третьего вида бензина (за литр): ";
    std::cin >> price3;

    double fullNeed = distance * (consumption100km / 100);

    double cost1 = fullNeed * price1;
    double cost2 = fullNeed * price2;
    double cost3 = fullNeed * price3;

    std::cout << "\nСравнительная таблица стоимости поездки:\n";
    std::cout << "Вид бензина:" << "\tСтоимость поездки:\n";
    std::cout << "\nБензин 1: "<< "\t" << cost1;
    std::cout << "\nБензин 2: "<< "\t" << cost2;
    std::cout << "\nБензин 3: "<< "\t" << cost3;

// Задание 1

   int sum = 0;
   int number;
   bool run = true;

    while (run)
    {
        std::cout << "Введите число, 0 остнавливает ввод: ";
        std::cin >> number;
        
        if (number == 0)
        {
            run = false;
        }
        else
        {
            sum += number;
        }
    }
    std::cout << "Сумма всех введённых чисел: " << sum;

// Задание 2
    int choice;

    do
    {
        std::cout << "\t\t\t\t\t Игровое меню ";
        std::cout << "\n1. Новая игра";
        std::cout << "\n2. Настройки";
        std::cout << "\n3. Выход";
        std::cout << "\nВыберите пункт меню (1-3): ";

        std::cin >> choice;
        if (choice < 1 || choice > 3)
        {
            std::cout << "Некорректный ввод, попробуйте снова.\n";
        }
    }
        while (choice < 1 || choice > 3);

        if (choice == 1)
        {
            std::cout << "\nВыбрана Новая игра\n";
        }

        else if (choice == 2)
        {
            std::cout << "\nВыбраны Найстроки\n";
        }

        else
        {
            std::cout << "\nВыбран Выход\n";
        }
*/

//Задание 1
int number1;
std::cout << "Введите шестизначное число: ";
std::cin >> number1;
if (number1 < 100000 || number1 > 999999)
{
    std::cout << "Ошибка: число не шестизначное";
}
else
{
    int sumFirst = (number1 / 100000) % 10 + (number1 / 10000) % 10 + (number1 / 1000) % 10;
    int sumSecond = (number1 / 100) % 10 + (number1 / 10) % 10 + number1 % 10;
    if (sumFirst == sumSecond)
    {
        std::cout << "Число: Счастливое";
    }
    else
    {
        std::cout << "Число: Не счастливое";
    }
}
//Задание 2 
int Number2;
std::cout << "Введите четырехзначное число: ";
std::cin >> Number2;

if (Number2 < 1000 || Number2 > 9999)
{
    std::cout << "Ошибка: число не четырехзначное";
}
else
{
    int firstDigit = Number2 / 1000;
    int secondDigit = (Number2 / 100) % 10;
    int thirdDigit = (Number2 / 10) % 10;
    int fourthDigit = Number2 % 10;

    int resultNumber = secondDigit * 1000 + firstDigit * 100 + fourthDigit * 10 + thirdDigit;
    std::cout << resultNumber;
}
//Задание 3
int number3;
int maxNumber3;

std::cout << "Введите 7 целых чисел (через пробел): ";
std::cin >> maxNumber3;

for (int i = 1; i < 7; ++i)
{
    std::cin >> number3;
    if (number3 > maxNumber3)
    {
        maxNumber3 = number3;
    }
}

std::cout << "Максимальное число: " << maxNumber3 << "\n";

return 0;
}