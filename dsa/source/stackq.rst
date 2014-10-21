Stacks and Queues
*****************
Stacks in computer are very much analogous to the stacks we encounter in real-
life. For example, a stack of dishes in kitchen or a stack of books on our
study table. The semantics of stack is also very much similar to real-life. Say
we want to take a book from a stack of books then we typically remove books
from top first and then get our desired book and replace other books back. Thus
a stack is kind of Last-In-First-Out structure (data structure so to say). In
short it is written as **LIFO**.

Stacks are typically implemented with few backends like arrays or pointers or
linked lists. However, even though backend provides its own semantics the way
stack operates overrules that. For example, we can access any element of an
array by using its index operation but if we implement a stack using an array
then the details of array is hidden. The only accessible element is through
`top` of stack. Similarly, when we implement it using linked lists all
operations happen though `head` of the linked list. It is quite possible to use
`tail` as the `top` of the stack though, however, that would require small
bookkeeping cost of tail pointer and `head` is not bad at all. Pointers are
similar to arrays just that they allow for reallocation, when compared to
arrays, in case more elements are going to come into stack that initially 
allocated.

Stacks are heavily used in computer science. For example, inpix, postfix and 
prefix evaluations/conversions require stacks. Similarly, traversal of a 
binary tree without recursion requires a stack. Every program which we run on 
typical computer require a stack from memory management system of operating 
system. There are more numerous usage of stacks which you will come to know
during your programming lifetime.

Conventionally there are two operations, `push` and `pop` which pushes a new 
element on top of stack or pops and returns an element off the stack
respectively. For both the operations one error condition can be encountered.
When pushing the array may become full or simply there is no more memory left
for allocation then a stack *overflow* case happens. Opposite to this is the
situation when we want to pop an element when there are no elements in the
stack. This is known as stack *underflow*.

Complexity wise the space requirement is linear or :math:`O(n)` while `pop` 
and `push` can be performed in constant time i.e. :math:`O(1)` which you 
should be able to figure out from code as these are very simple to analyze.

Array Based Implementation
==========================
In this implementation I have used arrays as backends for stack 
implementation. As you will notice the array size is controlled by the variable
`MAX` which is 128. This is most inflexible but fastest implementation of all 
which I am going to show.

The implementation has been split into two parts. The header file and the  
implementation file. This iskept to so that code can be easily reused and this 
code can be converted to library. Please note that this code is not meant to 
be used in production environment is just an example. More commentary will follow the code:

Stack.c
-------
.. code-block:: c

   #ifndef STACK_H
   #define STACK_H
   
   #include <stdio.h>
   #include <stdbool.h>
   #include <stdlib.h>

   const int MAX = 128;
   int top = 0;

   void push(int [], int);
   int pop(int []);
   bool IsEmpty();
   void menu();

   #endif

Stack.c
-------
.. code-block:: c
                
    #include "stack.h"

    bool isEmpty()
    {
    printf("top is %d\n", top);
        if(top == 0)
        {
        return true;
        }
        else
        {
        return false;
        }
    }

    void push(int stack[], int element)
    {
      if(top == MAX - 1)
        {
          printf("Stack overflow.\n");
          return;
        }
      else
        {
          stack[top++] = element;
          printf("Pushed element is %d.\n", element);
        }
    }

    int pop(int stack[])
    {
      if(isEmpty(stack))
        {
          printf("Stack underflow.\n");
          exit(-1);
        }
      else
        {
          return stack[--top];
        }
    }

    void menu()
    {
      puts("1. Push an element on top of stack.");
      puts("2. Pop an element off the top of stack.");  
    }

    int main()
    {
      int stack[MAX];
      int popped_element=0, element=0, option=-1;
        
      menu();
      printf("Enter 1 or 2 to choose an action. 0 to quit.\n");
      scanf("%d", &option);
      fflush(stdin);
      while(option == 1 || option == 2)
      {
      switch(option) 
        { 
        case 1:
          printf("Enter an integer to push onto stack.\n");
          scanf("%d", &element);
          push(stack, element);
          break;
        case 2: 
          popped_element = pop(stack);
          printf("Popped element is %d\n", popped_element);
          break; 
        default: 
          break; 
        }
      
      menu();
      printf("Enter 1 or 2 to choose an action. 0 to quit.\n");
      fflush(stdin);
      scanf("%d", &option);
      fflush(stdin);
      }
        
      return 0;
    }

