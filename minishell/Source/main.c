/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouw <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 13:19:50 by tlouw             #+#    #+#             */
/*   Updated: 2016/09/07 11:31:57 by tlouw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char	*get_path()
{
	int			i;
	extern char	**environ;
	char		*path;
	
	i = 0;
	while (environ[i])
	{
		if (ft_strncmp(environ[i], "PATH=", 5) == 0)
			path = environ[i] + 5;
		i++;
	}
	return (path);
}


int	main(int ac, char **av)
{
	int	ret;
	char buf[2];
	char *line;
	char	*path;
	int status;
	pid_t	pid;
	char **args;

	path = get_path();

	while (1)
	{
		write(1, "$>", 2);
		line = ft_strnew(1);
		while ((ret = read(0, buf, 1)))
		{
			if (buf[0] == '\n')
				break;
			else
			{
				buf[ret] = '\0';
				line = ft_strjoin(line, buf);
			}
		}
		if (ft_strcmp(line, "exit") == 0)
			exit(0);
		args = ft_strsplit(line, ' ');
		path = ft_strjoin("/bin/", args[0]);
		pid = fork();
		if (pid == 0)
		{
			execve(path, args, NULL);
		}
		wait(&status);
	}
}
