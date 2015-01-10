Doubly Linked Lists and Circular Lists
**************************************
Doubly Linked Lists
===================
In a singly linked list we have a ``next`` pointer using which we can move
forward and iterate over the list. However, this severely restricts our
movement in one direction although we can traverse back using recursion or a
stack but that causes a loss in efficiency and is cumbersome. To avoid this
situation we can have a doubly linked list which has an extra pointer typically
called *previous poiner* with each node which points to the previous
element. Thus first or head node's previous pointer will point to ``NULL`` and
next pointer of tail will point to ``NULL`` as usual.

.. figure:: data/dll.png
   :align: center
   :alt: An example doubly linked list.

   An example doubly linked list.

