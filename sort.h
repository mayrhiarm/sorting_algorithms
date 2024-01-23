#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void bubble_sorts(int *array, size_t size);
void print_arrays(const int *array, size_t size);
void print_lists(const listint_t *list);
listint_t *swap_nodes(listint_t *node, listint_t **list);
void insertion_sorts_list(listint_t **list);
void selection_sorts(int *array, size_t size);
void quick_sorts(int *array, size_t size);
void shell_sorts(int *array, size_t size);
void cocktail_sorts_list(listint_t **list);
void counting_sorts(int *array, size_t size);
void merge_sorts(int *array, size_t size);
void heap_sorts(int *array, size_t size);
void radix_sorts(int *array, size_t size);
void bitonic_sorts(int *array, size_t size);
void quick_sorts_hoare(int *array, size_t size);

#endif

