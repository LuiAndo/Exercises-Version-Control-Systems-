#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int head = 0;
  int tail = 0;

  srand(time(NULL));

  printf("tossing a coin...\n");

  for(int i = 1; i < 4; i++)
    {
      if (rand() % 2 == 0)
	{
	  printf("Round %d: Heads\n", i);
	  head++;
	}
      else
	{
	  printf("Round %d: Tails\n", i);
	  tail++;
	}
    }

  printf("Heads: %d, Tails: %d\n", head, tail);

  return 0;
}
