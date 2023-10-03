#pragma once

class Ram {
	char memo[100 * 1024];
	int size;

public:
	Ram();
	~Ram();
	char read(int address);
	void write(int address, char value);
};