/* 
	person_t - ���� �����
		name - ��'�
		surname - �������
*/
#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void empty_err(char * field);
void input_field(char * fName, char * field);
void input_field(char * fName, int &field, int minValue, int maxValue);

typedef struct {
	char name[30];
	char surname[30];
	int age;
	void setPerson();
} person_t;