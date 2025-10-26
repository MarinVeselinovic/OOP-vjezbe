#include <iostream>
#include <string>
#include <cctype>
int main()
{
	std::string s;
	std::getline(std::cin, s);
	
	for (char& c : s)
	{
		if (std::isalpha(static_cast<unsigned char>(c)))
		{
			c = std::toupper(static_cast<unsigned char>(c));
		}
		else if (std::isdigit(static_cast<unsigned char>(c)))
		{
			c = '*';
		}
		else if (c == ' ' || c == '\t')
		{
			c = '_';
		}
	}
	std::cout << s << std::endl;
	return 0;
}
