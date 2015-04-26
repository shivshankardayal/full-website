Linked List Solutions
*********************
1. and 2. will be implemented in next chapter.

3. You can add these two lines to linked list implementation as prototype for
   implementation for iterative and recursive version.

   .. code-block:: c

      void reverse(ll**);
      void rreverse(ll**, ll*);

   The most important thing is to be able to think how we are going to do
   the implementation. Let us first take the case of non-recursive part. We
   can visualize the linked list as nodes attached with pointers. So all we
   have to do is make ``head`` point to the last node. We reverse the pointer.
   Now since the pointer is broken we need to maintain two pointers the current
   node and the next node, hence, we will need two extra pointers. Now as
   ``next`` pointer is broken we can keep assigning current pointer to it as
   shown in the diagram below:

   The equivalent code for the above can be written as:

   .. code-block:: c

        void reverse(ll** head)
        {
            ll *next = NULL;
            ll *current = NULL;

	    if(!(*head))
	        return;

            while((*head)->next != NULL)
            {
                next = (*head)->next;
                (*head)->next = current;
                current = *head;
                (*head) = next;
            }
            (*head)->next = current;
        }

   Notice that when we reach the end of node the pointer ``next`` will be in
   broken state and therefore from last pointer whose next would be pointing
   ``NULL`` must be made to point to current node as shown. The entire process
   is shown in the diagram below(we start with a list having three nodes 10, 20
   and 30. Again see the image form bottom to top.):

   .. tikz::
      :libs: calc

      \node at(0, 0) [rectangle, draw] (A) {20};
      \node at(2, 0) [rectangle, draw] (B) {30};
      \node at(-2, 0) [rectangle, draw] (C) {10};

      \draw [->, >=stealth] (C.east) -- (A.west);
      \draw [->, >=stealth] (A.east) -- (B.west);
      \draw [->, >=stealth] (B.east) -- ++(1, 0);
      \draw [<-, >=stealth] (C.west) -- ++(-1, 0);

      \node at ($(B.east)+(1.7, 0)$) {$NULL$};
      \node at ($(C.west)-(1.7, 0)$) {$*head$};
      \node at ($(C.east)+(.5, .2)$) {next};
      \node at ($(A.east)+(.5, .2)$) {next};
      \node at ($(B.east)+(.5, .2)$) {next};

      \node [label={[align=center, yshift=-1.3cm]Initially we have three nodes in
      linked list.}] (F)
      {};

   .. tikz::
      :libs: calc

      \node at(0, 0) [rectangle, draw] (A) {20};
      \node at(2, 0) [rectangle, draw] (B) {30};
      \node at(-2, 0) [rectangle, draw] (C) {10};
      \node at(0, 1.5) (D) {next};

      \draw [->, >=stealth] (C.east) -- (A.west);
      \draw [->, >=stealth] (A.east) -- (B.west);
      \draw [->, >=stealth] (B.east) -- ++(1, 0);
      \draw [<-, >=stealth] (C.west) -- ++(-1, 0);
      \draw [->, >=stealth] (D.south) -- (A.north);

      \node at ($(B.east)+(1.7, 0)$) {$NULL$};
      \node at ($(C.west)-(1.7, 0)$) {$*head$};
      \node at ($(C.east)+(.5, .2)$) {next};
      \node at ($(A.east)+(.5, .2)$) {next};
      \node at ($(B.east)+(.5, .2)$) {next};

      \node [label={[align=center, yshift=-1.3cm]In the while loop $next$
      variable points to $(*head)->next$.}] (F)
      {};

   .. figure:: data/sll_iterative_reverse.gif
      :align: center
      :alt: Iterative reversal of a singly linked list.

      Iterative reversal of a singly linked list.

   For recursive version first we need a condition to iterate to last node.
   Then if ``next`` of ``next`` is not ``NULL`` then we make that point to
   currrent node. The current node's next is useless for us and we make it
   ``NULL`` because the first node which will be last after reversal will have
   next pointing to ``NULL`` which is good for us. Now if ``next`` is NULL then
   we are at last node and let us make this ``head``. The entire operation can
   be visualized below:

   The code which does recursive iteration is given below:

   .. code-block:: c

        void rreverse(ll** head, ll* current)
        {

	    if(!(*head))
	        return;

            if(current->next != NULL)
            {
                rreverse(head, current->next);
            }
  
            if(current->next != NULL)
            {
                current->next->next = current;
                current->next = NULL;
            }
            else
                *head=current;
        }

   The call to rreverse must ensure that ``current`` is sent with the same value
   as head. Also, remember to update the menu and switch cases. As you can see
   if your linked list with less than two elements then code will not change
   anything. Let us see what happens if we call this function ``rreverse`` like
   ``rreverse(&head, head);``. For this example consider a list having four
   elements 10, 20 30 and 40.

   .. figure:: data/sll_rreverse.gif
      :align: center
      :alt: Recursive reversal of a singly linked list.

      Resursive reversal of a singly linked list.

4. This will be done after bubble sort is discussed.
5. This will be done after quick sort is discussed.
6. This will be done after merge sort is discussed.
7. There are several ways of doing this.

   1. You can use a hash table(we have not discussed hashing yet) to store the
      address of each node. If ``NULL`` is reached then you know  that there
      is no loop. However, if insertion in hash table fails because that
      address is already present then you know that there is a loop. This would
      require :math:`O(n)` extra space.

   2. The second method is rather crude and that requires modification to
      linked list structure. You can put a boolean flag which will mark if a
      node is visited. If a node is visited and you are revisiting again in
      traversal then there is a loop. Using boolean has a flaw that you can
      mark it only once and subsequently you cannot determine if the list has a
      loop. This can be overcome by making the boolean flag an unsigned integer
      which can support a large no. of iterations over the list. You can use
      boolean also and use it repeatedly if you make sure that you reset all
      the values if no loop is found. That would be another overhead of
      :math:`O(n)` in terms of time complexity and storage requirement is also
      increasing by :math:`O(n)`.

   3. There are two popular algorithms for cycle detection in any
      sequence. First is Floyd's algorithm and second is Brent's algorithm.
