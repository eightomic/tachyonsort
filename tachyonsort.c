/*
  Copyright © 2026 Eightomic <eightomic@proton.me>

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in all
  copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
  SOFTWARE.
*/

#include <stddef.h>

void tachyonsort0(int *elements, size_t elements_length) {
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
      j &&
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
