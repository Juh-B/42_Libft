#include "libft.h"

static int	ft_strlen_itoa(int n)
{
	long	number;
	int		len;

	number = n;
	len = 0;

	if (n <= 0)
	{
		number = -n;
		len++;
	}
	while (number > 0)
	{
		number /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = ft_strlen_itoa(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	len--;
	if (n < 0)
	{
		n = -n;
		str[0] = '-';
	}
	while (len >= 0)
	{
		if (str[len] != '-')
			str[len] = (n % 10) + '0';
		n /= 10;
		len--;
	}
	return (str);
}
