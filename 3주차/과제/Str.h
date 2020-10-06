#pragma once
#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

class Str
{
private:
	char *str;
	int len;
public:
	Str(int);
	Str(char *);
	~Str(); 
	int length(void); 
	char *contents(void);
	int compare(class Str&);
	int compare(char *); 
	void operator=(char *); 
	void operator=(class Str& );
};
