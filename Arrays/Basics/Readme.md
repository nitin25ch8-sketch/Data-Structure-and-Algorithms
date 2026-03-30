

# 📌 C++ Array Operations Collection

This repository contains basic C++ programs demonstrating common array operations such as reversing, finding minimum, counting elements, and more. These programs are useful for beginners to understand array manipulation and logic building.

---

## 📂 Files Included

### 🔹 1. Array Initialization

📄 File: 

* Shows different ways to initialize arrays in C++.
* Covers fixed-size and auto-sized arrays.

```cpp
#include<iostream>    
#include<conio.h>   
#include<algorithm>
using namespace std;
int main(){
    // Initialization of an Array
   int arr[5]={1,2,3,4,5}; // Initializes all 5 elements
   int arr2[]= {1,2,3,4,5,6}; // Array size is automatically set to 5
return 0;
}
```

---
### 🔹 2. Reverse Array

📄 File: 

* Reverses an array using the two-pointer swapping method.
* Demonstrates use of `swap()` and loop optimization.

```cpp
#include<iostream>
#include<conio.h>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n =size(arr);
    for(int i=0; i<n/2; i++){
        swap(arr[i],arr[n-1-i]);
    }
    for(int i=0;i<n;i++){
     cout<<arr[i]<<" ";
    }
    
return 0;
}
```
---


### 🔹 3. Find Unique Element

📄 File: 

* Attempts to find a unique element in an array.
* Uses nested loops for comparison (O(n²) complexity).

```cpp
#include<iostream>
#include<conio.h>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={1,4,5,4,4,5,2,1,1};
    int n = size(arr);
    int ans;
    for(int i=0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(arr[i]==arr[j]){
                break;
            }
            else 
                ans= arr[i];
            
        }
    }
    cout<<ans;
return 0;
}
```

---

### 🔹 4. Find Minimum Element

📄 File: 

* Finds the smallest element in an array.
* Uses `INT_MAX` for initialization.

```cpp
#include<iostream>
#include<conio.h>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;
int main(){
    int arr[]={25,5,4,9,82,71,6,1,5};
    int n =size(arr);
    int ans= INT_MAX;
    for(int i=0;i<n; i++){
        if(arr[i]<ans){
            ans= arr[i];
        }
    }
    cout<<"Minimun: "<<ans;
return 0;
}
```
---

### 🔹 5. Count 0s and 1s

📄 File: 

* Counts number of `0`s and `1`s in an array.
* Demonstrates conditional counting.

```cpp
#include<iostream>
#include<conio.h>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={1,2,4,0,4,6,4,0,4,1};
    int n= size(arr);
    int count_1=0;
    int count_0=0;
    for (int i = 0 ; i<n; i++){
        if(arr[i]==0){
            count_0++;
        }
        if(arr[i]==1){
            count_1++;
        }
    }
    cout<<"0's "<< count_0<<endl;
    cout<<"1's "<<count_1;
return 0;
}
```
---

### 🔹 6. Second Largest Element

📄 File: 

* Finds the second largest element in an array.
* Uses a single traversal approach.

```cpp
#include<iostream>
#include<conio.h>
#include<vector>
#include<algorithm>
using namespace std;
int getSecondLargest(int arr[], int size){
    int max=-1;
    int second;
    int ans=-1;
    for(int i = 0; i<size; i++){
        if(size<2){
            return ans;
        }
        else if (arr[i]>max){
            second = max;
            max = arr[i];
        }
        else if(arr[i]>second && arr[i]!=max){
            second = arr[i];
        }
        ans = second;
    }
    return ans;
}
int main(){
    int arr[]={10,2,4,5,4,9,3};
    int n= size(arr);
    int a= getSecondLargest(arr, n);
    cout<<a;
return 0;
}
```
---

## 🛠️ Technologies Used

* Language: **C++**
* Libraries:

  * `<iostream>`
  * `<algorithm>`
  * `<vector>`
  * `<limits.h>`

---

## ▶️ How to Run

1. Clone the repository:

   ```bash
   git clone https://github.com/your-username/your-repo-name.git
   ```

2. Navigate to the folder:

   ```bash
   cd your-repo-name
   ```

3. Compile any file:

   ```bash
   g++ filename.cpp -o output
   ```

4. Run the program:

   ```bash
   ./output
   ```

---

## 📚 Concepts Covered

* Array traversal
* Swapping elements
* Searching algorithms
* Counting techniques
* Basic optimization
* Time complexity understanding

---

## ⚠️ Notes

* Some programs use basic logic for learning purposes and may not be fully optimized.
* The **Find Unique Element** program can be improved using hashing or XOR.
* The **Second Largest** logic assumes valid input and may need edge-case handling.

---

## 🚀 Future Improvements

* Add optimized solutions (O(n))
* Use STL (`vector`, `set`, `map`)
* Add user input instead of static arrays
* Improve error handling

---

## 👨‍💻 Author

**Nitin Chauhan**

---

If you want, I can also:
✅ Make this README more **professional (with badges & screenshots)**
✅ Add **output examples for each file**
✅ Convert it into a **project report (for submission)**
