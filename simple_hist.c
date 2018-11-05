#include <stdio.h>

#define OUT 0
#define IN 1
#define MAXLEN 10

int main(){

  long arr_char[MAXLEN+1];
  int c, nc, tracker;
  int j, i, k;
  int maxVal, iterVal;

  for (i = 0; i <= MAXLEN; ++i) /*array indexed 0 to 9 */
    arr_char[i] = 0;

  printf("Size of array with 10? indices: %ld \n",sizeof(arr_char));


  tracker = IN;
  while ((c = getchar()) != EOF){
    ++nc;

    if (c == '\n' || c == ' ' || c == '\t'){
      --nc;
      tracker = OUT;
    }
    if (tracker == OUT){
      if (nc != 0 && nc <= MAXLEN){
        ++arr_char[nc];
      }
    nc = 0;
    tracker = IN;
  }

  }
// }
  

  maxVal = arr_char[0]; 
  for(j = 0; j < MAXLEN + 1; ++j){
    iterVal = arr_char[j];
    if (iterVal > maxVal)
      maxVal = iterVal;
  }

  for (j = maxVal; j > 0; --j){
    printf("%4d", j);
      for (k = 0; k < MAXLEN + 1; ++k){
	if (arr_char[k] >= j){
	  printf("* ");
	}
	else{
	  printf("  ");
	}
      }
    printf("\n");
  }
  printf("     ");
  for (k = 1; k < MAXLEN + 1; ++k){
    printf(" %d", k);
  }
  printf("\n");
  /*
  for (j = 1; j <= MAXLEN; ++j){
    printf(" %d ", j);
    for (k = 0; k < arr_char[j]; ++k){
      putchar('*');
     }
    printf("\n");

    }*/
}
