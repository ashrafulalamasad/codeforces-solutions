# Codeforces Solutions

A curated archive of accepted solutions to [Codeforces](https://codeforces.com/) problems, written in modern C++ and organized for clarity, maintainability, and ease of navigation.

This repository captures the full scope of my competitive programming activity — contest submissions, independent problemset practice, and structured training from the Assiut University Newcomers curriculum. Contest solutions are organized per round, and practice solutions are grouped separately, keeping the repository clean and navigable.

---

## Table of Contents

- [Repository Overview](#repository-overview)
- [Repository Structure](#repository-structure)
- [Repository Statistics](#repository-statistics)
- [Naming Convention](#naming-convention)
- [Build & Run](#build--run)
- [About Me](#about-me)
- [Contributing](#contributing)
- [Acknowledgements](#acknowledgements)

---

## Repository Overview

This repository serves three purposes:

**Contest record.** Every Codeforces round I have participated in is represented by a dedicated commit containing the solutions produced during and after that round. The contests span Div. 1, Div. 2, Div. 3, Div. 4, Educational Rounds, and Global Rounds.

**Practice archive.** Problems solved outside of contests — upsolves, topic-specific practice, and independent exploration — are stored in the same format. This component covers a wide range of difficulty levels and problem categories.

**Learning curriculum.** The Assiut University Newcomers material provides a structured progression through fundamental topics, from data types and conditions through loops, arrays, strings, functions, mathematics, and recursion.

### Topics Covered

The solutions span a broad range of categories:

| Category | Examples |
|----------|----------|
| Implementation | Multi-step simulation, edge case handling |
| Greedy | Locally optimal choices |
| Dynamic programming | Knapsack, LIS, interval DP, tree DP |
| Graph theory | BFS, DFS, shortest paths, connected components |
| Number theory | Sieves, GCD/LCM, modular arithmetic, combinatorics |
| String processing | Hashing, palindromes, pattern matching |
| Data structures | Stacks, queues, sets, maps, priority queues |
| Mathematics | Probability, geometry, bitwise operations |

---



## Repository Structure

```
Codeforces-Solutions/
├── Solutions/                   # All Codeforces solutions
├── Assiut University Newcomers/ # Training sheets and contests
│   ├── Sheet 1 (Data type - Conditions)
│   ├── Sheet 2 (Loops)
│   ├── Sheet 3 (Arrays)
│   ├── Sheet 4 (Strings)
│   ├── Sheet 5 (Functions)
│   ├── Sheet 6 (Math - Geometry)
│   ├── Sheet 7 (Recursion)
│   ├── Sheet 8 (General easy)
│   ├── Sheet 9 (General medium)
│   ├── Sheet 10 (General hard)
│   ├── Contest 1
│   ├── Contest 2
│   └── Contest 3.1
├── .gitignore
└── README.md
```

### Root Directory

**`Solutions/`** — All Codeforces problem solutions. Each file is self-contained and can be compiled independently.

**`Assiut University Newcomers/`** — Structured training sheets and contests. The ten sheets progress from fundamentals to advanced topics:

| Sheet | Focus Area |
|-------|------------|
| Sheet 1 | Data types, conditions, basic I/O |
| Sheet 2 | Loops (for, while, nested loops) |
| Sheet 3 | Arrays (1D, 2D, matrix operations) |
| Sheet 4 | Strings (manipulation, frequency, patterns) |
| Sheet 5 | Functions (modular code, parameter passing) |
| Sheet 6 | Math and geometry (GCD, primes, combinatorics) |
| Sheet 7 | Recursion (backtracking, divide and conquer) |
| Sheet 8 | General easy (mixed problems) |
| Sheet 9 | General medium (mixed problems) |
| Sheet 10 | General hard (mixed problems) |

The three contests at the end (Contest 1, 2, and 3.1) assess cumulative understanding across multiple topics and serve as checkpoints. Each sheet and contest contains multiple problems designed to reinforce the corresponding concepts through practice.

**`.gitignore`** — Excludes compiled binaries, editor artifacts, OS files, and the local unnecessary files.

---

## Repository Statistics

| Category | Description |
|----------|-------------|
| Contest Solutions | Problems solved across Codeforces rounds (Div. 1, Div. 2, Div. 3, Div. 4), Educational Rounds, Global Rounds, and special events |
| Problemset Solutions | Independent practice, upsolves, and problems solved outside of live contests |
| Assiut Solutions | Structured training material from the Assiut University Newcomers curriculum |
| Language | C++ |
| Compiler | GCC |

---

## Naming Convention

Every solution file follows the standard Codeforces problem identifier format:

```
<ContestID><ProblemLetter>. <ProblemName>.cpp
```

| Component | Description |
|-----------|-------------|
| `ContestID` | Numeric contest identifier assigned by Codeforces (e.g., `4`, `71`, `2055`) |
| `ProblemLetter` | Uppercase letter identifying the problem within the contest (e.g., `A`, `B`, `C`) |
| `ProblemName` | Full problem name as it appears on Codeforces |

For problems with multiple versions or subtasks — such as easy and hard variants — the problem letter is extended with a numerical suffix (e.g., `G1`, `G2`, `C1`, `C2`). This follows the same convention used on the Codeforces platform itself.

### Why This Convention

This naming scheme was chosen for a specific reason: it directly maps to the Codeforces problem URL. Given any filename, you can immediately construct the corresponding problem page:

```
https://codeforces.com/problemset/problem/<ContestID>/<ProblemLetter>
```

This means that locating the original problem statement, editorial, or discussion requires only the filename and no external lookup. It also ensures that files sort naturally by contest and problem order in any file browser.

### Examples

| Filename | Contest | Problem URL |
|----------|---------|-------------|
| `4A. Watermelon.cpp` | Codeforces Round 4 | `codeforces.com/problemset/problem/4/A` |
| `71A. Way Too Long Words.cpp` | Codeforces Round 71 | `codeforces.com/problemset/problem/71/A` |
| `112A. Petya and Strings.cpp` | Codeforces Round 112 | `codeforces.com/problemset/problem/112/A` |
| `231A. Team.cpp` | Codeforces Round 231 | `codeforces.com/problemset/problem/231/A` |
| `2055A. Two Frogs.cpp` | Codeforces Round 996 (Div. 2) | `codeforces.com/problemset/problem/2055/A` |
| `1807G1. Subsequence Addition (Easy Version).cpp` | Codeforces Round 1807 | `codeforces.com/problemset/problem/1807/G1` |
| `1807G2. Subsequence Addition (Hard Version).cpp` | Codeforces Round 1807 | `codeforces.com/problemset/problem/1807/G2` |

---

## Build & Run

All solutions are written in C++17 and follow the standard Codeforces I/O convention: reading from `stdin` and writing to `stdout`. This makes them compatible with the judging environment and easy to test locally with file redirection.

```bash
g++ -std=c++17 -O2 -pipe -static -s "Solutions/<filename>.cpp" -o solution
./solution < input.txt
```

### Compiler Flags Explained

| Flag | Purpose |
|------|---------|
| `-std=c++17` | Targets C++17 — widely supported on Codeforces, provides modern features |
| `-O2` | Standard optimizations, matches Codeforces judge settings |
| `-pipe` | Speeds up compilation by using pipes instead of temp files |
| `-static` | Produces a portable statically linked binary |
| `-s` | Strips debug symbols, reduces binary size |

Each file is self-contained with no dependencies beyond the C++ standard library. Compile and run with a single command — no build system required.

---



## Navigating the Repository

Files in `Solutions/` are sorted by numeric contest ID, grouping problems from the same round together. To find a solution:

1. Note the contest ID and letter from the Codeforces URL (e.g., `codeforces.com/problemset/problem/2055/A`).
2. Locate `Solutions/2055A. Two Frogs.cpp`.
3. For multi-version problems, check for suffixes like `G1`, `G2`, `C1`, `C2`.

For Assiut problems, browse the relevant sheet directory by topic (e.g., `Sheet 3 (Arrays)` for array problems).

All solutions are final — accepted submissions or corrected versions that pass all test cases.

---

## About Me

I am **Ashraful Alam**, a competitive programmer from Bangladesh. I actively participate in Codeforces rounds and maintain this repository as a personal archive of my solutions. You can find me on [LinkedIn](https://www.linkedin.com/in/ashrafulalam005/).

<div align="center">
  <br>

  <img src="https://img.shields.io/badge/Rating-1502-ff8c00?style=for-the-badge&logo=codeforces&logoColor=white" alt="Rating">
  <img src="https://img.shields.io/badge/Max-1502-ff8c00?style=for-the-badge" alt="Max Rating">
  <img src="https://img.shields.io/badge/Rank-Specialist-9cf?style=for-the-badge" alt="Rank">
  <img src="https://img.shields.io/badge/Contests-41-1565C0?style=for-the-badge" alt="Contests">

  <br><br>

  <a href="https://codeforces.com/profile/ashrafulalamasad"><img src="https://img.shields.io/badge/Codeforces-ashrafulalamasad-1F8ACB?style=for-the-badge&logo=codeforces&logoColor=white" alt="Codeforces"></a>
</div>

I started competitive programming in early 2025 as a way to become a more disciplined problem solver. What began with basic syntax and simple implementation problems gradually evolved into a consistent routine of contest participation, upsolving, and topic-focused practice. I have worked through problems spanning data structures, dynamic programming, graph theory, number theory, combinatorics, and string algorithms.

This repository is the technical record of that process — a personal reference for techniques I have used and a portfolio of sustained effort. I continue to participate in Codeforces rounds actively and maintain a consistent practice schedule.

---

## Contributing

This is a personal archive, but if you find an error — incorrect solution, typo, misnamed file, or broken build command — please open an issue.

---

## Acknowledgements

- [Codeforces](https://codeforces.com/) for providing an exceptional platform for competitive programming and maintaining a vast archive of high-quality problems.
- The **Assiut University** community for developing and making available the Newcomers training material that forms part of this repository.
- The competitive programming community at large for the editorials, tutorials, and discussions that make learning new techniques accessible.
