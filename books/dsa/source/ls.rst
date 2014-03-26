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

Singly Linked List
==================
Let us begin with singlly linked lists. When we say linked typically we mean
singly linked list. There is other types as well. Doubly linked lists and
circular linked list for example. For now we will start with singly linked
list because it is simplest to understand and can be used for as a base data
structure to implement stacks and queues which are going to be coming
chapters. A singly linked list looks something like given below:

.. image:: data/linkedlist.xfig.svg
	:align: center

A linked list's first element is typically known as `head` and last element is
known as `tail`. All nodes have a pointer which points to next node so that
you can traverse list in forward direction. Note that it is impossible
to traverse in opposite direction. tail's next pointer point to NULL which
indicates the ending point of the linked list. `tail` is not mandatory to
have when dealing with linked list but a pointer to `head` is aleways present.

Impementation of a linked list involved a self referencing structure. Given
below is a typical self referencing structure:

.. code-block:: c

  struct S {
    struct S *next;
  };

  struct S* head;

The presence of `next` which is a pointer of C causes some meory to be wasted
in linear order equal to number of nodes in linked list.
Note that real implementations will have some data members as well. Some common
operation on a linked list are insertion at beginning, in between somewhere
and at the end. We also can have an operation for counting number of nodes.
Deletion and searching of a node is also there. Note that to do any of these
operations except insertion at beginning we need to search the appropriate node
which is an operation involving traversal of list in linear fashion. Therefore
time compexity of all such operations is :math:`O(n)`. Insertion at beginning
will have :math:`O(1)` time complexity. However, if search operation for a
particular node is to be considered separate then deletion and insertion at
any place will have time complexity of :math:`O(n)`.

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

       if(*head == NULL) {
           printf("There is no element to be deleted.\n");
           return;
       }

       printf("Enter the value of data to be deleted.\n");
       scanf("%d", &i);

       if(temp->data == i) {
           *head = temp->next;
           free(temp);
           return;
       } else {
           while(temp->next != NULL) {
               if(temp->data == i) {
                   q->next = temp->next;
                   free(temp);
                   return;
               }
               q = temp;
               temp = temp->next;
           }
       }

       printf("The element to be deleted was not found.\n");
   }

   int count(ll* head)
   {
       int count = 1;

       if(head == NULL) {
           printf("The no. of elements in linked list is %d.\n", 0);
           return 0;
       }

       while(head->next != NULL) {
           count++;
           head = head->next;
       }

       printf("The no. of elements in linked list is %d.\n", count);
       return count;
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

   void append(ll** head)
   {
       ll* temp, *q = *head;
       int i;

       printf("Enter the number which is to be appended to the list.\n");
       scanf("%d", &i);

       temp = (ll*)malloc(sizeof(ll));
       temp->data = i;
       temp->next = NULL;

       if(count(*head) == 0) {
           *head=temp;
           return;
       }
      
       while(q->next != NULL) {
           q = q->next;
       }

       q->next = temp;
   }

   void add_in_bet(ll** head)
   {
       ll *temp, *q = *head;
       int i = 0, j = 0;
       int position = 0;

       printf("Enter position at which the number is to be added.\n");
       scanf("%d", &position);

       if(position == 0)
           return add_at_beg(head);

       temp = (ll*)malloc(sizeof(ll));

       printf("Enter an integer to be added in between.\n");
       scanf("%d", &i);

       while(q->next != NULL) {
           ++j;
           if(j == position) {
               temp->next = q->next;
               q->next = temp;
               temp->data = i;
               break;
           }
           q = q->next;
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
       printf("Head-->");
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
       getchar(); // to remove \n

       while(option  >= 1 && option <= 7) {
           switch(option) {
               case 1:
                   add_at_beg(&head);
                   break;
               case 2:
                   add_in_bet(&head);
                   break;
               case 3:
                   append(&head);
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
           fflush(stdin);
           scanf("%d", &option);
           getchar(); // to remove \n
       }

       return 0;
   }

Now I will explain these function one by one using images. First we discuss
`add_at_begin`. Note that we can wrap all insertion functions by calling single
insert function of the type `insert(ll* head, int item, size_t position)`.
Please note that I have used `size_t` for position
because I want the list to be able to have as many members as malloc allows.
If we use something like `int` which is nothing but `signed int` then we would
be restricted to 2 * 1024 * 1024 *1024 or 2147483648 members. Note that
`size_t` is nothing but `unsigned long` which is 4 bytes on 32-bit systems and 
8 bytes
on 64-bit systems.

Insertion at the Beginning
--------------------------
Insertion at beginning is simple. We create a new node. Then we make its `next`
pointer to point to current head and then use current head pointer to point to
this new node. The entire operation is shown graphically below:


TODO: Make images for operation.

Insertion at Some Position
--------------------------
If position is 0 then call insertion at beginning. Note that in the code it is
assumed that position will be less than size of list. Because if position is
more then `temp` is allocated but it is not linked in to the structure and
will cause **memory leak**. We iterate in the while loop to reach the position
and then we do similar pointer manipulation like in last case to insert a node
in between which is shown using images below.

TODO: Make images for operation.

Insertion at the End or Append
------------------------------
If the list is not empty append is easy just moving a few pointers at the end.
Making the `next` of last node point to the newly allocated memory and `next` 
of newly allocated memory at `NULL`. However, if the list is empty is is 
simply insetion at beginning.

TODO: Make images for operation.

Searching an Element
--------------------
Perhaps one of the important operations because it also affects deletion or
insetion before/after a particular node. It is ealiy implemented by starting
from `head` examining data and proceeding to next untill a match is found.

TODO: Make images for operation.

Deleting an Element
-------------------
This is similar to insertion just reverse in nature. If the node to be deleted
is head node the we simply copy the name of `head` to `temp` and make `head` 
point to next element. Then we free `temp.` It is slightly more involving to 
delete if the node is not head. In that case we point current node's next to `
temp's ` next and then delete temp. It is shown below using diagrams.

TODO: Make images for operation.

Counting the Size
-----------------
Most list implementations provide a size attribute which is always updated upon
insertion and deletion and can be used to know the current size of list.
The `count` function is similar in functionality just that to maintain a size
we will need to call it whenever a value is inserted or deleted. The
implementation of count is easily doby by starting with `head` and incrementing
a variable as long as end (marked by NULL) is not encountered.

Singly Linked List vs Array
===========================
For size based comparison an array is fixed while a singly linked list can grow
as needed so there is no competition there. Just that allocating one node at a
time may make things less efficient. However, this is also good in one sense
that on a system low with RAM the problems caused by memory fragmentation will
be less problematic.

For time complexity let us analyze that:
+------------------------+-------------------------+-------------------+
| Operation              | Linked Lists            | Arrays            |
+========================+=========================+===================+
| Search                 | :math:`\Theta(n)`       | :math:`\Theta(1)` |
+------------------------+-------------------------+-------------------+
| Insert/Delete at       | :math:`\Theta(1)`       | N/A               |
| beginning              |                         |                   |
+------------------------+-------------------------+-------------------+
| Insert/Delete at       | :math:`\Theta(n)`       | N/A               |
| end                    | Last element is unknown |                   |
|                        | :math:`\Theta(1)`       |                   |
|                        | Last element is unknown |                   |
+------------------------+-------------------------+-------------------+
| Insert/Delete in       | search time +           | N/A               |
| middle                 | :math:`\Theta(1)`       |                   |
+------------------------+-------------------------+-------------------+
| Wasted space           | :math:`\Theta(n)`       | 0                 |
+------------------------+-------------------------+-------------------+

As we can see lists are on the slower side but deleting is problematic in
arrays. In fixed arrays you can mark as deleted while in dynamic arrays
you need to shift entire content which is not efficient. Lists also waste
small amount of memory for pointer members which are needed to enforce the
structure. However, the flexibility of linked lists is a big win. This is not
to say that for all situations any of these are a sure-fire solution. It
depends on the problem whether arrays should be used or lists should be used.

Questions on Singly Linked Lists
================================
1. Implement a stack using singly linked list. (This is done in chapter of
   Stacks and Queues)
2. Implement a queue using singly linked list.  (This is done in chapter of
   Stacks and Queues)
3. Reverse a singly linked list iteratively and recursively.
4. Sort a linked list using bubble sort. (Look for sorting chapter or on
   internet for details on bubble sort)
5. Sort a linked list using quick sort.(Look for sorting chapter or on
   internet for details on quick sort).
6. Sort a linked list using merge sort.(Look for sorting chapter or on
   internet for details on merge sort).
7. Detect a loop in a singly linked list. (HINT: This can happen only at last node
   whose next pointer will end up pointing to one of previous nodes.)
8. Use singly linked lists to implement arbitrary-precision arithmetic library
   having basic functionality of addition, subtraction, multiplication and
   devision. Fist do it for integers then do it for floats.
9. Given two lists find their union and intersection.

Doubly Linked Lists
===================
Singly linked lists are pretty good but quite inflexible ass far as traversal
is concerned. You can traverse only in ofrward direction. We can improve this
by having another pointer to each node `prev` which will point to previous
node. Having this new `prev` pointer will allow us to traverse in both the
directions which is very nice to have functionality in certain situations.