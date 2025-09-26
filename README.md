# USACO Problems

A comprehensive collection of solutions to USA Computing Olympiad (USACO) problems, featuring implementations in C++ and C with detailed explanations and optimized algorithms.

![C++](https://img.shields.io/badge/C++-90.9%25-blue)
![C](https://img.shields.io/badge/C-8.5%25-lightblue)
![Ruby](https://img.shields.io/badge/Ruby-0.6%25-red)
![License](https://img.shields.io/badge/License-MIT-green)

## About USACO

The USA Computing Olympiad (USACO) is a national competitive programming competition for pre-college students in the United States. This repository contains solutions to various USACO problems across different difficulty levels and contest divisions.

## Features

- **Multiple Divisions**: Solutions for Bronze, Silver, Gold, and Platinum levels
- **Optimized Solutions**: Efficient algorithms with detailed complexity analysis
- **Clean Code**: Well-commented and readable implementations
- **Multiple Languages**: Primarily C++ with some C implementations
- **Problem Categories**: Covers various algorithmic topics and data structures

## Problem Categories

### Data Structures
- Arrays and Strings
- Stacks and Queues
- Sets and Maps
- Segment Trees
- Binary Indexed Trees (Fenwick Trees)

### Algorithms
- **Sorting & Searching**: Binary search, merge sort, quicksort
- **Graph Algorithms**: BFS, DFS, shortest paths, MST
- **Dynamic Programming**: Classic DP problems and optimizations
- **Greedy Algorithms**: Interval scheduling, activity selection
- **Number Theory**: GCD, prime factorization, modular arithmetic

### Advanced Topics
- Network Flow
- String Algorithms (KMP, Z-algorithm)
- Computational Geometry
- Advanced DP techniques

## Repository Structure

```
usaco-problems/
├── bronze/                 # Bronze level problems
│   ├── simulation/        # Simulation problems
│   ├── complete_search/   # Complete search problems
│   └── greedy/           # Greedy algorithms
├── silver/                # Silver level problems
│   ├── sorting/          # Sorting and searching
│   ├── two_pointers/     # Two pointers technique
│   └── prefix_sums/      # Prefix sum problems
├── gold/                  # Gold level problems
│   ├── dp/               # Dynamic programming
│   ├── graphs/           # Graph algorithms
│   └── trees/            # Tree algorithms
├── platinum/             # Platinum level problems
│   ├── advanced_dp/      # Advanced DP
│   └── data_structures/  # Advanced data structures
├── templates/            # Code templates and utilities
└── README.md
```

## Getting Started

**1. Clone the repository**

```
git clone https://github.com/cpsurfer/usaco-problems.git
cd usaco-problems
```

**2. Compile and run C++ solutions**

```
g++ -std=c++17 -O2 -o solution problem_name.cpp
./solution < input.txt > output.txt
```

**3. For competitive programming setup**

```
# Using faster compilation flags
g++ -std=c++17 -O2 -Wall -Wextra -pedantic -o solution solution.cpp
```

## Solution Format

Each solution includes:

- **Problem statement**: Link to original USACO problem
- **Algorithm explanation**: Detailed approach and complexity analysis
- **Implementation**: Clean, commented code
- **Test cases**: Sample inputs and expected outputs

### Example Solution Structure

```
/*
Problem: [Problem Name]
Contest: USACO [Year] [Month] [Division]
Link: [USACO Problem URL]
Algorithm: [Algorithm Used]
Time Complexity: O(...)
Space Complexity: O(...)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // Solution implementation
    
    return 0;
}
```

## Compilation Guidelines

### Recommended Compiler Flags

```
# For contests
g++ -std=c++17 -O2 -Wall -Wextra -o solution solution.cpp

# For debugging
g++ -std=c++17 -g -Wall -Wextra -fsanitize=address,undefined -o solution solution.cpp
```

### Template Usage

```
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

#define FOR(i, a, b) for(int i = a; i < b; i++)
#define REP(i, n) FOR(i, 0, n)
#define pb push_back
#define mp make_pair
```

## Problem Difficulty Levels

| Division | Typical Topics | Prerequisites |
|----------|---------------|---------------|
| **Bronze** | Ad hoc, simulation, complete search | Basic programming |
| **Silver** | Sorting, two pointers, prefix sums, BFS/DFS | Bronze + basic algorithms |
| **Gold** | DP, shortest paths, MST, topological sort | Silver + intermediate algorithms |
| **Platinum** | Advanced DP, network flow, string algorithms | Gold + advanced data structures |

## Contributing

Contributions are welcome! Here's how you can help:

1. **Fork the repository**
2. **Add new solutions** following the existing format
3. **Improve existing solutions** with better algorithms or cleaner code
4. **Add test cases** and detailed explanations
5. **Submit a pull request**

### Contribution Guidelines

- Follow consistent coding style and formatting
- Include problem statement links and complexity analysis
- Test solutions thoroughly before submitting
- Add meaningful comments explaining the approach

## Resources

### Official USACO Resources
- [USACO Official Website](http://www.usaco.org/)
- [USACO Guide](https://usaco.guide/) - Comprehensive learning resource
- [USACO Training Pages](http://train.usaco.org/) - Legacy training problems

### Additional Learning Materials
- [Competitive Programming 3](https://cpbook.net/) by Steven Halim
- [Introduction to Algorithms](https://mitpress.mit.edu/books/introduction-algorithms) (CLRS)
- [Codeforces](https://codeforces.com/) for practice problems

## Usage Tips

### For Beginners
1. Start with Bronze level problems
2. Focus on understanding problem statements thoroughly
3. Practice basic algorithms before moving to advanced topics
4. Learn to handle edge cases and constraints

### For Advanced Users
1. Focus on optimization techniques
2. Practice contest time management
3. Study advanced algorithms and data structures
4. Analyze complexity trade-offs

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Author

**cpsurfer** - [GitHub Profile](https://github.com/cpsurfer)

## Acknowledgments

- USA Computing Olympiad for providing excellent competitive programming problems
- USACO Guide contributors for educational resources
- Competitive programming community for sharing knowledge and techniques

## Support

- ⭐ Star this repo if it helps with your competitive programming journey!
- 🐛 [Report issues](https://github.com/cpsurfer/usaco-problems/issues) with solutions
- 💡 [Suggest improvements](https://github.com/cpsurfer/usaco-problems/issues) or new features
- 📚 Check out [USACO Guide](https://usaco.guide/) for learning resources

---

**Happy Competitive Programming! 🚀**
```

This README is specifically tailored for a USACO competitive programming repository, including sections for problem categories, difficulty levels, compilation guidelines, and competitive programming best practices. The structure follows competitive programming documentation standards while highlighting the algorithmic problem-solving aspects of USACO.[1][2][3][4][5][6]
