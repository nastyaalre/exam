// Assignment name  : first_word
// Expected files   : first_word.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes a string and displays its first word, followed by a
// newline.

// A word is a section of string delimited by spaces/tabs or by the start/end of
// the string.

// If the number of parameters is not 1, or if there are no words, simply display
// a newline.

// Examples:

// $> ./first_word "FOR PONY" | cat -e
// FOR$
// $> ./first_word "this        ...    is sparta, then again, maybe    not" | cat -e
// this$
// $> ./first_word "   " | cat -e
// $
// $> ./first_word "a" "b" | cat -e
// $
// $> ./first_word "  lorem,ipsum  " | cat -e
// lorem,ipsum$
// $>

#include <unistd.h>

int main(int ac, char *av[])
{
    int i;

    i = 0;
  if (ac == 2)
  {
    while (av[1][i] != '\0')
    {
        while (av[1][i] >= 9 && av[1][i] <= 13 || av[1][i] == 32)
            i++;
        while (av[1][i] >= 33 && av[1][i] <= 126)
        {
        write (1, &av[1][i], 1);
        i++;
        }
        break;
    }
  }
  write (1, "\n", 1);
}
