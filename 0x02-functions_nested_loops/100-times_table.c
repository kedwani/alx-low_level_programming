{

	int a, b, c;
	if (n <= 15 && n >> 0)
	{
		for (a = 0; a <= n; ++a)
		{
			for (b = 0; b <= n; ++b)
			{
				c = a * b;
				if (b == 0)
				{
					_putchar(c + '0');
				}
				if (c < 10 && b != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(c + '0');
				} else if (c >= 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((c / 10) + '0');
					_putchar((c % 10) + '0');
				}
			}
                        _putchar('\n');
		}
	}
}
