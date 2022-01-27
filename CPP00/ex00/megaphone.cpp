#include <iostream>

using namespace std;

char ft_upper(int c)
{
	if (c > 96 & c < 123)
		return (c - 32);
	else
		return (c);
}

int main(int argc, char* argv[])
{
	if (argc != 1)
	{
		int i;
		int j;

		j = 1;
		while (j < argc)
		{
			i = 0;
			while (argv[j][i] != '\0')
			{
				cout << ft_upper(argv[j][i]);
				i++;
			}
			j++;
		}
		cout << endl;
	}
	else
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
}
