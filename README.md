<p align="center">
  <img src="https://img.shields.io/badge/C%2B%2B-17-blue?logo=c%2B%2B&logoColor=white" alt="C++17"/>
  <img src="https://img.shields.io/badge/solutions-697-brightgreen" alt="697 solutions"/>
  <img src="https://img.shields.io/badge/contests-44-orange" alt="44 contests"/>
  <img src="https://img.shields.io/badge/rating-1502-9cf" alt="Rating 1502"/>
  <img src="https://img.shields.io/badge/difficulty-Specialist-yellow" alt="Specialist"/>
  <img src="https://img.shields.io/badge/license-MIT-lightgrey" alt="MIT"/>
</p>

# Codeforces Solutions

My solutions to [Codeforces](https://codeforces.com/) competitive programming problems, written in C++. 

**Handle:** [ashrafulalamasad](https://codeforces.com/profile/ashrafulalamasad)

## Stats

| Metric | Value |
|--------|-------|
| Problems solved | **697** |
| Contests participated | **44** |
| Peak rating | **1502** (Specialist) |
| Journey | **396 → 1502** |
| Period | **Jan 2025 – Jul 2026** |

## Rating Progression

```
Specialist  1502 ┤                          ╱╲
             1400 ┤                    ╱╲  ╱  ╲
Pupil        1200 ┤              ╱╲  ╱  ╲╱    ╲
             1000 ┤        ╱╲  ╱  ╲╱          ╲
Newbie        800 ┤  ╱╲  ╱  ╲╱                ╲
              600 ┤╱  ╲╱                       ╲
              400 ┤╱                            ╲
                  └──────────────────────────────────▶
                  Jan 2025                    Jul 2026
```

## Structure

```
.
├── Solutions/                   # 697 problem solutions
├── Assiut University Newcomers/ # Training sheets & contests
│   ├── Sheet 1-10/
│   ├── Contest 1-3.1/
│   └── ...
├── memory/                      # Personal notes (gitignored)
├── .gitignore
└── README.md
```

## Naming Convention

Each solution file follows the format:

```
<ContestID><ProblemLetter>. <ProblemName>.cpp
```

For example:
- `4A. Watermelon.cpp` — Contest 4, problem A
- `2055A. Two Frogs.cpp` — Contest 2055 (Round 996), problem A

## Build

```bash
g++ -std=c++17 -O2 -pipe -static -s "Solutions/<file>.cpp" -o solution
./solution
```

All solutions read from `stdin` and write to `stdout`, matching the standard Codeforces format.

## Contests

All 44 contests I participated in are committed chronologically with backdated timestamps, covering rounds from **Codeforces Round 996** to **Educational Codeforces Round 192**.
