Linear Structures
*****************
A computer processes some data. Always. Now what we are interested in this
chapter is the structure of the data. Typically we will study linear structures
like arrays, linked lists, stacks, queues etc. The structure of data is
important because it governs how we can perform insertion, deletion, update and
more such operations on data. It not only governs but also how fast we will be
able to do such stuff. Some languages which have big standard libraries like
C++, Pytho, Java etc they provide many utilities data structures and most
common operations as a part of it. However, since C99 is having a much smaller
standard library such facilities are not there.

When I say linear that does not mean necessarily one dimensional. It could be
n dimensional as well. It is not a strict linear sequence in the sense that I
want to distinguesh these structures from some other data structures like
graphs and trees.

Linked List
===========
Let us begin with linked lists. When we say linked typically we mean singly
linked list. A singly linked list looks something like given below:

.. image:: data/linkedlist.xfig.svg
	:align: center

A linked list's first element is typically known as head and last element is
known as tail. All nodes have a pointer which points to next node so that
you can traverse list in forward direction. Note that it is mighty impossible
to traverse in opposite direction. tail's next pointer point to NULL which
indicates the ending point of the linked list.

Impementation of a linked list involved a self referencing structure. Given
below is a typical self referencing structure:

.. code-block:: c

  struct S {
    struct S *next;
  };

Note that real implementations will have some data members as well. Some common
operation on a linked list are insertion at beginning, in between somewhere
and at the end. We also can have an operation for counting number of nodes.
Deletion and searching of a node is also there. Note that to do any of these
operations except insertion at beginning we need to search the appropriate node
which is an operation involving traversal of list in linear fashion. Therefore
time compexity of all such operations is :math:`O(n)`. Insertion at beginning
will have :math:`O(1)` time complexity.

Let us implement a linked list and its operations:

.. code-block:: c

   #include <stdio.h>
   #include <stdlib.h>

   typedef struct linked_list {
     int data;
     struct linked_list *next;
   }ll;

   void menu();
   void add_at_beg(ll**);
   void print(ll*);
   void search(ll*);

   void delete(ll** head)
   {
     ll *temp, *q;
     int i;

     temp = *head;

     printf("Enter the value of data to be deleted.\n");
     scanf("%d", &i);

     if(temp->data == i) {
       *head = temp->next;
       free(temp);
     } else {
         while(temp->next != NULL) {
           if(temp->data == i) {
             q->next = temp->next;
	     free(temp);
	     break;
	   }
	   q = temp;
	   temp = temp->next;
	 }
     }
   }

   void count(ll* head)
   {
     int count = 1;

     while(head->next != NULL) {
       count++;
       head = head->next;
     }

     printf("The no. of elements in linked list is %d.\n", count);
   }

   void menu()
   {
     puts("1. Add an element at beginning.");
     puts("2. Add an element at position n.");
     puts("3. Add an element at end.");
     puts("4. Count the number of elements.");
     puts("5. Delete an element.");
     puts("6. Search an element.");
     puts("7. Print the list.");
   }

   void append(ll* head)
   {
     ll* temp;
     int i;

     printf("Enter the number which is to be appended to the list.\n");
     scanf("%d", &i);

     temp = (ll*)malloc(sizeof(ll));
     temp->data = i;
     temp->next = NULL;

     while(head->next != NULL) {
       head = head ->next;
     }

     head->next = temp;
   }

   //note that you cant add at position 1 really.
   void add_in_bet(ll* head)
   {
     ll *temp;
     int i = 0, j = 1;
     int position = 0;

     temp = (ll*)malloc(sizeof(ll));

     printf("Enter an integer to be added in between.\n");
     scanf("%d", &i);
     printf("Enter position at which the number is to be added.\n");
     scanf("%d", &position);

     while(head->next != NULL) {
       ++j;
       if(j == position) {
         temp->next = head->next;
	 head->next = temp;
	 temp->data = i;
	 break;
       }
       head = head->next;
     }
   }

   void add_at_beg(ll** head)
   {
     ll *temp;
     int i;

     temp = (ll*)malloc(sizeof(ll));

     printf("Enter an integer to be added at beginning\n");
     scanf("%d", &i);

     temp->next = *head;
     *head = temp;
     (*head)->data = i;
   }

   void print(ll* head)
   {
     while(head != NULL) {
       printf("%d--->", head->data);
       head = head->next;
     }

     printf("NULL\n");
   }

   void search(ll* head)
   {
     int i=0, position=1;

     printf("Enter the number to be searched.");
     scanf("%d", &i);

     while(head != NULL) {
       if(head->data == i) {
         printf("%d is found at position %dth\n", i, position);
         return;
       }

       head = head->next;
       position++;
     }
     printf("%d was not found in linked list.\n", i);
   }

   int main()
   {
     ll* head = NULL;
     int option = 0;

     menu();
     printf("Enter 1 to 7 to choose an action. 0 to quit.\n");
     scanf("%d", &option);

     while(option  >= 1 && option <= 7) {
       switch(option) {
         case 1:
           add_at_beg(&head);
	   break;
         case 2:
           add_in_bet(head);
           break;
         case 3:
           append(head);
	   break;
         case 4:
           count(head);
	   break;
         case 5:
           delete(&head);
	   break;
         case 6:
           search(head);
	   break;
         case 7:
           print(head);
	   break;
         default:
           break;
       }
       menu();
       printf("Enter 1 to 7 to choose an action. 0 to quit.\n");
       scanf("%d", &option);
     }

     return 0;
   }
