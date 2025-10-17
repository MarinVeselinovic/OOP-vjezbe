#include<iostream>
int limitInt(int low, int high, int broj)
{
	if (broj < low)
		return low;
	else if (broj > high)
		return high;
	else
		return broj;
}
double limitDouble(double low, double high, double broj)
{
	if (broj < low)
		return low;
	else if (broj > high)
		return high;
	else
		return broj;
}
int main()
{
	int low = 10, high = 30;
	int brojInt = 25;
	int brojInt2 = 5;
	double brojDouble = 35.2;
	double brojDouble2 = 12.5;
	std::cout << "Vraceni broj je " << limitInt(low, high, brojInt)<<"\n";
	std::cout << "Vraceni broj je " << limitInt(low, high, brojInt2) << "\n";
	std::cout << "Vraceni broj je " << limitDouble((double)low, (double)high, brojDouble) << "\n";
	std::cout << "Vraceni broj je " << limitDouble((double)low, (double)high, brojDouble2) << "\n";
}
