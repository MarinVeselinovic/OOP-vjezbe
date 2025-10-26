#include <iostream>
int& a(int niz[], int el)
{
	return niz[el];
}
int main()
{
	int niz[] = {1, 2, 3, 4, 5, 6, 7, 8};
	int el = 3;
	a(niz, el) += 1;

	for (int x : niz)
	{
		std::cout << x << " ";
	}
	std::cout << std::endl;
	return 0;
}