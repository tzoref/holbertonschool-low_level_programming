# Green Tech Efficiency & Benchmarking Lab

## Measurement Methodology

The measurements in all three tasks used the C function `clock()` to record CPU time before and after computations. The difference was converted into seconds using `CLOCKS_PER_SEC`.

All programs were compiled using the required GCC flags and executed in the Holberton Ubuntu sandbox.

Task 0 ran three executions of a single computation involving 100 million loop iterations.

Task 1 ran three comparisons between the naive and single-pass algorithms. The average execution time for each algorithm was calculated, and the averages were compared.

Task 2 adapted Task 0's use of `clock()` to measure three phases separately: building, processing, and reducing a dataset, as well as the total execution time. The starting and ending measurements were placed around each phase.

## Observed Performance Differences

In Task 0, the execution times were 0.226519, 0.227136, and 0.235519 seconds. The times varied slightly between runs, although the computation was identical.

In Task 1, the average execution time across three runs was 2.784655 seconds for the naive algorithm and 0.000105667 seconds for the single-pass algorithm. The naive algorithm took approximately 26,353 times as long as the single-pass algorithm.

This difference was unexpectedly large. In computer science, *naive* refers to a straightforward approach that may be inefficient. In this case, the naive algorithm used nested loops, repeatedly examining elements of the array. The single-pass algorithm examined each element only once.

The measured difference is consistent with the distinction between quadratic complexity, O(n²), and linear complexity, O(n), described in Big-O notation.

In Task 2, building the dataset took 0.000307 seconds, processing took 0.000351 seconds, and reducing took 0.000135 seconds. The total measured execution time was 0.000799 seconds. Processing took the longest of the three phases in this recorded run.

## Relation Between Runtime and Energy Consumption

Running software requires electricity. As Dhiman (2025) explains, computation, memory, storage, and other computer resources all contribute to energy consumption. More efficient algorithms can reduce the amount of processing required.

Task 1 showed a very large difference in execution time between the two algorithms. This suggests that algorithm choice may have implications for energy efficiency. However, the experiment measured CPU time, not electricity consumption. The results cannot establish how much energy either algorithm used.

## Limitations of the Experiment

Tasks 0 and 1 used only three runs each. More repetitions would be needed to assess the variability of execution times reliably. Task 2 was measured only once, and its execution times were very short.

Another limitation is that the two algorithms in Task 1 returned different results: 625,025,000 and 25,000. The naive algorithm repeatedly counted even numbers, while the single-pass algorithm counted each even number once. Consequently, the comparison does not involve two equivalent computations.

The experiments also measured CPU time without measuring power consumption. Therefore, actual energy use and energy savings could not be calculated.

## Practical Engineering Takeaway

These experiments demonstrate the importance of measuring program performance rather than assuming that different implementations will take similar amounts of time.

The very large difference in Task 1 suggests that the structure of an algorithm can strongly affect execution time. Task 2 also shows how separate measurements can identify which phase of a program takes the most time.

However, performance measurements need careful interpretation. Repeated tests, equivalent computations, and appropriate measurement tools are important before drawing conclusions about efficiency or environmental impact.

## Reference

Dhiman, H. (2025, July 11). *The silent byte: Why your code's carbon footprint matters (and how to shrink it).* Medium.
