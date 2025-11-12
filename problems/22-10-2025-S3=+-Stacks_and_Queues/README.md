# 🧱 Stacks & Queues — Study Session

[![Python3](https://img.shields.io/badge/Python-3776AB?style=for-the-badge&logo=python&logoColor=white)](https://www.python.org/)
[![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://isocpp.org/)
[![LeetCode](https://img.shields.io/badge/LeetCode-FFA116?style=for-the-badge&logo=leetcode&logoColor=white)](https://leetcode.com/)

[![Banner](/assets/GDG_Bristol_banner.png)](<chapter-link>)

Welcome to a LeetCode Study Session focused on **Stacks**, **Queues**, and the **Monotonic Pattern**. we've included some notes to refer too, and some problems to solve.

---

- **Hosted by:** [GDG on Campus – University of Bristol](https://gdg.community.dev/gdg-on-campus-university-of-bristol-bristol-united-kingdom/)

---

## 🎯 Learning Outcomes
By the end of this session, you will:
- Understand and implement **Stacks (LIFO)** and **Queues (FIFO)**.
- Recognize and apply the **Monotonic Stack/Queue** pattern.
- Solve classic stack and queue problems and be able to apply these data structures in more unfamiliar problems.

---

## 🔑 Quick Reference

| Structure           | Core Ops                       | Amortized | Use Cases                                     |
|---------------------|--------------------------------|-----------|-----------------------------------------------|
| **Stack (LIFO)**    | `push`, `pop`, `top`, `empty`  | O(1)      | Parsing (), backtracking, *next greater*       |
| **Queue (FIFO)**    | `push`, `pop`, `front`, `empty`| O(1)      | BFS, scheduling, streaming                     |
| **Monotonic Stack** | Maintain ↑/↓ order             | O(n)      | NGE/NS, daily temps, stock span                |
| **Monotonic Queue** | Window max/min with deque      | O(n)      | Sliding window extrema                         |

> **Tip:** Store **indices** (not just values) when you need positions or window checks.

---
