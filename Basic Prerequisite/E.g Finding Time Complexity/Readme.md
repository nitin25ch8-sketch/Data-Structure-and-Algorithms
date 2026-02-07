# Time Complexity – Examples and Explanation

This repository contains handwritten notes converted into structured explanations and examples for **Time Complexity analysis** in Data Structures and Algorithms.

---

## 📌 What is Time Complexity?

**Time Complexity** is the estimation of the total CPU computation required to execute an algorithm.

It is calculated as:

> **Time Complexity = Total number of CPU computations**  
> = **Sum of frequency count of each instruction**  
> = **Number of times an instruction is executed**

---

## 🧠 Example: Finding Time Complexity

```cpp
int a = 0, b = 0, n, m;
cin >> n >> m;

for (int i = 0; i < n; i++) {
    cout << "Hi\n";
}

for (int i = 0; i < m; i++) {
    cout << "Hi2\n";
}
```

First loop runs n times → O(n)

Second loop runs m times → O(m)

Final Time Complexity:
O(n) + O(m) = O(max(n, m))

### 🔁 Time Complexity of Single Loops
#### 1️⃣ Simple Single Loop
```cpp
for (i = 1; i <= n; i++)
    printf("Hello");
```
Executes n times

- Time Complexity: O(n)

#### 2️⃣ Single Loop Incremented by a Constant
```cpp
for (i = 1; i <= n; i = i + 2)
    cout << "Hi";
```
Executes approximately (n / 2) times

- Time Complexity: O(n)

#### 3️⃣ Single Loop Decremented by a Constant
```cpp
for (i = n; i >= 1; i = i - 2)
```
Executes (n / 2) times

- Time Complexity: O(n)

#### 4️⃣ Single Loop with Multiplication
```cpp
for (i = 1; i <= n; i = i * 5)
```
Values: 1, 5, 25, 125, ...

Runs log₅ n times

- Time Complexity: O(log n)

#### 5️⃣ Single Loop with Division
```cpp
for (i = n; i >= 1; i = i / 5)
```
Values: n, n/5, n/25, ...

Runs log₅ n times

- Time Complexity: O(log n)

#### 6️⃣ Loop Updated with Power
```cpp
for (i = 3; i <= n; i = i * i)
```
Growth: 3, 3², 3⁴, ...

- Time Complexity: O(log log n)

#### 7️⃣ Loop with Conditional Expressions
(a) Linear Growth
```cpp
for (i = 1; i <= 2^n; i++)
```
Runs 2ⁿ times

- Time Complexity: O(2ⁿ)

(b) Exponential Growth
```cpp
for (i = 2; i <= 2^n; i = i * i)
```
- Time Complexity: O(log n)

(c) Square Root Loop
```cpp
for (i = 1; i <= √n; i++)
```
- Time Complexity: O(√n)

#### 8️⃣ Initialization with Function
```cpp
for (i = n²; i >= 1; i = i / 2)
```
Executes 2 log n + 1 times

- Time Complexity: O(log n)

#### 🔂 Nested Loops
##### Types of Nested Loops
Independent Nested Loop

Dependent Nested Loop

#### 🔹 Independent Nested Loop
The inner loop does not depend on the outer loop variable.

Example 1:
```cpp
for (i = 1; i <= n; i++) {
    for (j = 1; j <= n; j++) {
        x = x + 1;
    }
}
```
Inner loop runs n times for each outer loop

- Time Complexity: O(n²)

Example 2: Triple Nested Loop
```cpp
for (i = 1; i <= n; i++)
    for (j = 1; j <= n; j++)
        for (k = 1; k <= n; k++)
```
- Time Complexity: O(n³)

Example 3: Nested Loops with Log Factors
```cpp
for (i = 3; i <= n; i = i * i)
    for (j = 1; j <= n; j = j * 2)
        for (k = 1; k <= n; k = k * 2)
```
- Time Complexity: O(log² n × log log n)

### ✅ Summary Table
--- Loop Type	Time Complexity
Simple Loop	| O(n)
Increment / Decrement |	O(n)
Multiplication / Division |	O(log n)
Power Update |	O(log log n)
Nested Loop (2 levels) |	O(n²)
Nested Loop (3 levels) |	O(n³)
Exponential Loop |	O(2ⁿ)
