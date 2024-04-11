int mySqrt(int x);
unsigned long long find_sqrt(unsigned long long i, int x);
unsigned long long sqrt_finder(unsigned long long sqrt_low, int x);

int mySqrt(int x) 
{
	unsigned long long mid;

	mid = x / 2;

	if (x == 0)
		return (0);
	if (x == 1)
		return (1);
	return (find_sqrt(mid, x));
}

unsigned long long find_sqrt(unsigned long long i, int x)
{
	if (i * i <= x)
		return (sqrt_finder(i, x));
	return (find_sqrt(i / 2, x));
}

unsigned long long sqrt_finder(unsigned long long sqrt_low, int x)
{
	if (sqrt_low * sqrt_low < x)
		return (sqrt_finder(sqrt_low + 1, x));
	if (sqrt_low * sqrt_low == x)
		return (sqrt_low);
	if (sqrt_low * sqrt_low > x)
		return (sqrt_low - 1);
	return (0);
}
