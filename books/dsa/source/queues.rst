Queues
******
Similar to stacks queues are found in real-life as well and we are all well
aware of them. In a queue we get in at the end and get out at the start i.e.
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