Linked List Based Implementation
================================
Given below is list based implementation of stacks. Note that it can grow as
much as memory allows it to.

stack_ll.h
----------
.. code-block:: c

    #ifndef STACK_LL_H
    #define STACK_LL_H

    #include <stdio.h>
    #include <stdbool.h>
    #include <stdlib.h>

    typedef struct Stack{
      int data;
      struct Stack *next;
    }Stack;

    void push(Stack**, int);
    int pop(Stack**);
    void menu();

    #endif

stack_ll.c
----------
.. code-block:: c

    #include "stack_ll.h"

    bool isEmpty(Stack *top)
    {
      if(top == NULL)
        {
          return true;
        }
      else
        {
          printf("top is %d\n", top->data);
          return false;
        }
    }

    void push(Stack** top, int element)
    {
      Stack* temp = (Stack*)malloc(sizeof(Stack));
          
      if(temp == NULL)
        {
          printf("Cannot allocate memory\n");
          exit(1);
        }

      if(top != NULL)
        {
          temp->next = *top;
          *top = temp;
          (*top)->data = element;
        }
      else
        {
          *top = temp;
          (*top)->next = NULL;
          (*top)->data = element;
        }
    }

    int pop(Stack** top)
    {
        if(isEmpty(*top))
        {
          printf("Stack underflow.\n");
          exit(-1);
        }
        
        Stack* temp = *top;
        
        *top = (*top)->next;
        int data = temp->data;
        free(temp);
        return data;
    }

    void menu()
    {
      puts("1. Push an element on top of stack.");
      puts("2. Pop an element off the top of stack.");  
    }

    int main()
    {
      Stack* stack = NULL;
      int popped_element=0, element=0, option=-1;
        
      menu();
      printf("Enter 1 or 2 to choose an action. 0 to quit.\n");
      scanf("%d", &option);
      fflush(stdin);
      while(option == 1 || option == 2)
        {
          switch(option) 
            { 
            case 1:
              printf("Enter an integer to push onto stack.\n");
              scanf("%d", &element);
              push(&stack, element);
              break;
            case 2: 
              popped_element = pop(&stack);
              printf("Popped element is %d\n", popped_element);
              break; 
            default: 
              break; 
            }
          
          menu();
          printf("Enter 1 or 2 to choose an action. 0 to quit.\n");
          fflush(stdin);
          scanf("%d", &option);
          fflush(stdin);
        }
        
      return 0;
    }

Usage of Stack
==============
Stacks are very useful as they are used in various applications of algorithms.
On many computer architectures stacks are used to represent a section of
program memory. Calculators use it to evaluate expressions. One of the fairly
neat usage is complete elimination of recursion using a stack. For example, as
you will see binary trees are very easy to traverse using recursion but using
a stack we can completely eliminate this recursion. The basic of elimination
of reccursion using a stack lies in the fact that recursion calls make stack
frames in memory similar behavior is simulated when we eliminate any recursion.

Evaluation of expressions like Polish Notation or Reverse Polish Notation
using a stack is well known. Stacks are also used to convert one type of
expression into another type as we will see in examples.

Queues
======
Similar to stacks queues are found in real-life as well and we are all well
aware of them. In a queue we get in at then end and get out at the start i.e.
in contrast to stacks both the ends are used one for enqueuing and the other
for dequeuing. Queues have more forms like priority queues which are used to
schedule things like process or task scheduling. Queues have a lot of other
uses wherever we want to maintain a **FIFO** (first in first out) behavior.
Similar to stacks I will show you both array based and linked list based
implementation. Most asynchronous web servers maintain an even loop where
events are queued as they arrive and dequeued as the processing engine is
free and then it picks up next task from the even loop.

Like stacks there are two operations, `enqueue` and `dequeue` wcich adds an
element at the end and removed one element from head respectively. Both these
operations can be performed in :math:`O(1)` time complexity. For
`enqueue` we might have an error state when the queue may become full or we
may not have more memory depending on the fact whether the queue is array
based or linked list based. For `dequeue` we can always reach a stage when
the queue is empty.

Complexity wise the space requirement is linear or :math:`O(n)` while `pop` 
and `push` can be performed in constant time i.e. :math:`O(1)` which you 
should be able to figure out from code as these are very simple to analyze.

Array Based Implementation
==========================
queue.h
-------
.. code-block:: c

    #ifndef QUEUE_H
    #define QUEUE_H

    #include <stdio.h>
    #include <stdbool.h>
    #include <stdlib.h>

    const int MAX = 4;
    int head = -1;
    int tail = -1;

    void enqueue(int [], int);
    int dequeue(int[]);
    void menu();

    #endif

