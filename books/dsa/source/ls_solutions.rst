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
      linked list.}] (F) {};

   .. tikz::
      :libs: calc

      \node at(0, 0) [rectangle, draw] (A) {20};
      \node at(2, 0) [rectangle, draw] (B) {30};
      \node at(-2, 0) [rectangle, draw] (C) {10};
      \node at(0, 1.5) (D) {$next$};

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
      variable points to $(*head)->next$.}] (F) {};

   .. tikz::
      :libs: calc

      \node at(0, 0) [rectangle, draw] (A) {20};
      \node at(2, 0) [rectangle, draw] (B) {30};
      \node at(-2, 0) [rectangle, draw] (C) {10};
      \node at(0, 1.5) (D) {$next$};

      \draw [->, >=stealth] (C.east) -- ($(A.west)!.5!(C.east)$) --
      ($(A.west)!.5!(C.east)$) -- ++(0, -.5);
      \draw [->, >=stealth] (A.east) -- (B.west);
      \draw [->, >=stealth] (B.east) -- ++(1, 0);
      \draw [<-, >=stealth] (C.west) -- ++(-1, 0);
      \draw [->, >=stealth] (D.south) -- (A.north);

      \node at ($(B.east)+(1.7, 0)$) {$NULL$};
      \node at ($(C.west)-(1.7, 0)$) {$*head$};
      \node at ($(C.east)+(.5, .2)$) {next};
      \node at ($(A.east)+(.5, .2)$) {next};
      \node at ($(B.east)+(.5, .2)$) {next};

      \node at ($(A.west)!.5!(C.east)+(0, -.8)$) {$NULL$};

      \node [label={[align=center, yshift=-1.8cm]$(*head)->next$ is assigned
      $current$ which is $NULL$.}] (F) {};

   .. tikz::
      :libs: calc

      \node at(0, 0) [rectangle, draw] (A) {20};
      \node at(2, 0) [rectangle, draw] (B) {30};
      \node at(-2, 0) [rectangle, draw] (C) {10};
      \node at(0, 1.5) (D) {$next$};
      \node at(-2, 1.5) (E) {$current$};

      \draw [->, >=stealth] (C.east) -- ($(A.west)!.5!(C.east)$) --
      ($(A.west)!.5!(C.east)$) -- ++(0, -.5);
      \draw [->, >=stealth] (A.east) -- (B.west);
      \draw [->, >=stealth] (B.east) -- ++(1, 0);
      \draw [<-, >=stealth] (C.west) -- ++(-1, 0);
      \draw [->, >=stealth] (D.south) -- (A.north);
      \draw [->, >=stealth] (E.south) -- (C.north);

      \node at ($(B.east)+(1.7, 0)$) {$NULL$};
      \node at ($(C.west)-(1.7, 0)$) {$*head$};
      \node at ($(C.east)+(.5, .2)$) {next};
      \node at ($(A.east)+(.5, .2)$) {next};
      \node at ($(B.east)+(.5, .2)$) {next};

      \node at ($(A.west)!.5!(C.east)+(0, -.8)$) {$NULL$};

      \node [label={[align=center, yshift=-1.8cm]Now $current$ points to
      $*head$.}] (F) {};

   .. tikz::
      :libs: calc

      \node at(0, 0) [rectangle, draw] (A) {20};
      \node at(2, 0) [rectangle, draw] (B) {30};
      \node at(-2, 0) [rectangle, draw] (C) {10};
      \node at(0, 1.5) (D) {$next$};
      \node at(-2, 1.5) (E) {$current$};

      \draw [->, >=stealth] (C.east) -- ($(A.west)!.5!(C.east)$) --
      ($(A.west)!.5!(C.east)$) -- ++(0, -.5);
      \draw [->, >=stealth] (A.east) -- (B.west);
      \draw [->, >=stealth] (B.east) -- ++(1, 0);
      \draw [->, >=stealth] (D.south) -- (A.north);
      \draw [->, >=stealth] (E.south) -- (C.north);

      \node at ($(B.east)+(1.7, 0)$) {$NULL$};
      \node at ($(A.north west)+(-.8, .7)$) {$*head$};
      \node at ($(C.east)+(.5, .2)$) {next};
      \node at ($(A.east)+(.5, .2)$) {next};
      \node at ($(B.east)+(.5, .2)$) {next};

      \node at ($(A.west)!.5!(C.east)+(0, -.8)$) {$NULL$};
      \draw [<-, >=stealth] (A.north west) -- ++(-.5, +.5);

      \node [label={[align=center, yshift=-1.8cm]$*head$ moves to $next$.}] (F)
      {};

   .. tikz::
      :libs: calc

      \node at(0, 0) [rectangle, draw] (A) {20};
      \node at(2, 0) [rectangle, draw] (B) {30};
      \node at(-2, 0) [rectangle, draw] (C) {10};
      \node at(2, 1.5) (D) {$next$};
      \node at(-2, 1.5) (E) {$current$};

      \draw [->, >=stealth] (C.east) -- ($(A.west)!.5!(C.east)$) --
      ($(A.west)!.5!(C.east)$) -- ++(0, -.5);
      \draw [->, >=stealth] (A.east) -- (B.west);
      \draw [->, >=stealth] (B.east) -- ++(1, 0);
      \draw [->, >=stealth] (D.south) -- (B.north);
      \draw [->, >=stealth] (E.south) -- (C.north);

      \node at ($(B.east)+(1.7, 0)$) {$NULL$};
      \node at ($(A.north west)+(-.8, .7)$) {$*head$};
      \node at ($(C.east)+(.5, .2)$) {next};
      \node at ($(A.east)+(.5, .2)$) {next};
      \node at ($(B.east)+(.5, .2)$) {next};

      \node at ($(A.west)!.5!(C.east)+(0, -.8)$) {$NULL$};
      \draw [<-, >=stealth] (A.north west) -- ++(-.5, +.5);

      \node [label={[align=center, yshift=-1.8cm]In the next iteration of loop
      $next$ moves to $(*head)->next$.}] (F) {};

   .. tikz::
      :libs: calc

      \node at(0, 0) [rectangle, draw] (A) {20};
      \node at(2, 0) [rectangle, draw] (B) {30};
      \node at(-2, 0) [rectangle, draw] (C) {10};
      \node at(2, 1.5) (D) {$next$};
      \node at(-2, 1.5) (E) {$current$};

      \draw [->, >=stealth] (C.west) -- ++(-.5, 0) -- ++(0, -.5);
      \draw [->, >=stealth] (A.west) -- (C.east);
      \draw [->, >=stealth] (B.east) -- ++(1, 0);
      \draw [->, >=stealth] (D.south) -- (B.north);
      \draw [->, >=stealth] (E.south) -- (C.north);

      \node at ($(B.east)+(1.7, 0)$) {$NULL$};
      \node at ($(A.north west)+(-.8, .7)$) {$*head$};
      \node at ($(C.west)+(-.5, .2)$) {next};
      \node at ($(A.west)+(-.5, .2)$) {next};
      \node at ($(B.east)+(.5, .2)$) {next};

      \node at ($(C.west)+(-.5, -.8)$) {$NULL$};
      \draw [<-, >=stealth] (A.north west) -- ++(-.5, +.5);

      \node [label={[align=center, yshift=-1.8cm]$(*head)->next$ is assigned
      $current$.}] (F) {};

   .. tikz::
      :libs: calc

      \node at(0, 0) [rectangle, draw] (A) {20};
      \node at(2, 0) [rectangle, draw] (B) {30};
      \node at(-2, 0) [rectangle, draw] (C) {10};
      \node at(2, 1.5) (D) {$next$};
      \node at(0, 1.5) (E) {$current$};

      \draw [->, >=stealth] (C.west) -- ++(-.5, 0) -- ++(0, -.5);
      \draw [->, >=stealth] (A.west) -- (C.east);
      \draw [->, >=stealth] (B.east) -- ++(1, 0);
      \draw [->, >=stealth] (D.south) -- (B.north);
      \draw [->, >=stealth] (E.south) -- (A.north);

      \node at ($(B.east)+(1.7, 0)$) {$NULL$};
      \node at ($(A.north west)+(-.8, .7)$) {$*head$};
      \node at ($(C.west)+(-.5, .2)$) {next};
      \node at ($(A.west)+(-.5, .2)$) {next};
      \node at ($(B.east)+(.5, .2)$) {next};

      \node at ($(C.west)+(-.5, -.8)$) {$NULL$};
      \draw [<-, >=stealth] (A.north west) -- ++(-.5, +.5);

      \node [label={[align=center, yshift=-1.8cm]$current$ is assigned
      $*head$.}] (F) {};

   .. tikz::
      :libs: calc

      \node at(0, 0) [rectangle, draw] (A) {20};
      \node at(2, 0) [rectangle, draw] (B) {30};
      \node at(-2, 0) [rectangle, draw] (C) {10};
      \node at(2, 1.5) (D) {$next$};
      \node at(0, 1.5) (E) {$current$};

      \draw [->, >=stealth] (C.west) -- ++(-.5, 0) -- ++(0, -.5);
      \draw [->, >=stealth] (A.west) -- (C.east);
      \draw [->, >=stealth] (B.east) -- ++(1, 0);
      \draw [->, >=stealth] (D.south) -- (B.north);
      \draw [->, >=stealth] (E.south) -- (A.north);

      \node at ($(B.east)+(1.7, 0)$) {$NULL$};
      \node at ($(B.north west)+(-.8, .7)$) {$*head$};
      \node at ($(C.west)+(-.5, .2)$) {next};
      \node at ($(A.west)+(-.5, .2)$) {next};
      \node at ($(B.east)+(.5, .2)$) {next};

      \node at ($(C.west)+(-.5, -.8)$) {$NULL$};
      \draw [<-, >=stealth] (B.north west) -- ++(-.5, +.5);

      \node [label={[align=center, yshift=-1.8cm]$*head$ is assigned
      $next$.}] (F) {};

   .. tikz:: Iterative reversal of a singly linked list.
      :libs: calc

      \node at(0, 0) [rectangle, draw] (A) {20};
      \node at(2, 0) [rectangle, draw] (B) {30};
      \node at(-2, 0) [rectangle, draw] (C) {10};
      \node at(2, 1.5) (D) {$next$};
      \node at(0, 1.5) (E) {$current$};

      \draw [->, >=stealth] (C.west) -- ++(-.5, 0) -- ++(0, -.5);
      \draw [->, >=stealth] (A.west) -- (C.east);
      \draw [->, >=stealth] (B.west) -- (A.east);
      \draw [->, >=stealth] (D.south) -- (B.north);
      \draw [->, >=stealth] (E.south) -- (A.north);

      \node at ($(B.east)+(1.7, 0)$) {$NULL$};
      \node at ($(B.north west)+(-.8, .7)$) {$*head$};
      \node at ($(C.west)+(-.5, .2)$) {next};
      \node at ($(A.west)+(-.5, .2)$) {next};
      \node at ($(B.west)+(-.5, .2)$) {next};

      \node at ($(C.west)+(-.5, -.8)$) {$NULL$};
      \draw [<-, >=stealth] (B.north west) -- ++(-.5, +.5);

      \node [label={[align=center, yshift=-2.3cm]$(*head)->netx$ is NULL.
      Loop terminates.\\$(*head)->next = current$.}] (F) {};

      

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

   .. tikz::
      :libs: calc

      \node at (0, 0) [rectangle, draw] (A) {20};
      \node at (2, 0) [rectangle, draw] (B) {30};
      \node at (4, 0) [rectangle, draw] (C) {40};
      \node at (-2, 0) [rectangle, draw] (D) {10};
      \node at(-2, 1.5) (E) {$current$};

      \draw [<-, >=stealth] (D.west) -- ++(-1, 0);
      \draw [->, >=stealth] (C.east) -- ++(1, 0);
      \draw [->, >=stealth] (D.east) -- (A.west);
      \draw [->, >=stealth] (A.east) -- (B.west);
      \draw [->, >=stealth] (B.east) -- (C.west);
      \draw [->, >=stealth] (E.south) -- (D.north);

      \node at ($(C.east)+(1.7, 0)$) {$NULL$};
      \node at ($(D.west)-(1.7, 0)$) {$*head$};
      \node at ($(D.east)+(.5, .2)$) {next};
      \node at ($(A.east)+(.5, .2)$) {next};
      \node at ($(B.east)+(.5, .2)$) {next};
      \node at ($(C.east)+(.5, .2)$) {next};

      \node [label={[align=center, yshift=-1.8cm]$rreverse$ is called with
      $\&head$ and $head$.}] (F) {};

   .. tikz::
      :libs: calc

      \node at (0, 0) [rectangle, draw] (A) {20};
      \node at (2, 0) [rectangle, draw] (B) {30};
      \node at (4, 0) [rectangle, draw] (C) {40};
      \node at (-2, 0) [rectangle, draw] (D) {10};
      \node at(0, 1.5) (E) {$current$};

      \draw [<-, >=stealth] (D.west) -- ++(-1, 0);
      \draw [->, >=stealth] (C.east) -- ++(1, 0);
      \draw [->, >=stealth] (D.east) -- (A.west);
      \draw [->, >=stealth] (A.east) -- (B.west);
      \draw [->, >=stealth] (B.east) -- (C.west);
      \draw [->, >=stealth] (E.south) -- (A.north);

      \node at ($(C.east)+(1.7, 0)$) {$NULL$};
      \node at ($(D.west)-(1.7, 0)$) {$*head$};
      \node at ($(D.east)+(.5, .2)$) {next};
      \node at ($(A.east)+(.5, .2)$) {next};
      \node at ($(B.east)+(.5, .2)$) {next};
      \node at ($(C.east)+(.5, .2)$) {next};

      \node [label={[align=center, yshift=-1.1cm]$rreverse$ is called with
      $current$ moving to next node.}] (F) {};

   .. tikz::
      :libs: calc

      \node at (0, 0) [rectangle, draw] (A) {20};
      \node at (2, 0) [rectangle, draw] (B) {30};
      \node at (4, 0) [rectangle, draw] (C) {40};
      \node at (-2, 0) [rectangle, draw] (D) {10};
      \node at(2, 1.5) (E) {$current$};

      \draw [<-, >=stealth] (D.west) -- ++(-1, 0);
      \draw [->, >=stealth] (C.east) -- ++(1, 0);
      \draw [->, >=stealth] (D.east) -- (A.west);
      \draw [->, >=stealth] (A.east) -- (B.west);
      \draw [->, >=stealth] (B.east) -- (C.west);
      \draw [->, >=stealth] (E.south) -- (B.north);

      \node at ($(C.east)+(1.7, 0)$) {$NULL$};
      \node at ($(D.west)-(1.7, 0)$) {$*head$};
      \node at ($(D.east)+(.5, .2)$) {next};
      \node at ($(A.east)+(.5, .2)$) {next};
      \node at ($(B.east)+(.5, .2)$) {next};
      \node at ($(C.east)+(.5, .2)$) {next};

      \node [label={[align=center, yshift=-1.1cm]$rreverse$ is called with
      $current$ moving to next node.}] (F) {};

   .. tikz::
      :libs: calc

      \node at (0, 0) [rectangle, draw] (A) {20};
      \node at (2, 0) [rectangle, draw] (B) {30};
      \node at (4, 0) [rectangle, draw] (C) {40};
      \node at (-2, 0) [rectangle, draw] (D) {10};
      \node at(4, 1.5) (E) {$current$};

      \draw [<-, >=stealth] (C.north east) -- ++(.5, .5);
      \draw [->, >=stealth] (C.east) -- ++(1, 0);
      \draw [->, >=stealth] (D.east) -- (A.west);
      \draw [->, >=stealth] (A.east) -- (B.west);
      \draw [->, >=stealth] (B.east) -- (C.west);
      \draw [->, >=stealth] (E.south) -- (C.north);

      \node at ($(C.east)+(1.7, 0)$) {$NULL$};
      \node at ($(C.north east)+(1.1, .7)$) {$*head$};
      \node at ($(D.east)+(.5, .2)$) {next};
      \node at ($(A.east)+(.5, .2)$) {next};
      \node at ($(B.east)+(.5, .2)$) {next};
      \node at ($(C.east)+(.5, .2)$) {next};

      \node [label={[align=center, yshift=-2.3cm]$rreverse$ is called with
      $current$ moving to next node.\\$current->next$ is $NULL$ so recursion
      stops.\\$*head$ is assigned $current$. Code falls in else as stack
      unwinds.}] (F) {};

   .. tikz::
      :libs: calc

      \node at (0, 0) [rectangle, draw] (A) {20};
      \node at (2, 0) [rectangle, draw] (B) {30};
      \node at (4, 0) [rectangle, draw] (C) {40};
      \node at (-2, 0) [rectangle, draw] (D) {10};
      \node at(2, 1.5) (E) {$current$};

      \draw [<-, >=stealth] (C.north east) -- ++(.5, .5);
      \draw [->, >=stealth] (C.east) -- ++(1, 0);
      \draw [->, >=stealth] (D.east) -- (A.west);
      \draw [->, >=stealth] (A.east) -- (B.west);
      \draw [->, >=stealth] (B.east) -- (C.west);
      \draw [->, >=stealth] (E.south) -- (B.north);

      \node at ($(C.east)+(1.7, 0)$) {$NULL$};
      \node at ($(C.north east)+(1.1, .7)$) {$*head$};
      \node at ($(D.east)+(.5, .2)$) {next};
      \node at ($(A.east)+(.5, .2)$) {next};
      \node at ($(B.east)+(.5, .2)$) {next};
      \node at ($(C.east)+(.5, .2)$) {next};

      \node [label={[align=center, yshift=-1.1cm]$rreverse$ returns. $current$
      is now at previous value.}] (F) {};

   .. tikz::
      :libs: calc

      \node at (0, 0) [rectangle, draw] (A) {20};
      \node at (2, 0) [rectangle, draw] (B) {30};
      \node at (4, 0) [rectangle, draw] (C) {40};
      \node at (-2, 0) [rectangle, draw] (D) {10};
      \node at(2, 1.5) (E) {$current$};

      \draw [<-, >=stealth] (C.north east) -- ++(.5, .5);
      \draw [->, >=stealth] (D.east) -- (A.west);
      \draw [->, >=stealth] (A.east) -- (B.west);
      \draw [->, >=stealth] (B.east) -- ($(B.east)!.5!(C.west)$) -- ++(0, -.5);
      \draw [->, >=stealth] (E.south) -- (B.north);
      \draw [->, >=stealth] (C.north west) -- ($(C.north west)+(-.3, +.5)$) --
      ($(B.north east)+(.3, +.5)$) -- (B.north east);

      \node at ($(C.north east)+(1.1, .7)$) {$*head$};
      \node at ($(D.east)+(.5, .2)$) {next};
      \node at ($(A.east)+(.5, .2)$) {next};
      \node at ($(B.east)+(.5, .2)$) {next};
      \node at ($(C.north west)+(+.3, .5)$) {next};

      \node [label={[align=center, yshift=-2.3cm]Now second $if$ is tested
      which is $true$.\\$current->next$ is $NULL$. $current->next->next$ is
      assigned $current$.\\$current->next$ is assigned $NULL$.}] (F) {};

   .. tikz:: Resursive reversal of a singly linked list.
      :libs: calc

      \node at (0, 0) [rectangle, draw] (A) {20};
      \node at (2, 0) [rectangle, draw] (B) {30};
      \node at (4, 0) [rectangle, draw] (C) {40};
      \node at (-2, 0) [rectangle, draw] (D) {10};
      \node at(0, 1.5) (E) {$current$};

      \draw [<-, >=stealth] (C.north east) -- ++(.5, .5);
      \draw [->, >=stealth] (D.east) -- (A.west);
      \draw [->, >=stealth] (A.east) -- (B.west);
      \draw [->, >=stealth] (B.east) -- ($(B.east)!.5!(C.west)$) -- ++(0, -.5);
      \draw [->, >=stealth] (E.south) -- (A.north);
      \draw [->, >=stealth] (C.north west) -- ($(C.north west)+(-.3, +.5)$) --
      ($(B.north east)+(.3, +.5)$) -- (B.north east);

      \node at ($(C.north east)+(1.1, .7)$) {$*head$};
      \node at ($(D.east)+(.5, .2)$) {next};
      \node at ($(A.east)+(.5, .2)$) {next};
      \node at ($(B.east)+(.5, .2)$) {next};
      \node at ($(C.north west)+(+.3, .5)$) {next};

      \node [label={[align=center, yshift=-2.2cm]$rreverse$ returns. $current$
      returns to previous value.\\The process continues and linked list is
      reversed.}] (F) {};


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
      sequence. First is Floyd's algorithm and second is Brent's algorithm. We
      will study these two in their full glory later. For now, we will
      concentrate on Floyd's algorithm in context of finding loop in a linked
      list. We will not concern ourselves with rigorous mathematical proof of
      this method.

      Floyd's algorithm is based on a simple technique that we need two
      iterators(read pointers) over our set(linked list). One moves two
      elements while the other moves one element at a time and eventually they
      will meet i.e. pointers will become equal and that will prove that our
      set(linked list) has a loop. The implementation is very simple and in
      context with our linked list it is implemented as a function which you
      can execute in conjunction to find if there is a loop in question.

      .. code-block:: c

         int floyd_detect_loop_algorithm(ll *head)
         {
           ll *slow = head, *fast = head;
 
           while(slow && fast && fast->next )
           {
             slow = slow->next;
             fast  = fast->next->next;
             if (slow == fast)
             {
               printf("Loop detected.\n");
               return 1;
             }
           }

           return 0;
         }
 
      Let us say :math:`\lambda` is the length of loop and :math:`\mu` is the
      index of first element where loop starts then the time complexity of this
      algorithm is :math:`O(\lambda + \mu)` and as you can see we need storage
      only for two pointers the space complexity would be :math:`\Theta(1)`.
