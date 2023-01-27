
void set_array(char *argv) // with spaces
{
int len;
	int *stack_a;
	int i;
	int j;;

	len = array_len(argv);
	stack_a = (int *)calloc(len + 1, sizeof(int ));
	i = 0;
	while (i < len)
	{
		j = 0;
		if(argv[i] == 9 || argv[i] == 32)
			i++;
		//printf("%d\n", ft_atoi(&argv[i]));
		else
		{
			stack_a[j] = ft_atoi(&argv[i]);
			i++;
			j++;
		}
		printf("stack_a[%d]= %d \nargv[%d]= %d\n", i, stack_a[i], i, ft_atoi(&argv[i]));
	}
}
