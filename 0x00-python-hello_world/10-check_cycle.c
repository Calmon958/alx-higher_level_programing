#include "lists.h"
#include <stdlib.h>
/**
 * _realloc - Reallocates a memory block
 * @ptr: The pointer to the previous memory block
 * @prev_size: The size of the memory block previsouly
 * @cur_size: The size of the memory block currently
 * Return: Pointer to the current memory block
 */
void *_realloc(void *ptr, unsigned int prev_size, unsigned int cur_size)
{
  void *new_ptr;
  unsigned int minimum_size = prev_size < cur_size ? prev_size : cur_size;
  unsigned int x;
  if (cur_size == prev_size)
    return (ptr);
  if (ptr != NULL)
    {
      if (cur_size == 0)
	{
	  free(ptr);
	  return (NULL);
	}
      new_ptr = malloc(cur_size);
      if (new_ptr != NULL)
	{
	  for (i = 0; i < min_size; i++)
	    *((char *)new_ptr + i) = *((char *)ptr + i);
	  free(pte);
	  return (new_ptr);
	}
      free(ptr);
      return (NULL);
    }
  else
    {
      new_ptr = malloc(cur_size);
      return (new_ptr);
    }
}


/**
 * check_cycle - checks if a singly linked list has a cycle in it
 * @list: list head
 * Return: 0 when no, else 1
 */

int check_cycle(listint_t *list)
{
  listint_t *fast, *slow = list;
  if (list == NULL)
    return (0);
  fast = list->next;
  while (slow != NULL && fast != NULL && fast->next != NULL)
    {
      if (slow == fast)
	return (1);
      fast = fast->next->next;
      slow = slow->next;
    }
  return (0);
}
