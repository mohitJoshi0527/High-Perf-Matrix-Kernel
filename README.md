High-Performance Linear Algebra Accelerator

A high-performance C++ library for dense matrix operations, designed with architecture-aware optimizations to maximize CPU utilization on modern x86 processors.

This project focuses on memory-efficient computation and instruction-level parallelism, achieving up to 12× speedup over naive implementations through careful optimization of cache usage, SIMD execution, and multi-threading.

Key Features

Cache-Aware Matrix Kernels

Implements cache tiling (blocking) to improve L1/L2 cache locality and reduce memory latency.

Optimized loop ordering to minimize cache misses and maximize data reuse.

SIMD Vectorization

Uses AVX intrinsics for data-level parallelism, enabling efficient vectorized floating-point operations.

Aligns data structures for optimal SIMD load/store performance.

Thread-Level Parallelism

Leverages OpenMP to scale computation across multiple CPU cores.

Designed to minimize synchronization overhead and false sharing.

Performance Profiling & Analysis

Benchmarked and validated using Linux perf tools.

Analyzes cache misses, IPC, and execution hotspots to guide optimizations.

Goals

Bridge the gap between naive numerical code and production-grade high-performance kernels.

Build a strong understanding of CPU microarchitecture, cache hierarchies, and vector execution.

Serve as a foundation for future work in HPC libraries, compiler optimizations, and CPU performance engineering.

Tech Stack

Language: C++

Parallelism: OpenMP

Vectorization: AVX intrinsics

Platform: x86-64 (Linux)

Profiling: perf
