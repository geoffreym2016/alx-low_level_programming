       Structures, typedef
   TASKS

0. Poppy 
Define a new type struct dog with the following elements:

    name, type = char *
    age, type = float
    owner, type = char *


1. A dog is the only thing on earth that loves you more than you love yourself
mandatory

Write a function that initialize a variable of type struct dog

    Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);

2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad 

 3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read 
Define a new type dog_t as a new name for the type struct dog.

julien@ubuntu:~/0x0d. structures, typedef$ cat 3-main.c
#include <stdio.h>
#include "dog.h"

4. A door is what a dog is perpetually on the wrong side of 
Write a function that creates a new dog.

    Prototype: dog_t *new_dog(char *name, float age, char *owner);
    You have to store a copy of name and owner
    Return NULL if the function fails


5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg 
Write a function that frees dogs.

    Prototype: void free_dog(dog_t *d);

julien@ubuntu:~/0x0d. structures, typedef$ cat 5-main.c
#include <stdio.h>
#include "dog.h"