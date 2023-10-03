#include<iostream>
#include<memory.h>
using namespace std;

#include "Ram.h"

Ram::Ram() {
	size = 100 * 1024;
	for (int i = 0; i < size; ++i)
		memo[i] = 0;
}
Ram::~Ram() {
	cout << "�޸� ���ŵ�";
}
char Ram::read(int address) {
	return memo[address];
}
void Ram::write(int address, char value) {
	memo[address] = value;
}