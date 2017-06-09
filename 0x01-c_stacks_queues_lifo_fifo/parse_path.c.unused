#include "shell_hdr.h"

/**
 * parse_path - Converts a string into tokens.
 *
 * @string: String to be tokenized.
 * @delim: Deliminator.
 *
 * Return: Tokens (char **)
 */
char **parse_path(char *string, char delim)
{
	int token_count, token_iter, str_iter;
	char **tokens;
	char *token;

	token_count = count_words(string, delim);
	tokens = malloc(sizeof(char *) * (token_count + 1));
	if (tokens == NULL)
		return (NULL);
	token_iter = 0;
	str_iter = 0;
	while (token_iter < token_count)
	{
		if (string[str_iter] != delim && string[str_iter] != '\0')
		{
			tokens[token_iter] = malloc(sizeof(char) *
				(count_chars(&(string[str_iter]), delim) + 1));
			if (tokens[token_iter] == NULL)
				return (NULL);
			token = tokens[token_iter];
			while (string[str_iter] != delim && string[str_iter] != '\0')
			{
				*token++ = string[str_iter];
				str_iter++;
			}
			*token = '\0';
			while (string[str_iter] == delim && string[str_iter] != '\0')
				str_iter++;
			token_iter++;
		}
		else
			str_iter++;
	}
	tokens[token_count] = (NULL);
	return (tokens);
}

/**
 * count_chars - Counts number of chars in a string, respecting a deliminator.
 *
 * @string: String to be tokenized.
 * @delim: Deliminator.
 *
 * Return: Count (int).
 */
int count_chars(char *string, char delim)
{
	int char_cnt;

	char_cnt = 0;
	while (*string != delim && *string != '\0')
	{
		string++;
		char_cnt++;
	}
	return (char_cnt);
}

/**
 * count_words - Counts number of words in a string, respecting a deliminator.
 *
 * @string: String to be tokenized.
 * @delim: Deliminator.
 *
 * Return: Count (int).
 */
int count_words(char *string, char delim)
{
	int token_count;

	token_count = 0;
	while (*string != '\0')
	{
		if (*string != delim)
		{
			token_count++;
		}
		while (*string != delim && *string != '\0')
		{
			string++;
		}
		while (*string == delim && *string != '\0')
		{
			string++;
		}
	}
	return (token_count);
}
