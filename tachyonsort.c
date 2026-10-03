#include <stddef.h>

void tachyonsort(int *elements, size_t elements_length) {
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
  j = 1;

  while (i < elements_length) {
    if (elements[i] < elements[0]) {
      element = elements[i];
      j = i;

      while (j) {
        elements[j] = elements[j - 1];
        j--;
      }

      elements[0] = element;
    }

    i++;
  }

  i = 2;

  while (i < elements_length) {
    element = elements[i];
    j = i - 1;

    while (elements[j] > element) {
      elements[j + 1] = elements[j];
      j--;
    }

    elements[j + 1] = element;
    i++;
  }
}
