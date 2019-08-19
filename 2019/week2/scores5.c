#include <cs50.h>
#include <stdio.h>

/*
 * Always compile with linker -lcs50-9.0.1, for ex.;
 * clang -Wall -o scores5 scores5.c -lcs50-9.0.1
 *
 */
const int COUNT = 3;
void charts (int count, int score_arr[]);

int main () {

  int scores[COUNT];
  
  for (int i = 0; i < COUNT; i++) {
    printf ("Score %i", i + 1);
    scores[i] = get_int("Enter: ");
  }

  charts (COUNT, scores);
  
}


void charts (int count, int score_arr[]) {

  for (int i = 0; i < count; i++) {

    for (int j = 0; j < score_arr[i]; j++) {
      printf ("#");
    }
    printf ("\n");
  }
}
