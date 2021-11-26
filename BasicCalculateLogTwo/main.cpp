#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n = 1;
	double sum = 1.0;
	double error = 100.0;

	while (error > 0.0001)
	{
		sum += pow(-1, n) / double(++n);
		error = fabs(sum - log(2.0));

		// cout << "current n	= " << n << "	sum	= " << sum << endl;
	}
	cout << endl;
	cout << "sum	= " << sum << endl;
	cout << "ln 2	= " << log(2.0) << endl;
	cout << "iter n	= " << n << endl;
	cout << "error	= " << error << endl;

	return 0;
}