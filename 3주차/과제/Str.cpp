#include "Str.h"


Str::Str(int leng) {
	if (leng < 0)
	{
		cout << "input error!\nclose the program..";
		exit(1);
	}
	else
	{
		len = leng;
		str = new char[len + 1];
	}
}
Str::Str(char *data) {
	len = strlen(data);
	str = new char[len + 1];
	strcpy(str, data);
}
Str::~Str() {
	delete[] str;
}
int Str::length(void) {
	return len;
}

char* Str::contents(void) {
	return str;
}

int Str::compare(class Str& a) {
	int obj = a.length();
	if (obj < length())
		return 1;
	else if (obj == length())
		return 0;
	else
		return -1;

}

int Str::compare(char *a) {
	int obj = strlen(a);
	if (obj < length())
		return 1;
	else if (obj == length())
		return 0;
	else
		return -1;
}

void Str::operator=(char *a) {
	len = strlen(a);
	delete[] str;
	str = new char[len + 1];
	strcpy(str, a);
}
void Str::operator=(class Str& a) {
	len = a.length();
	delete[] str;
	str = new char[len + 1];
	strcpy(str, a.contents());
}
