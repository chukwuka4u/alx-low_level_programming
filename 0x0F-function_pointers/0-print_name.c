/**
 * print_name - function that prints a name
 * @name: name to be print
 * @f: pointer to function to be used by print_name
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
