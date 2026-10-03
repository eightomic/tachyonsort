# TachyonSort

[![TachyonSort](tachyonsort.jpg)](https://github.com/eightomic/tachyonsort)

TachyonSort (as a proprietary, source-available product of [Eightomic](https://eightomic.com)) is the fast constrained unstable sort that has low-footprint implementation (efficient memory usage and small code size), no auxiliary array allocations, no division/modulus/multiplication operators, no recursion and ultra-fast speed (relative to the aforementioned constraints).

TachyonSort is implemented in C.

[tachyonsort.c](tachyonsort.c)

The `tachyonsort` function sorts (in unstable ascending integral order) an `elements` array of `elements_length` elements.

The integral type of each element in `elements` must match the integral type of `element`.
