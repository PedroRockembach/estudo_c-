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

string strip(const string& s) {
    const string WHITESPACE = " \n\r\t\f\v";
    
    size_t first = s.find_first_not_of(WHITESPACE);
    
    if (string::npos == first)
	{
        return "";
    }
    
    size_t last = s.find_last_not_of(WHITESPACE);
    
    return s.substr(first, (last - first + 1));
}

string lstrip (const string& s)
{
	const string WHITESPACE = " \n\r\t\f\v";
	
	//PRIMEIRO CARACTERE QUE NÃO É ESPAÇO
	size_t first = s.find_first_not_of(WHITESPACE);
	
	if (string::npos == first) 
	{
		return "";
		
	}
	return s.substr(first);
}

string rstrip(const string& s) {
    const string WHITESPACE = " \n\r\t\f\v";
    
    size_t last = s.find_last_not_of(WHITESPACE);
    
    if (string :: npos == last) {
        return "";
    }
    return s.substr(0, last + 1);
}