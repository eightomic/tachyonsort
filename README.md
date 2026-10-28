# TachyonSort

[![TachyonSort](tachyonsort.jpg)](https://github.com/eightomic/tachyonsort)

TachyonSort (as an [open-source](LICENSE) product of [Eightomic](https://eightomic.github.io)) is the fast efficient embedded sort that has low-footprint implementation (efficient memory usage and small code size), no division/modulus/multiplication operators, no auxiliary array declarations, no recursion and ultra-fast speed (relative to the aforementioned constraints).

Each mention of TachyonSort refers to both of the following variants individually (`tachyonsort_stable` and `tachyonsort_unstable`) implemented in C.

The integral type of each element in `elements` must match the integral type of `element`.

[tachyonsort.c](tachyonsort.c)

Each of the following speed benchmark results (with `gcc` from an AMD A4-9120C) log the fastest process execution speed (in milliseconds) among several repetitions of sorting varying rounds of varying `elements_length` pseudorandom `elements` elements in a blocking loop.

The `tachyonsort_stable` function sorts (in stable ascending integral order) an `elements` array of `elements_length` elements.

```
elements_length   Rounds   Elapsed                Elapsed
                           (tachyonsort_stable)   (optimized_insertion_sort)

5                 1m       155ms                  156ms
10                500k     208ms                  212ms
50                100k     394ms                  471ms
100               10k      133ms                  155ms
500               1k       241ms                  368ms
1k                100      90ms                   134ms
5k                5        105ms                  163ms
10k               1        85ms                   130ms
25k               1        560ms                  824ms
```

The `tachyonsort_unstable` function sorts (in unstable ascending integral order) an `elements` array of `elements_length` elements.

```
elements_length   Rounds   Elapsed                  Elapsed
                           (tachyonsort_unstable)   (iterative_heap_sort)

5                 1m       158ms                    303ms
10                500k     209ms                    467ms
50                100k     385ms                    796ms
100               10k      98ms                     179ms
500               10k      867ms                    1165ms
1k                1k       165ms                    257ms
5k                1k       1125ms                   1592ms
10k               100      238ms                    345ms
100k              10       356ms                    440ms
1m                1        557ms                    725ms
```

Furthermore, `tachyonsort_unstable` was faster than each `shell_sort` variant (`ciura`, `hibbard`, `incerpi`, `knuth`, `lee`, `papernov_and_stasevich`, `pratt`, `sedgewick_1982`, `sedgewick_1986`, `shell` and `tokuda`).
