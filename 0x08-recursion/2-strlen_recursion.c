



int _strlen_recursion(char *s)
{
	int  medhat = 0;
	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
		medhat ++;
	}
	else
		return (medhat);
}
