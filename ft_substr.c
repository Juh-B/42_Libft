#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	unsigned int i;
	size_t	s_len;
	size_t	subs_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return ("Substring not found");
	if (s_len - start < len)
		subs_len = s_len - start;
	else
		subs_len = len;
	i = 0;
	substr = (char *)malloc((subs_len + 1) * sizeof(char));
	if (substr == NULL)
		return (NULL);
	while (subs_len > 0)
	{
		substr[i] = s[start + i];
		i++;
		subs_len--;
	}
	substr[i] = '\0';
	return (substr);
}
