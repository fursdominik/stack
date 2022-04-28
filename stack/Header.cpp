#include "Header.h"
#include <iostream>

using namespace std;


void push(stack*& stk, int n) {
	stack* temp = new stack;
	temp->next = stk;
	temp->info = n;
	stk = temp;
}

void show(stack* stk) {
	stack* temp = stk;
	while (temp != NULL) {
		cout << temp->info << " ";
		temp = temp->next;
	}
	cout << endl;
}

void Delete(stack*& stk) {
	if (!stk) return;
	stack* temp = stk->next;
	delete stk;
	stk = temp;
}

void DeleteStack(stack*& stk) {
	while (stk) Delete(stk);
}

void SortAddress(stack* stk) {
	push(stk, 0);
	for (stack* temp = stk; temp; temp = temp->next)
	{
		for (stack* temp2 = temp->next; temp2; temp2 = temp2->next)
		{
			if (temp2->next && temp->next->info > temp2->next->info)
			{
				stack* element = temp2->next; // сортировка адресов
				temp2->next = element->next;
				element->next = temp->next;
				temp->next = element;
				temp2 = temp;
			}
		}
	}
	Delete(stk);
}
void SortValue(stack* stk) {
	for (stack* temp = stk; temp; temp = temp->next)
	{
		
		for (stack* temp2 = temp->next; temp2; temp2 = temp2->next)
		{
			
			if (temp->info > temp2->info) 
			{
				int value = temp->info; // сортировка значений
				temp->info = temp2->info;
				temp2->info = value;
			}
		}
	}
}