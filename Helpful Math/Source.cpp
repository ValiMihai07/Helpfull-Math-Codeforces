#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sum;
	int lun;
	int t;
	int n = 0;

	cin >> sum;
	lun = sum.length();

	while (n < 100)
	{

		for (int i = 0; i < (lun - 2); i++)
		{
			if (i % 2 == 0)
			{
				if (sum[i] > sum[i + 2])
				{
					t = sum[i];
					sum[i] = sum[i + 2];
					sum[i + 2] = t;
				}
			}
		}
		n++;
	}


	cout << sum;

	return 0;
}