queue.c
-------
.. code-block:: c

    #include "queue.h"

    void enqueue(int queue[], int element)
    {
      if((head == 0 && tail== MAX-1) || (head==tail+1))
        printf("\n\nQueue is full.\n");
      else
        {
          if(tail == -1)
            {
              tail = 0;
              head = 0;
            }
          else if(tail == MAX - 1)
            tail = 0;
          else
            tail++;
          queue[tail] = element;
        }
    }

    int dequeue(int queue[])
    {
      int element = 0;

      if(head == -1)
        printf("\nQueue is empty.\n");
      else
        {
          element = queue[head];
          if(head == tail)
            {
              head = -1;
              tail = -1;
            }
          else if(head == MAX - 1)
            head = 0;
          else
            head++;
        }   
      return element;
    }

    void menu()
    {
      puts("1. Enqueue and element into the queue.");
      puts("2. Dequeque an element from the queue.");
    }

    int main()
    {
      int queue[MAX];
      int dequeued_element=0, element=0, option=-1;
        
      menu();
      printf("Enter 1 or 2 to choose an action. 0 to quit.\n");
      scanf("%d", &option);
      fflush(stdin);
      while(option == 1 || option == 2)
        {
          switch(option) 
            { 
            case 1:
              printf("Enter an integer to enqueue into queue.\n");
              scanf("%d", &element);
              enqueue(queue, element);
              break;
            case 2: 
              dequeued_element = dequeue(queue);
              printf("Dequeued element is %d\n", dequeued_element);
              break; 
            default: 
              break; 
            }
          
          menu();
          printf("Enter 1 or 2 to choose an action. 0 to quit.\n");
          fflush(stdin);
          scanf("%d", &option);
          fflush(stdin);
        }
        
      return 0;
    }

Linked List Based Implementation
================================
Given below is list based implementation of queues.

queue_ll.h
----------
.. code-block:: c

    #ifndef QUEUE_H
    #define QUEUE_H

    #include <stdio.h>
    #include <stdbool.h>
    #include <stdlib.h>

    typedef struct Queue{
      int data;
      struct Queue *next;
    }Queue;

    Queue *head = NULL;
    Queue *tail = NULL;

    void enqueue(Queue**, int);
    int dequeue(Queue**);
    void menu();

    #endif

queue_ll.c
----------
.. code-block:: c

    #include "queue_ll.h"

    void enqueue(Queue** t, int data)
    {
      Queue *temp = (Queue*)malloc(sizeof(Queue));

      if(temp == NULL)
        {
          printf("Out of memory!\n");
          exit(-1);
        }

      temp->next = NULL;
      temp->data = data;
      
      if((head == NULL) && (*t == NULL))
        {
          head = *t = temp;
        }
      else
        {
          (*t)->next = temp;
          *t = temp;
        }
    }

    int dequeue(Queue** h)
    {
      if(*h == NULL && tail == NULL)
        {
          printf("Queue empty!\n");
          return -1;
        }

      if((*h != NULL) && (tail != NULL) && (*h == tail))
        {
          int data;

          data = (*h)->data;
          free(*h);
          *h = tail = NULL;
          return data;
        }
      else
        {
          int data;
          Queue* temp = *h;

          data = (*h)->data;
          *h = (*h)->next;
          free(temp);
          return data;
        }
    }

    void menu()
    {
      puts("1. Enqueue and element into the queue.");
      puts("2. Dequeque an element from the queue.");
    }

    int main()
    {
      int dequeued_element=0, element=0, option=-1;
        
      menu();
      printf("Enter 1 or 2 to choose an action. 0 to quit.\n");
      scanf("%d", &option);
      fflush(stdin);
      while(option == 1 || option == 2)
        {
          switch(option) 
            { 
            case 1:
              printf("Enter an integer to enqueue into queue.\n");
              scanf("%d", &element);
              enqueue(&tail, element);
              break;
            case 2: 
              dequeued_element = dequeue(&head);
              printf("Dequeued element is %d\n", dequeued_element);
              break; 
            default: 
              break; 
            }
          
          menu();
          printf("Enter 1 or 2 to choose an action. 0 to quit.\n");
          fflush(stdin);
          scanf("%d", &option);
          fflush(stdin);
        }
        
      return 0;
    }
