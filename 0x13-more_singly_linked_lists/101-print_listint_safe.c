#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **newlist;
