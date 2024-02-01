#include "pch.h"
#include "iostream"
#include <conio.h>
#include <clocale>
#include "iostream"

using namespace std;

void task1();
void task2();
void task3();
void task4();
void task5();
void task6();

int main() {
    setlocale(LC_ALL, "Rus");

    cout << "Домашняя работа к седьмой лекции. Циклы for и алгоритмы на циклах" << endl;


    while (true)
    {
        cout << "1: Необходимо из заданного пользователем вектора удалить число X." << endl;
        cout << "2: Необходимо вывести на экран итоговую стоимость покупок." << endl;
        cout << "3: Красный Марс." << endl;
        cout << "Введите число от 1 до 3 или что-то другое для выхода: ";
        int task;
        cin >> task;

        if (task == 1) {
            system("cls");
            cout << "Необходимо из заданного пользователем вектора удалить число X." << endl;
            task1();
            _getch();
            system("cls");
        }

        else if (task == 2) {
            system("cls");
            cout << "Необходимо вывести на экран итоговую стоимость покупок." << endl;
            task2();
            _getch();
            system("cls");;
        }

        else if (task == 3) {
            system("cls");
            cout << "Задача 3" << endl;
            task3();
            _getch();
            system("cls");
        }

        else
        {
            system("cls");
            cout << "некорректный ввод. Выход из программы";
            break;
        }
    }

}
