#include <stdio.h>

int main()
{
	int a = 0, b = 0, c = 0, d = 0, e = 0;
	char str[72] = { NULL };
	gets_s(str);
	for (int i = 0; str[i]; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			a++;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			b++;
		}
		else if (str[i] == ' ')
		{
			c++;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			d++;
		}
		else
		{
			e++;
		}
	}
	printf("%d\t%d\t%d\t%d\t%d", a, b, c, d,e);
	return 0;
}