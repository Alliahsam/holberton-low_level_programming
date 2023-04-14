#include "hash_tables.h"

/**
 * hash_table_create - Create a new hash table.
 *
 * @size: Size of the new hash table.
 *
 * Return: Pointer to the new hash table or NULL if fails.
 */

int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    printf("%p\n", (void *)ht);
    return (EXIT_SUCCESS);
}
