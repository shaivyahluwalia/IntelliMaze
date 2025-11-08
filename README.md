# IntelliMaze
Perfect 👍 — here’s a **C-specific README.md** for your **IntelliMaze (Maze Solver in C)** project.
It’s concise, professional, and written in a student-friendly documentation style.

---

```markdown
# 🧩 IntelliMaze — Maze Solver in C

**IntelliMaze** is a simple command-line program written in **C language** that solves a maze using classical search algorithms such as **Breadth-First Search (BFS)** and **Depth-First Search (DFS)**.  
It demonstrates how pathfinding algorithms explore and find routes through a 2D grid maze.

---

## 🚀 Features

- 🧱 Solves mazes represented as 2D character grids  
- 🎯 Finds path from start `S` to end `E`  
- 🔍 Supports **BFS** (shortest path) and **DFS** (deep search)  
- 📜 Simple C implementation — no external libraries required  
- 💡 Ideal for learning pathfinding and graph traversal in C  

---

## 🛠️ Tech Stack

- **Language:** C  
- **Compiler:** GCC / any C99 compatible compiler  
- **Input:** Text-based maze grid from console or file  
- **Output:** Path found (if any) displayed on console  

---

## 📂 Project Structure

```

IntelliMaze/
├── maze_solver.c          # Main source code
├── input.txt              # Sample input maze
└── README.md

````

---

## ⚙️ How to Compile and Run

1. **Open terminal** in the project directory  
2. **Compile the program:**
   ```bash
   gcc maze_solver.c -o intelliMaze
````

3. **Run the program:**

   ```bash
   ./intelliMaze
   ```
4. **Provide Input:**

   * Either type it directly
   * Or read from a file:

     ```bash
     ./intelliMaze < input.txt
     ```

---

## 🧩 Maze Input Format

The maze is represented as a grid using characters:

| Symbol | Description          |
| ------ | -------------------- |
| `S`    | Start position       |
| `E`    | End/Goal position    |
| `#`    | Wall (blocked cell)  |
| `.`    | Open path (walkable) |

### Example Input:

```
5 7
#######
#S...E#
#.#.#.#
#.....#
#######
```

### Explanation:

* First line: Maze dimensions (rows = 5, columns = 7)
* Following lines: Maze layout

---

## 🎯 Example Output

```
Path found using BFS!
Steps: 8
Path:
(1,1) -> (1,2) -> (1,3) -> (1,4) -> (1,5)
```

If no valid path exists:

```
No path found!
```

---

## 🧠 Algorithms Used

| Algorithm                      | Description                                                                                 |
| ------------------------------ | ------------------------------------------------------------------------------------------- |
| **BFS (Breadth-First Search)** | Explores all possible paths level by level. Guarantees shortest path in an unweighted maze. |
| **DFS (Depth-First Search)**   | Explores one path deeply before backtracking. May not find the shortest path.               |

---

Would you like me to add a **code example snippet** (like your main maze-solving logic in C with BFS or DFS) at the end of this README? It can help illustrate how IntelliMaze works internally.
```
