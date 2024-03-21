#include "lists.h"
/**
 * print_dlistint - Prints all the elements of a doubly linked list
 *
 * @h: Pointer to the head of the list
 * Return: The number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
    int count;
    count = 0
    /* Check if the list is empty */
    if (h == NULL)
        return (count);
    /* Move to the beginning of the list */
    while (h->prev != NULL)
        h = h->prev;
    /* Iterate through the list and print each element */
    while (h != NULL)
    {
        printf("%d\n", h->n);
        count++;
        h = h->next;
    }

    return (count);
}
