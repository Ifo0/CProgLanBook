#include <stdio.h>

// int main()
// {
//
//   int input, boolean;
//   boolean = 0;
//   while((input = getchar()) != EOF){
//     if (input == ' ')
//       if (boolean == 0){
//         putchar(input);
//         boolean = 1;
//       }
//     if (input != ' '){
//       putchar(input);
//       boolean = 0;
//     }
//   }
// }

int main(){

  int cc, pc;
  pc = 0;
  while((cc = getchar()) != EOF){
    if (cc == ' '){
      if (pc != ' ')
        putchar(cc);
    }
    if (cc != ' ')
      putchar(cc);

    pc = cc;
  }


}
