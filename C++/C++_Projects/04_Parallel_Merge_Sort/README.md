# Parallel Merge Sort Implementation

## Overview

This project presents an implementation of the Merge Sort algorithm utilizing parallel processing in C++. By leveraging multithreading, the sorting process is significantly accelerated, especially for large datasets. The implementation demonstrates the use of thread pools and efficient synchronization mechanisms to achieve optimal performance.

## Features

- **Parallel Processing**: Utilizes multiple CPU threads to perform sorting concurrently, reducing execution time.
- **Thread Pool**: Manages a pool of threads to handle sorting tasks efficiently.
- **Performance Benchmarking**: Compares execution times between standard Merge Sort and Parallel Merge Sort, highlighting the performance gains achieved through parallelism.

## Implementation Details

The implementation focuses on enhancing the traditional Merge Sort algorithm by introducing parallelism. The key components include:

- **Recursive Division**: The dataset is recursively divided into smaller subarrays until a threshold is reached.
- **Parallel Sorting**: Subarrays are sorted in parallel using multiple threads.
- **Merging**: Sorted subarrays are merged to produce the final sorted array.

### Thread Pool

A thread pool is employed to manage the creation and synchronization of threads efficiently. This approach minimizes the overhead associated with frequent thread creation and destruction, leading to better resource utilization and performance.

## Performance Comparison

Benchmark tests were conducted to compare the execution times of the standard Merge Sort and the Parallel Merge Sort implementations. On a MacBook M1 Pro, the standard Merge Sort executed in approximately 25 seconds, while the Parallel Merge Sort completed the same task in about 1 second, demonstrating a significant performance improvement.

## Getting Started

### Prerequisites

- **C++ Compiler**: Ensure you have a C++ compiler that supports C++11 or later.
- **CMake**: Used for building the project.
