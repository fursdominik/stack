#pragma once

#ifndef _Header_H_
#define _Header_H_

#include <iostream>

struct stack { // декларация структурного типа
    float info;
    stack* next; //указатель на следующий элемент
};

void push(stack*& stk, int n); // добавляем элемент 

void show(stack* stk); // вывод стека

void Delete(stack*& stk); // удаление

void DeleteStack(stack*& stk); // удаление целого стека

void SortAddress(stack* stk); // сортировка адресов

void SortValue(stack* stk); // сортировка значений

#endif 
