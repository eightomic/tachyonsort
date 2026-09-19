#include <stddef.h>

void tachyonsort_small(int *elements, size_t elements_length) {
  int element;
  size_t gap = elements_length;
  size_t i;
  size_t j;

  while (gap > 15) {
    gap = (gap >> 3) + (gap >> 5);
    i = gap;

    while (i < elements_length) {
      element = elements[i];
      j = i;

      while (
        j >= gap &&
        elements[j - gap] > element
      ) {
        elements[j] = elements[j - gap];
        j -= gap;
      }

      elements[j] = element;
      i++;
    }
  }

  i = 1;
  gap = 0;

  while (i < elements_length) {
    element = elements[i];
    j = i;

    while (
      j > 0 &&
      elements[gap] > element
    ) {
      elements[j] = elements[gap];
      j = gap;
      gap--;
    }

    elements[j] = element;
    gap = i;
    i++;
  }
}
