/*Assignment3.Q22]Print following pattern
* 
* *
* * *
* * * *
* * * * * 

#include <stdio.h>
int main() {
   int i, j, rows=5;

   for (i = 1; i <= rows; i++) {
      for (j = 1; j <= i;j++) {
         printf("* ");
      }
      printf("\n");
   }
   return 0;
}
*/
//--------------------------------------
/*

* * * * *
* * * *
* * *
* *
*

*/

/*
#include <stdio.h>
int main() {
   int i, j, rows=5;

   for (i = 0; i <= rows; i++) {
      for (j = rows; j >i;j--) {
         printf("* ");
      }
      printf("\n");
   }
   return 0;
}*/

/*

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/

/*
#include <stdio.h>

int main() {
    int rows = 5; // Number of rows in the pattern

    for (int i = 1; i <= rows; i++) {
          for (int j = 1; j <= i; j++) {
       		     printf("%d ", j);
        }
       
        printf("\n");
    }

    return 0;
}
*/

/*   
5
5 4
5 4 3
5 4 3 2
5 4 3 2 1

*/
/*

#include <stdio.h>

int main() {
    int rows = 5; 

    for (int i = 0; i < rows; i++) {
        
        for (int j = rows; j > i; j--) {
            printf("%d ", j);
        }
       
	   printf("\n");
    }

    return 0;
}
*/

/*

                                    G
                                E F G F E
                            C D E F G F E D C
                        A B C D E F G F E D C B A
                            C D E F G F E D C
                                E F G F E
                                    G
*/







/*

A
B C
D E F
G H I J
*/

/*

#include <stdio.h>

int main() {
    int rows = 4; // Number of rows in the pattern
    char ch = 'A'; // Starting character

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }

    return 0;
}
*/


/*

A B C D
B C D
C D
D
*/


#include <stdio.h>

int main() {
    int rows = 4; // Number of rows in the pattern

    for (int i = 0; i < rows; i++) {
        
        for (char ch = 'A' + i; ch < 'A' + rows; ch++) {
            printf("%c ", ch);
        }
        printf("\n"); 
    }

    return 0;
}

