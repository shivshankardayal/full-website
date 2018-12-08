Introduction to GDSL and GNOME Library, Multi-Threading and Design Patterns
***************************************************************************
I am no longer going to implement my own code for data structure because what I implement is neither multi-thread safe nor
reentrant. So I am introducing GDSL which is generic data structure library and can be found at https://github.com/sjchao/
Also, later I will explain GNOME developer library which you can find at https://developer.gnome.org/ particularly
https://developer.gnome.org/glib/stable/ The advantage of using these
libraries is that you get to see real-world, high-quality code and far more data structures than I can muster alone. Also, you will
learn important concepts like multi-threading and re-entrancy, which are quite important in real-world code. Since, standard
threading library of C is still not implemented and C++ maps to POSIX threads I am going to spend next few chapters on POSIX
multi-threaded programming. You will also learn a bit about object-oriented programming using C when we use `GNOME` library.

There are two excellent books on this subject. Programming with POSIX(R) Threads by David R. Butenhof, ISBN #0201633922 and Pthreads
Programming A POSIX Standard for Better Multiprocessing by Bradford Nichols, Dick Buttlar, Jacqueline Proulx Farrellm ISBN
#1-56592-115-1. You can read either or what I am going to tell you here in this book. I will leave the choice to you. Multi-thread
safety is very important and MT(multi-threading) is very important. MT is used in almost all server side programs. You can even
implement MT without causing any deadlocks or race conditions if you design like Seastar https://github.com/scylladb/seastar which
implements Reactor design pattern with one thread each binding to a CPU core and communicating by inter-thread message passing.

I am also going to show you some design patters in C. I will show you important patterns as all patterns are pretty hard to
implement in C easily.

To start with I am going to show relevant code to implement a linked list first in next chapter of this book from GDSL. Since it is
very well documented I am not going to document it as well just augment what is out there.
