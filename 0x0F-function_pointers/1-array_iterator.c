#include <stddef.h>

/**
 *  * array_iterator - Executes a given action on each element of an array.
 *   * @array: The array of integers.
 *    * @size: The size of the array.
 *     * @action: A function pointer to the action function to be applied.
 *      *
 *       * This function takes an array, its size, and a function pointer to an action
 *        * function. The action function is applied to each element of the array.
 *         */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action) {
	for (i = 0; i < size; i++)
	{
	action(array[i]);
	}
	}
}
