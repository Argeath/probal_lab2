#include <iostream>

using namespace std;

long long randLiniowy(long long a, long long c, long long M, long long x0)
{
	return (a * x0 + c) % M;
}

double randPrzesuwny(int p, int q, long long M, long long seed)
{
	seed ^= seed >> p;
	seed ^= seed << q;
	seed %= M;
	return seed;
}

int main() {
	long long x = 0;
	cout << "Liniowy" << endl;
	for(int i = 0; i < 100; i++)
	{
		x = randLiniowy(69069, 1, 4294967296, x);
		cout << x << endl;
	}

	cout << "Przesuwny" << endl;

	x = randLiniowy(69069, 1, 4294967296, 6542346534);
	for(int i = 0; i < 100; i++)
	{
		x = randPrzesuwny(2, 1, 4294967296, x);
		cout << x << endl;
	}

  return 0;
} 
