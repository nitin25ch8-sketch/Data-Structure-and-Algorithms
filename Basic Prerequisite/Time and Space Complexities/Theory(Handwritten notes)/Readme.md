# Time & Space Complexity

This repository contains concise notes on **Time and Space Complexity**, **Asymptotic Notations**, and **Big-O Analysis**, commonly used in **Data Structures & Algorithms (DSA)**.

---

## Time Complexity

Time Complexity is the **amount of time taken by an algorithm to run** as a function of the length of the input.

- It does **not** represent actual clock time.
- It represents the **number of CPU operations** performed.

---

## Space Complexity

Space Complexity is the **amount of memory space taken by an algorithm** as a function of the input size.

---

## Case Analysis of Algorithms

### 1. Worst Case Analysis (Mostly Used)
- Calculates the **upper bound** of running time.
- Considers the case that causes the **maximum number of operations**.

### 2. Best Case Analysis (Very Rarely Used)
- Calculates the **lower bound** of running time.
- Considers the case with the **minimum number of operations**.

### 3. Average Case Analysis
- Takes **all possible inputs**.
- Computes time for each input.
- Finds the **average running time**.

---

## Asymptotic Notation

### Big O Notation (Worst Case)

Big O notation is used to describe the **time or space complexity** of an algorithm.

- Represents the **upper bound** of complexity.
- Helps analyze algorithm performance as input size grows.
- Focuses mainly on the **worst-case scenario**.

Notation: O(f(n))

Where `f(n)` represents the number of operations for input size `n`.

---

## Properties of Big O Notation

### 1. Reflexivity
If `f(n)` is a function, then:


f(n) = O(f(n))

Example:


f(n) = n² ⇒ O(n²)


---

### 2. Transitivity
If:


f(n) = O(g(n))
g(n) = O(h(n))

Then:


f(n) = O(h(n))


---

### 3. Constant Factor Rule
For any constant `k > 0`:


If f(n) = O(g(n)) ⇒ c·f(n) = O(g(n))


---

### 4. Sum Rule
If:


f(n) = O(g(n))
k(n) = O(h(n))

Then the **largest term dominates**:


f(n) + k(n) = max(O(g(n)), O(h(n)))


Example:


O(n²) + O(n³) + O(log n) + O(n) = O(n³)


---

### 5. Product Rule
If:


f(n) = O(g(n))
h(n) = O(k(n))

Then:


f(n) × h(n) = O(g(n) × k(n))


Example:


f(n) = n²
g(n) = n⁴
⇒ O(n⁶)


---

### 6. Composition Rule
If:


f(n) = O(g(n))
g(n) = O(h(n))

Then:


f(g(n)) = O(h(n))


---

## Common Big O Time Complexities

### 1. Constant Time — O(1)
```cpp
int a = 5;
```

### 2. Linear Time — O(n) (Linear Search)
```
for (int i = 0; i < N; i++) {
}
```
### 3. Logarithmic Time — O(log n) (Binary Search)
```
for (int i = n; i > 1; i = i / 2) {
}
```
### 4. Quadratic Time — O(n²)
```
for () {
    for () {
    }
}
```
### 5. Cubic Time — O(n³)

```for () {
    for () {
        for () {
        }
    }
}
```
### 6. Polynomial Time — O(nᵏ)

Similar to quadratic and cubic.

Implemented using k nested loops.

### 7. Exponential Time — O(2ⁿ)

Running time doubles with each additional input.

Common in recursive algorithms without optimization.

### 8. Factorial Time — O(n!)

Running time grows factorially with input size.

Extremely slow for large inputs.

### Order of Complexity (Increasing)
```
O(1) < O(log N) < O(N) < O(N log N) < O(N²)
< O(N³) < O(2ⁿ) < O(N!) < O(Nⁿ)
```
