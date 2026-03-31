# Arrays
- Arrays is a *Linear Data Structure* that stores items at contiguous locations
- Arrays in C++, is a fundamental data structure used to store a fixed-size, sequential collection of elements of the same data type in contiguous memory locations. 

 It offers mainly the following advantages over other data structures.

- **Random Access** : i-th item can be accessed in O(1) Time as we have the base address and every item or reference is of same size.
- **Cache Friendliness** : Since items / references are stored at contiguous locations, we get the advantage of locality of reference.

## Initialization and Declaration( including memory addressing and size allocation)
```cpp
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int arr[8];       //Array declaration
    cout<<&arr<<endl;   //shows the address of array 
    cout<<arr<<endl;    // also shows the address of array
    int arr1[10]={1,4,5,6,7};
    cout<<&arr1<<endl; // adressof operator shows the adress of base element 
    cout<<&arr1[0]<<" tip"<<endl;
    cout<<sizeof(arr1); // since its "int" thus size for arr1[10] will be 4x10=40
 getch();
 return 0;
}
```

---
## Source mode
main.cpp

---
## 🚀 Features

* Shows how arrays are stored in memory
* Demonstrates:

  * Address of an array
  * Base address of array elements
* Uses `sizeof()` to calculate total memory occupied
* Simple and beginner-friendly C++ program


---

## 🧠 Concepts Covered

### 1. Array Declaration

```cpp
int arr[8];
```

* Declares an array of size 8

---

### 2. Address of Array

```cpp
cout << &arr << endl;
cout << arr << endl;
```

* Both print the base address of the array

---

### 3. Array Initialization

```cpp
int arr1[10] = {1,4,5,6,7};
```

* Initializes first 5 elements, rest are set to 0

---

### 4. Address of First Element

```cpp
cout << &arr1 << endl;
cout << &arr1[0] << endl;
```

* Both represent the same base address

---

### 5. Size of Array

```cpp
cout << sizeof(arr1);
```

* Calculates total memory used
* Example: `10 elements × 4 bytes = 40 bytes`

---

## 🛠️ Requirements

* C++ Compiler (GCC / MinGW / Turbo C++)
* Windows environment (for `<conio.h>` and `getch()`)

---

## ▶️ How to Run

### Using g++ (Recommended)

```bash
g++ basic.cpp -o basic
./basic
```

### On Windows (MinGW)

```bash
g++ basic.cpp -o basic.exe
basic.exe
```

---

## ⚠️ Notes

* `<conio.h>` is **not standard** in modern C++.
* `getch()` is used only to pause output (can be removed if needed).
* Memory size may vary depending on system architecture.

---

## 📌 Output Example

```
Address of arr: 0x61ff00
Address using arr: 0x61ff00
Address of arr1: 0x61ff20
Address of arr1[0]: 0x61ff20
Size of arr1: 40
```

---

## 📖 Learning Outcome

After running this program, you will understand:

* How arrays are stored in memory
* Relationship between array name and pointer
* How memory size is calculated in C++

---

## 👨‍💻 Author

**Nitin Chauhan**

---


