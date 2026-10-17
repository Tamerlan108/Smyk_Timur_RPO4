#include <iostream>
#include <Windows.h>
//1 Задание
bool LeapYear(int year)
{
    if (year % 400 == 0)
    {
        return true;
    }
    if (year % 100 == 0)
    {
        return false;
    }
    if (year % 4 == 0)
    {
        return true;
    }
    return false;
}

int daysInMonth(int month, int year)
{
    int days = 31;

    if (month == 2)
    {
        if (LeapYear(year))
        {
            days = 29;
        }
        else
        {
            days = 28;
        }
    }
    if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        return 30;
    }
    return 31;
}

int daysBetweenDates(int d1, int m1, int y1, int d2, int m2, int y2)
{
    int totalDays1 = 0;
    for (int y = 0; y < y1; ++y)
    {
        if (LeapYear(y))
        {
            totalDays1 += 366;
        }
        else
        {
            totalDays1 += 365;
        }
    }
    for (int m = 1; m < m1; ++m)
    {
        totalDays1 += daysInMonth(m, y1);
    }
    totalDays1 += d1;

    int totalDays2 = 0;
    for (int y = 0; y < y2; ++y)
    {
        if (LeapYear(y))
        {
            totalDays2 += 366;
        }
        else
        {
            totalDays2 += 365;
        }
    }
    for (int m = 1; m < m2; ++m)
    {
        totalDays2 += daysInMonth(m, y2);
    }
    totalDays2 += d2;

    int diff = totalDays1 - totalDays2;
    if (diff < 0)
    {
        diff = -diff;
    }

    return diff;
}

//Задание 2
double averageArray(int arr[], int size)
{
    if (size <= 0)
    {
        return 0.0;
    }
    double sum = 0;
    for (int i = 0; i < size; ++i)
    {
        sum += arr[i];
    }
    return sum / size;
}

//Задание 3
void countElements(int arr[], int size, int& posCount, int& negCount, int& zeroCount)
{
    posCount = 0;
    negCount = 0;
    zeroCount = 0;

    for (int i = 0; i < size; ++i)
    {
        if (arr[i] > 0)
        {
            posCount++;
        }
        else if (arr[i] < 0)
        {
            negCount++;
        }
        else
        {
            zeroCount++;
        }
    }
}


int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
/*	std::cout << "Hello world, Timur Smyk";
*/
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
/*//Задание 1
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

std::cout << "Максимальное число: " << maxNumber3 << "\n";*/
/*
//Задание 1
const int size = 10;
int arr[size]{};

for (int i = 0; i < size; i++)
{
    arr[i] = rand() % 11 + 1;
}

int minVal = arr[0];
int maxVal = arr[0];

for (int i = 1; i < size; i++)
{
    if (arr[i] < minVal)
    {
        minVal = arr[i];
    }
    if (arr[i] > maxVal)
    {
        maxVal = arr[i];
    }
}

std::cout << "Минимальный элемент: " << minVal << "\n";
std::cout << "Максимальный элемент: " << maxVal << "\n";

//Задание 2
const int size = 10;
int arr[size]{};
int minRange, maxRange, threshold;

std::cout << "Введите нижнюю границу диапазона: ";
std::cin >> minRange;
std::cout << "Введите верхнюю границу диапазона: ";
std::cin >> maxRange;
std::cout << "Введите пороговое значение: ";
std::cin >> threshold;

for (int i = 0; i < size; ++i)
{
    arr[i] = minRange + rand() % (maxRange - minRange + 1);
}
int sum = 0;
for (int i = 0; i < size; ++i)
{
    if (arr[i] < threshold)
    {
        sum += arr[i];
    }
}

std::cout << "Сумма элементов, меньших " << threshold << ": " << sum << "\n";

//Задание 3
const int months = 12;
double profit[months];

std::cout << "Введите прибыль фирмы за каждый месяц года: \n";

for (int i = 0; i < months; i++)
{
    std::cout << "Месяц " << (i + 1) << ": ";
    std::cin >> profit[i];
}

int start, end;
std::cout << "\nВведите диапазон поиска (начальный и конечный месяц через пробел, например 3 6): ";
std::cin >> start >> end;

if (start < 1 || start > 12 || end < 1 || end > 12 || start > end)
{
    std::cout << "Ошибка: некорректный диапазон!";
    return 1;
}

double minVal = profit[start - 1];
double maxVal = profit[start - 1];

int minMonth = start - 1;
int maxMonth = start - 1;

for (int i = start; i < end; i++)
{
    if (profit[i] < minVal)
    {
        minVal = profit[i];
        minMonth = i;
    }


    if (profit[i] > maxVal)
    {
        maxVal = profit[i];
        maxMonth = i;
    }
}

std::cout << "Диапазон поиска: с " << start << " по " << end << " месяц \n";

std::cout << "Максимальная прибыль: " << maxVal << " (Месяц " << (maxMonth + 1) << ")\n";

std::cout << "Минимальная прибыль: " << minVal << " (Месяц " << (minMonth + 1) << ")";*/
// Задание 1
int day1 = 0, month1 = 0, year1 = 0;
int day2 = 0, month2 = 0, year2 = 0;

std::cout << "Введите первую дату (день месяц год): ";
std::cin >> day1 >> month1 >> year1;

std::cout << "Введите вторую дату (день месяц год): ";
std::cin >> day2 >> month2 >> year2;

int result = daysBetweenDates(day1, month1, year1, day2, month2, year2);

std::cout << "Разница между датами составляет: " << result << " дней\n";

//Задание 2
const int Size2 = 5;
int myArray[Size2] = { 5, 42, 15, 67, 52 };

double result = averageArray(myArray, Size2);

std::cout << "Среднее арифметическое: " << result;

//Задание 3
const int Size3 = 7;
int myArray[Size3] = { 67, -42, 0, 52, 0, -12, 7 };

int positives, negatives, zeros;

countElements(myArray, Size3, positives, negatives, zeros);

std::cout << "Положительных элементов: " << positives << "\n";
std::cout << "Отрицательных элементов: " << negatives << "\n";
std::cout << "Нулевых элементов: " << zeros << "\n";

return 0;
}