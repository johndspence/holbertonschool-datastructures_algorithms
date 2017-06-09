#include "monty.h"

/**
 * str_tok - Converts a string into tokens.
 *
 * @line: String to be converted.
 *
 * Return: String array of tokens (chr **).
 */
char **str_tok(char *line)
{
	char **tokens;
	char *token;
	int i, len;

	len = 0;
	for (i = 0; line[i]; i++)
	{
		if (line[i] == ' ' || line[i] == '\n')
		{
			len++;
		}
	}
	len++;

	tokens = malloc(sizeof(char *) * len);
	if (!tokens)
	{
		_printf("Error: malloc - str_tok\n");
		return (NULL);
	}

	token = strtok(line, "\n ");
	for (i = 0; token; i++)
	{
		tokens[i] = token;
		token = strtok(NULL, "\n ");
	}
	tokens[i] = NULL;

	return (tokens);
}
