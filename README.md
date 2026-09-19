# TachyonSort

[![TachyonSort](tachyonsort.jpg)](https://github.com/eightomic/tachyonsort)

## Table of Contents

- [Introduction](README.md?tab=readme-ov-file#introduction)
- [Author](README.md?tab=readme-ov-file#author)
- [License](README.md?tab=readme-ov-file#license)
- [Implementation](README.md?tab=readme-ov-file#implementation)

## Introduction

TachyonSort is the efficient unstable sorting algorithm that has low-footprint implementation (efficient memory usage and small code size), no division/modulus/multiplication operators and ultra-fast speed.

## Author

TachyonSort was created by William Stafford Parsons as a product of [Eightomic](https://eightomic.com).

## License

TachyonSort is licensed with [BSD-3-Clause](LICENSE).

## Implementation

Each mention of TachyonSort refers to each of the 3 following variants individually (`tachyonsort_small`, `tachyonsort_medium` and `tachyonsort_large`) implemented in C.

[tachyonsort.c](tachyonsort.c)

The `tachyonsort_small` function sorts (in unstable ascending integral order) an `elements` array of `elements_length` elements.

The integral type of each element in `elements` must match the integral type of `element`.

`tachyonsort_medium` and `tachyonsort_large` aren't ready to publish yet.
