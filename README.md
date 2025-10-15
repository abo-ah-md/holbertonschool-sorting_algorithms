# holbertonschool-sorting_algorithms

Implementation of sorting algorithms in C and analysis of their Big O notation.

## Background Context

This project is meant to be done by groups of two students. Each group of two should pair program for at least the mandatory part.

## Resources

- Sorting algorithm
- Big O notation
- Sorting algorithms animations
- "15 sorting algorithms in 6 minutes" (fun visualization, optional)

## Learning Objectives

By the end of this project, you should be able to explain:

- At least four different sorting algorithms
- What is the Big O notation, and how to evaluate the time complexity of an algorithm
- How to select the best sorting algorithm for a given input
- What is a stable sorting algorithm

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, options: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- A `README.md` file, at the root of the folder of the project, is mandatory
- Your code should use Betty style (`betty-style.pl` and `betty-doc.pl`)
- No global variables
- No more than 5 functions per file
- Do not use the standard library (no `printf`, `puts`, etc.)
- The prototypes of all your functions should be included in your header file called `sort.h`
- All header files should be include guarded
- A list/array does not need to be sorted if its size is less than 2

## Data Structure and Print Functions

For doubly linked lists:
```
/**

struct listint_s - Doubly linked list node

@n: Integer stored in the node

@prev: Pointer to the previous element of the list

@next: Pointer to the next element of the list
*/
typedef struct listint_s
{
const int n;
struct listint_s *prev;
struct listint_s *next;
} listint_t;
```

Print functions provided:

```
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
```
Declare their prototypes in your `sort.h` header file.

## Tasks

### 0. Bubble sort

Write `void bubble_sort(int *array, size_t size);`
- Print the array after each time you swap two elements.
- Time complexities (file: `0-O`):
  - Best case: O(n)
  - Average case: O(n^2)
  - Worst case: O(n^2)

### 1. Insertion sort

Write `void insertion_sort_list(listint_t **list);`
- Do not modify the integer n of a node. You must swap the nodes themselves.
- Print the list after each time you swap two elements.
- Time complexities (file: `1-O`):
  - Best case: O(n)
  - Average case: O(n^2)
  - Worst case: O(n^2)

### 2. Selection sort

Write `void selection_sort(int *array, size_t size);`
- Print the array after each time you swap two elements.
- Time complexities (file: `2-O`):
  - Best case: O(n^2)
  - Average case: O(n^2)
  - Worst case: O(n^2)

### 3. Quick sort

Write `void quick_sort(int *array, size_t size);`
- Implement the Lomuto partition scheme (pivot is the last element of the partition).
- Print the array after each time you swap two elements.
- Time complexities (file: `3-O`):
  - Best case: O(nlog(n))
  - Average case: O(nlog(n))
  - Worst case: O(n^2)

## Testing

- Main files for testing are provided.
- Use [Random.org](https://random.org) to generate large sets of random integers.

## Contributors

- [@abo-ah-md (Abdullah Alshebel)](https://github.com/abo-ah-md)
- [@ismailRowaihy (Ismail Rowaihy)](https://github.com/ismailRowaihy)

## License

[Apache-2.0](LICENSE)

