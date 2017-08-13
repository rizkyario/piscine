/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnugroho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 08:47:08 by rnugroho          #+#    #+#             */
/*   Updated: 2017/08/12 18:50:19 by rnugroho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_match(char *s1, char *s2, int i, int j)
{
	int ret;
	printf("%c match %c\n", s1[i], s2[j]);
	if (s2[j] == '*')
	{
		if ((s1[i] == s2[j + 1]) && (s1[i + 1] != s2[j + 1]))
			ret = ft_match(s1, s2, i, j + 1);
		else if (s2[j + 1] == '*')
			ret = ft_match(s1, s2, i, j + 1);
		else if (s1[i])
			ret = ft_match(s1, s2, i + 1, j);
		else
			return (0);
	}
	else if (s2[j] == s1[i] && s2[j])
	{
		s1[i] = '*';
		ret = ft_match(s1, s2, i + 1, j + 1);
	}
	else if (s2[j])
		ret = 0;
	else if (s1[i])
		return (0);
	else
		return (1);
	return (ret);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		nmatch(char *s1, char *s2)
{
	ft_match(s1, s2, 0, 0);
	return (1);
}
