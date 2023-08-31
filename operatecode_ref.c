#include "monty.h"

/**
 * pint - Prints the value at the top of the stack,
 * followed by a new line.
 * @stack: The head of the stack
 * @line_number: Line number of the command in the bytecode file
 *
 * Return: Nothing
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
		handle_error(ERR_PINT, NULL, line_number, NULL);

	printf("%d\n", (*stack)->n);
}
