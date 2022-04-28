#pragma once

#ifndef _Header_H_
#define _Header_H_

#include <iostream>

struct stack { // ���������� ������������ ����
    float info;
    stack* next; //��������� �� ��������� �������
};

void push(stack*& stk, int n); // ��������� ������� 

void show(stack* stk); // ����� �����

void Delete(stack*& stk); // ��������

void DeleteStack(stack*& stk); // �������� ������ �����

void SortAddress(stack* stk); // ���������� �������

void SortValue(stack* stk); // ���������� ��������

#endif 
