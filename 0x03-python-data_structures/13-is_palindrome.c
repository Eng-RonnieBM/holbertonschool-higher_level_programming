#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "lists.h"

/**
 * list_len - it counts number of elements in a linked list.
 * @head: head of a listint_t list.
 * Return: number of elements in a linked list.
 */

int list_len(listint_t *head)
{
	int i = 0;

	for (i = 0; head != NULL; i++)
		head = head->next;
	return (i);
}


/**
 * check_even - checks if a even list is pallindrome.
 * @head: head of a listint_t list.
 * @len_list: lenght of the list.
 * Return: 1 if TRUE, 0 if FALSE.
 */

int check_even(listint_t *head, int len_list)
{
	int i = 0;
	int j = 0;
	int counter = 0;
	int *ptr1 = malloc(sizeof(int) * len_list);
	int *ptr2 = malloc(sizeof(int) * len_list);

	if (ptr1 == NULL || ptr2 == NULL)
		exit(-1);
	while (head->next != NULL)
	{
		if (i < (len_list / 2))
		{
			ptr1[i] = (head->n);
		}
		else
		{
			ptr2[j] = head->n;
			j++;
		}
		head = head->next;
		i++;
	}

	ptr2[j] = head->n;

	for (i = 0; ptr1[i] != '\0'; i++)
	{
		if (ptr1[i] == ptr2[j])
		{
			counter++;
		}
		j--;
	}
	free(ptr1);
	free(ptr2);

	if (counter == len_list / 2)
		return (1);
	else
		return (0);
}


/**
 * check_odd - checks if a odd list is pallindrome.
 * @head: head of a listint_t list.
 * @len_list: lenght of the list.
 * Return: 1 if TRUE, 0 if FALSE.
 */

int check_odd(listint_t *head, int len_list)
{
	int i = 0;
	int j = 0;
	int counter = 0;
	int *ptr1 = malloc(sizeof(int) * len_list);
	int *ptr2 = malloc(sizeof(int) * len_list);

	if (ptr1 == NULL || ptr2 == NULL)
		exit(-1);
	while (head->next != NULL)
	{
		if (i < (len_list - 1) / 2)
		{
			ptr1[i] = (head->n);
		}
		else
		{
			ptr2[j] = head->next->n;
			j++;
		}
		head = head->next;
		i++;
	}
	j--;
	ptr2[j] = head->n;

	for (i = 0; ptr1[i] != '\0'; i++)
	{
		if (ptr1[i] == ptr2[j])
		{
			counter++;
		}
		j--;
	}
	free(ptr1);
	free(ptr2);

	if (counter == len_list / 2)
		return (1);
	else
		return (0);
}





/**
 * is_palindrome - checks if linked list is a palindrome
 * @head: head of the list
 *
 * Return: 1 if a palindrome, 0 if not a palindrome
 */

int is_palindrome(listint_t **head)
{
	int validate = 0;
	int len_list = 0;

	/*Zero elements is pallindrome*/
	if (*head == NULL)
		return (1);

	/*One element is pallindrome*/
	if ((*head)->next == NULL)
		return (1);

	len_list = list_len(*head);

	if (len_list % 2 == 0)
		validate = check_even(*head, len_list);
	else
		validate = check_odd(*head, len_list);

	return (validate);
}
