# CodeGolf-solutions-explained-C
Some solutions of [code.golf](https://code.golf) challenges in C with explaining comments.

##  Running
All code with a `main` function can be copied to code.golf and run live.

They should also compile with gcc (and clang):
```
gcc -o <file> <file>.c
```
or even:
```
gcc -Ofast -Wall -pedantic-errors -o <file> <file>.c
```
The files with api functions instead of `main` (the `api.c` files) can not run standalone.
They can be directly includes (as header only library) so that you can use the functions however you like.

## Files
Each CodeGolf 'hole' is a directory. This directory can contain the following files: (not every hole contains all files)
- `README.md`: The details of the hole as described in CodeGolf, sometimes with extra information.
- `explained.c`: The normal code, not optimized for performance, but readability. (This one is the most useful)
- `compact_explained.c`: Same as compact.c, but with comments en newlines
- `compact.c`: The most compact I could get, not very compact (I'm not good at writing very short code), but it may be useful.
- `api.c`: This contains functions instead of a single main program. This can be used if you need the functionality of the exercise.
