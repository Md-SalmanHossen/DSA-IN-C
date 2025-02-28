

---

### **Problem 1: Sort an Array in Descending Order**

#### **Dry Run**
**Input Array**: `[7, 2, 9, 4, 1]`

1. **Initial Array**: `[7, 2, 9, 4, 1]`
   - Start with the second element (`2`).

2. **First Pass (i = 1)**:
   - Current element: `2`
   - Compare `2` with `7` (previous element).
   - Since `2 < 7`, no shifting is needed.
   - Array remains: `[7, 2, 9, 4, 1]`

3. **Second Pass (i = 2)**:
   - Current element: `9`
   - Compare `9` with `2` (previous element).
   - Since `9 > 2`, shift `2` to the right.
   - Compare `9` with `7`.
   - Since `9 > 7`, shift `7` to the right.
   - Insert `9` at index `0`.
   - Array: `[9, 7, 2, 4, 1]`

4. **Third Pass (i = 3)**:
   - Current element: `4`
   - Compare `4` with `2` (previous element).
   - Since `4 > 2`, shift `2` to the right.
   - Compare `4` with `7`.
   - Since `4 < 7`, insert `4` at index `2`.
   - Array: `[9, 7, 4, 2, 1]`

5. **Fourth Pass (i = 4)**:
   - Current element: `1`
   - Compare `1` with `2` (previous element).
   - Since `1 < 2`, no shifting is needed.
   - Array remains: `[9, 7, 4, 2, 1]`

6. **Final Sorted Array (Descending)**: `[9, 7, 4, 2, 1]`

---

#### **Pseudocode**
```plaintext
InsertionSortDescending(A):
    for i = 1 to length(A) - 1:
        key = A[i]  // Current element to be inserted
        j = i - 1   // Start comparing with the previous element

        // Shift elements smaller than key to the right
        while j >= 0 and A[j] < key:
            A[j + 1] = A[j]
            j = j - 1

        // Insert the key in its correct position
        A[j + 1] = key
```

---

### **Problem 2: Find the Median of a Sorted Array using Insertion Sort**

#### **Dry Run**
**Input Array**: `[6, 3, 8, 1, 5]`

1. **Sort the Array**:
   - Use Insertion Sort to sort the array in ascending order.
   - Sorted Array: `[1, 3, 5, 6, 8]`

2. **Find the Median**:
   - Length of the array is **5** (odd).
   - Median = Middle element = `5`.

---

**Input Array**: `[6, 3, 8, 1]`

1. **Sort the Array**:
   - Use Insertion Sort to sort the array in ascending order.
   - Sorted Array: `[1, 3, 6, 8]`

2. **Find the Median**:
   - Length of the array is **4** (even).
   - Median = Average of middle two elements = `(3 + 6) / 2 = 4.5`.

---

#### **Pseudocode**
```plaintext
InsertionSortMedian(A):
    // Sort the array using Insertion Sort
    for i = 1 to length(A) - 1:
        key = A[i]
        j = i - 1
        while j >= 0 and A[j] > key:
            A[j + 1] = A[j]
            j = j - 1
        A[j + 1] = key

    // Find the median
    n = length(A)
    if n % 2 == 1:
        return A[n // 2]  // Middle element for odd length
    else:
        return (A[(n // 2) - 1] + A[n // 2]) / 2  // Average of middle two elements for even length
```

---

### **Problem 3: Find the Kth Smallest Element using Insertion Sort**

#### **Dry Run**
**Input Array**: `[10, 2, 5, 8, 3]`, **K = 3**

1. **Sort the Array**:
   - Use Insertion Sort to sort the array in ascending order.
   - Sorted Array: `[2, 3, 5, 8, 10]`

2. **Find the Kth Smallest Element**:
   - K = 3.
   - The 3rd smallest element is `5`.

---

#### **Pseudocode**
```plaintext
InsertionSortKthSmallest(A, K):
    // Sort the array using Insertion Sort
    for i = 1 to length(A) - 1:
        key = A[i]
        j = i - 1
        while j >= 0 and A[j] > key:
            A[j + 1] = A[j]
            j = j - 1
        A[j + 1] = key

    // Return the Kth smallest element
    return A[K - 1]
```

---

### **Summary of Solutions**

| Problem | Description | Pseudocode |
|---------|-------------|------------|
| 1 | Sort in Descending Order | Modify Insertion Sort to shift elements smaller than `key`. |
| 2 | Find Median | Sort the array, then find the middle element(s). |
| 3 | Find Kth Smallest Element | Sort the array, then return the element at index `K-1`. |

