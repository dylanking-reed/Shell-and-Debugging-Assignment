a) In order to debug this code, I tried first to determine what it was doing. As I read 
   the code, I noticed that there was a lot of exponentiation-like things going on. I
   decided to write some tests for the code, in order to check what it would do with some
   inputs. I found out that it was in fact doing exponentiation. At that point, I renamed
   the function and its locals and argumentts to be more readable and descriptive. I had 
   not determined the bug at this point. I realized that none of my tests had tested
   the behavior of the function on negative numbers. This made me realize that there was
   a problem with the type signature of the function: it could not compute negative 
   exponents, as their results would be fractional. At this point, I changed the signature
   such that the argument `exp` was an `unsigned int`. I added tests to see if the 
   function worked properly with negative bases, and it did. I thought it unlikely that 
   the only bug would be the type issue, so I continued to try to find issues, adding and
   removing tests and stepping through the excution in GDB. Finally, I realized that the 
   behavior was wrong with `exp = 0`. I added a special case for that in the beginning of
   the function, as I'm under the impression that special-casing 0 is necessary in
   an exponentiation algorithm. After adding this, my tests passed, and I considered the 
   bug to have been found & fixed.

b) In order to debug this code, I read the code with an eye out for obvious errors and 
   tried to determine what it was doing. As the code reads three values from `argv`, I
   assumed the program expected three arguments. When I saw `malloc`s, I looked to the 
   bottom of the function for a `free()`s, and when I didn't find them, concluded that the 
   program had memory leaks. I also noticed that `z` was initialized but never used, and 
   that `m` was only used to initalize `z`. I also noticed that `argc` was typed as a 
   `char*`! I determined that this program was supposed to create a `point2d` from 
   command-line arguments. I concluded that this program was riddled with bugs, and began 
   work fixing them.
