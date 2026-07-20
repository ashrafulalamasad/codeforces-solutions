# Codeforces Solutions

My solutions to Codeforces problems, written in C++.

## Structure

```
.
├── solutions/               # Individual problem solutions
├── Assiut University Newcomers/
│   ├── Sheet 1-10/
│   ├── Contest 1-3.1/
│   └── ...
├── .gitignore
└── README.md
```

Each solution file is named `<ContestID><Letter>. <Problem Name>.cpp`.

## Build

```bash
g++ -std=c++17 -O2 -pipe -static -s "<file>.cpp" -o solution
./solution
```

All solutions read from `stdin` and write to `stdout`.
