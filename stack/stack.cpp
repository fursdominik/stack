#pragma once
#include <iostream>
#include <time.h>
#include "Header.h"

using namespace std;


int main() {
    setlocale(LC_ALL, "Rus");
    stack* stk = new stack; // создаем новый элемент и захватываем память для нового элементов
    stk = NULL; // нулевое значение
    srand(time(NULL));
    while (true) {
        cout << "       Выберите действие:" << endl;
        cout << "       Создать стек - 1" << endl << "       Индивидуальное задание - 2" << endl
            << "       Просмотр - 3" << endl << "       Добавить - 4" << endl
            << "       Удалить - 5" << endl << "       Сортировка адресов - 6" << endl
            << "       Сортировка значений - 7" << endl << "       Выход - 0" << endl;
        int s; cin >> s;
        switch (s) {
        case 1:
        {
            system("cls");
            DeleteStack(stk);
            cout << "Введите количество элементов стека:";
            int num; cin >> num;
            for (int i = 0; i < num; i++)
            {
                int num = rand() % 40 - 10;
                push(stk, num);
            }
            break;
        }

        case 2:
        {
            system("cls");
            if (!stk || !stk->next) break;

            stack* newStack = NULL, * maxElement = stk->next; // создание нового стека, указатель на адрес максимального элемента
            stack* newStack2 = NULL;
            for (stack* temp = stk->next; temp; temp = temp->next)
                if (temp->info > maxElement->info) maxElement = temp;
            for (stack* temp = stk->next; temp != maxElement; temp = temp->next)
                push(newStack, temp->info);
            if (newStack != NULL) {
                for (stack* temp = newStack; temp; temp = temp->next)
                    push(newStack2, temp->info);
            }
            stk = newStack2;
            break;
        }
        case 3:
        {
            system("cls");
            cout << "Вывод стека" << endl;
            show(stk);
            break;
        }
        case 4:
        {
            system("cls");
            cout << "Введите значение элемента: ";
            int value; cin >> value;
            push(stk, value);
            cout << endl;
            break;
        }
        case 5:
        {
            system("cls");
            Delete(stk);
            break;
        }
        case 6:
        {
            system("cls");
            SortValue(stk);
            break;
        }
        case 7:
        {
            system("cls");
            SortValue(stk);
            break;
        }
        cout << endl;
        }
        if (s == 0) break;
    }
}