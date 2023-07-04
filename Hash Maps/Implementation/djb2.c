#include "hash_tables.h"

/**
 * hash_djb2 - implement djb2 algorithm (one of best string hash functions) but not the most effective
 * source code copied from http://www.cse.yorku.ca/~oz/hash.html
 *
 * @str: value
 * Return: key
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long hash = 5381;
	int c;

	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

	return (hash);
}

/*
*Extra read about djb2 algorithm:http://www.cse.yorku.ca/~oz/hash.html
*/