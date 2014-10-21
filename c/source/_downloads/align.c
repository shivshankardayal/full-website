  /* Description: Demonstration of structure padding and memory alignment.*/
    
  include <stdio.h>
 
  typedef struct
  {
    char a;
    int b;
  }A;

  typedef struct
  {
    char a;
    int b;
    char c;
    char d;
    char e;
    int f;
  }B;
  
  typedef struct
  {
    char x;
    char y;
    int z;
  }C;

  typedef struct
  {
    char x;
    int z;
    char y;
  }D;

  int main()
  {
    A a;
    B b;
    C c;
    D d;
    printf("Size of structure %c is %d\n",'A',sizeof(a));
    printf("Size of structure %c is %d\n",'B',sizeof(b));
    printf("Size of structure %c is %d\n",'C',sizeof(c));
    printf("Size of structure %c is %d\n",'D',sizeof(d));

    return 0;
  }

