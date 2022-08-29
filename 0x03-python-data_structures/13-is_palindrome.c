#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * is_palindrome - checks if a singly list is a palindrome
 * @head: the list
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */
int is_palindrome(listint_t **head)
{
	listint_t *left = NULL, *right = NULL;
	listint_t *mid, *left_mid = NULL, *right_mid = NULL;
	listint_t *tmp = NULL, *_tmp = NULL;
	size_t count = 0, half = 0, i = 0;
	int ok = 1;

	for (tmp = *head; tmp; count++, tmp = tmp->next)
		;
	if (count < 2)
		return (1);
	for (half = count / 2, tmp = *head; ++i != half; tmp = tmp->next)
		;
	if (count % 2)
	{
		left_mid = right_mid = tmp->next;
		mid = tmp->next->next;
	}
	else if (tmp)
	{
		left_mid = tmp;
		right_mid = tmp->next;
	}
	if (left_mid->n != right_mid->n)
		return (0);
	left = *head;
	right = right_mid;
	tmp = right->next;
	while (tmp)
	{
		_tmp = tmp->next;
		tmp->next = right;
		right = tmp;
		tmp = _tmp;
	}
	left_mid->next = right_mid->next = NULL;
	right_mid = right;
	tmp = right->next;
	while (tmp)
	{
		_tmp = tmp->next;
		tmp->next = right;
		ok &= (left->n == right->n);
		right = tmp;
		tmp = _tmp;
		left = left->next;
	}
	right_mid->next = NULL;
	right_mid = right;
	if (left_mid != right_mid)
		left_mid->next = right_mid;
	else
		left_mid->next = mid;
	return (ok);
}
