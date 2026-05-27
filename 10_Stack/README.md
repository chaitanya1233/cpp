# Stack in C++

## 📌 What You'll Learn
This section introduces the Stack data structure in C++. You’ll learn how stacks work internally, how to use the STL stack container, and how stacks help solve real-world problems involving reverse order processing and balanced operations.

---

## ✅ Prerequisite Knowledge
Before starting this section, you should know:

- Functions
- Loops
- Conditionals
- Strings
- Vectors (basic understanding)
- STL basics

---

## 🔑 Key Concepts Covered

### 📚 Stack Fundamentals
- Introduction to stacks
- LIFO (Last In First Out) principle
- Stack operations:
  - `push()`
  - `pop()`
  - `top()`
  - `empty()`
  - `size()`

---

### 🧠 Problem Solving Using Stacks
- Reversing numbers using stacks
- Reversing strings using stacks
- Decimal to binary conversion
- Balanced parentheses checking
- Counting elements inside a stack
- Traversing stack elements

---

## 📂 Practice Files

### 🔹 Basics
- `Intro_to_stacks.cpp`
- `stack_functions.cpp`

### 🔹 Traversal & Utility
- `iterating_over_stack.cpp`
- `count_elements_in_stack.cpp`

### 🔹 Stack Applications
- `reverse_number_using_stack.cpp`
- `reverse_string_using_stacks.cpp`
- `Decimal_to_Binary.cpp`
- `Balanced Parentheses.cpp`

---

## ⚡ Important Concepts to Understand
- Why stacks are useful
- Real-world examples of stacks
- Time complexity of stack operations
- STL `stack` container usage
- Stack-based algorithm thinking

---

## 🎯 Outcome
After completing this section, you’ll be able to:

✅ Use STL stacks confidently  
✅ Solve reversal-based problems efficiently  
✅ Understand LIFO operations deeply  
✅ Build logic for parsing and validation problems  
✅ Prepare for advanced DSA topics like recursion, expression evaluation, and monotonic stacks

---

# 🚀 Recommended Next Topics

After stacks, continue with:

```text
11_Queue
12_Dequeue
13_Linked_List
14_Recursion
15_Binary_Search
16_STL_Algorithms
17_Hashing
18_Trees
19_Heap
20_Graphs
```

---

# 🧩 Real Interview Problems Related to Stacks
- Valid Parentheses
- Next Greater Element
- Stock Span Problem
- Min Stack
- Infix to Postfix Conversion
- Expression Evaluation
- Monotonic Stack Problems

---

# 📘 STL Syntax Quick Revision

```cpp
#include <stack>
using namespace std;

stack<int> st;

st.push(10);
st.push(20);

cout << st.top();

st.pop();

cout << st.size();
```

---

# 💡 Real World Examples of Stack
- Browser back button
- Undo/Redo operations
- Function call stack
- Expression parsing
- Syntax checking in compilers