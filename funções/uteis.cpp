#include <iostream>
#include <string.h>

using namespace std;

string to_lower(string s) 
{
	for (char &i : s) 
	{
		if (i >= 'A' && i <= 'Z')
		{
			i = i + 32;
		}
	}
	return s;
}
string to_upper(string s)
{
	for (char &i : s)
	{
		if (i >= 'a' && i <= 'z')
		{
			i = i - 32;
		}
	}
	return s;
}
