# Two Pointers — LeetCode

This repository contains my **C++ solutions to LeetCode problems based on the Two Pointers pattern**.

I created this collection while learning DSA and practicing how to identify and apply the Two Pointers technique in different types of problems.

The problems cover **arrays, strings, sorting, searching, duplicate handling, in-place modification, greedy approaches, and multiple-pointer techniques**.

---

## 📚 Problems Covered

### 1. [LeetCode 125 — Valid Palindrome](https://leetcode.com/problems/valid-palindrome/)

**Concept:** Opposite Direction Two Pointers

Use two pointers:

* `i` starts from the beginning.
* `j` starts from the end.

Ignore characters that are not alphanumeric and compare both characters after converting them to lowercase.

If any pair is different, the string is not a palindrome.

**Time Complexity:** `O(n)`
**Space Complexity:** `O(1)`

---

### 2. [LeetCode 344 — Reverse String](https://leetcode.com/problems/reverse-string/)

**Concept:** Opposite Direction Two Pointers

One pointer starts from the beginning and another from the end.

Swap the characters at both positions and move:

* left pointer forward
* right pointer backward

Continue until the pointers meet.

**Time Complexity:** `O(n)`
**Space Complexity:** `O(1)`

---

### 3. [LeetCode 167 — Two Sum II](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/)

**Concept:** Sorted Array + Two Pointers

Because the array is already sorted:

* `left` starts at the beginning.
* `right` starts at the end.

If the sum is too small, move `left` forward.

If the sum is too large, move `right` backward.

If the sum equals the target, we found the answer.

**Time Complexity:** `O(n)`
**Space Complexity:** `O(1)`

---

### 4. [LeetCode 15 — 3Sum](https://leetcode.com/problems/3sum/)

**Concept:** Sorting + Two Pointers

First sort the array.

Fix one element using a loop, then use two pointers for the remaining two elements.

* `left` starts after the fixed element.
* `right` starts at the end.

Move the pointers according to whether the current sum is smaller or larger than zero.

Duplicates are skipped to avoid duplicate triplets.

**Time Complexity:** `O(n²)`
**Space Complexity:** `O(1)` excluding the output

---

### 5. [LeetCode 16 — 3Sum Closest](https://leetcode.com/problems/3sum-closest/)

**Concept:** Sorting + Two Pointers

Sort the array and fix one element.

Then use two pointers to find the pair whose total is closest to the target.

For every combination, calculate the difference between the current sum and target.

Move the pointers depending on whether the current sum is smaller or larger than the target.

**Time Complexity:** `O(n²)`
**Space Complexity:** `O(1)` excluding sorting implementation

---

### 6. [LeetCode 18 — 4Sum](https://leetcode.com/problems/4sum/)

**Concept:** Sorting + Multiple Pointers

Sort the array first.

Use two loops to fix the first two elements.

Then use:

* `left`
* `right`

to find the remaining two elements.

The pointer movement depends on whether the current sum is smaller or larger than the target.

Duplicates are skipped to make sure the result contains unique quadruplets.

**Time Complexity:** `O(n³)`
**Space Complexity:** `O(1)` excluding the output

---

### 7. [LeetCode 11 — Container With Most Water](https://leetcode.com/problems/container-with-most-water/)

**Concept:** Opposite Direction Two Pointers

Start with:

* `left = 0`
* `right = n - 1`

The width is:

`right - left`

The container height is the smaller of the two heights:

`min(height[left], height[right])`

Calculate the area and keep track of the maximum.

Move the pointer having the smaller height because moving the taller pointer cannot increase the limiting height.

**Time Complexity:** `O(n)`
**Space Complexity:** `O(1)`

---

### 8. [LeetCode 26 — Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)

**Concept:** Fast & Slow Pointers

Because the array is sorted, duplicate values are next to each other.

Use:

* a slow pointer to maintain the position for the next unique element
* a fast pointer to scan the array

Whenever a new value is found, place it at the slow pointer position.

The array is modified **in-place**.

**Time Complexity:** `O(n)`
**Space Complexity:** `O(1)`

---

### 9. [LeetCode 27 — Remove Element](https://leetcode.com/problems/remove-element/)

**Concept:** Fast & Slow Pointers

Scan the array using one pointer.

Whenever the current value is not equal to `val`, place it at the position maintained by the other pointer.

This allows unwanted elements to be removed without creating another array.

**Time Complexity:** `O(n)`
**Space Complexity:** `O(1)`

---

### 10. [LeetCode 75 — Sort Colors](https://leetcode.com/problems/sort-colors/)

**Concept:** Multiple Pointers / Dutch National Flag

The array contains only:

`0, 1, 2`

Use three pointers to divide the array into sections:

* `low` → position for `0`
* `mid` → current element
* `high` → position for `2`

Depending on the current value:

* `0` → swap with `low`
* `1` → move forward
* `2` → swap with `high`

This sorts the array in one traversal without using another array.

**Time Complexity:** `O(n)`
**Space Complexity:** `O(1)`

---

### 11. [LeetCode 283 — Move Zeroes](https://leetcode.com/problems/move-zeroes/)

**Concept:** Fast & Slow Pointers

Use one pointer to scan the array and another pointer to maintain the position where the next non-zero element should go.

Whenever a non-zero value is found, place it at the correct position.

This keeps all non-zero elements at the beginning and moves zeroes to the end.

**Time Complexity:** `O(n)`
**Space Complexity:** `O(1)`

---

### 12. [LeetCode 977 — Squares of a Sorted Array](https://leetcode.com/problems/squares-of-a-sorted-array/)

**Concept:** Opposite Direction Two Pointers

Even though the original array is sorted, negative numbers can produce large squares.

For example:

`-7² = 49`

Use two pointers at both ends.

Compare the absolute values of the elements and place the larger square at the end of the result array.

Move the corresponding pointer inward.

**Time Complexity:** `O(n)`
**Space Complexity:** `O(n)` for the result array

---

### 13. [LeetCode 881 — Boats to Save People](https://leetcode.com/problems/boats-to-save-people/)

**Concept:** Sorting + Greedy + Two Pointers

First sort the people's weights.

Use:

* `left` for the lightest person
* `right` for the heaviest person

Try to put the lightest and heaviest person in the same boat.

If their combined weight is within the limit, both can share a boat.

Otherwise, the heaviest person must go alone.

Continue until everyone is assigned to a boat.

**Time Complexity:** `O(n log n)`
**Space Complexity:** `O(1)` excluding sorting implementation

---

### 14. [LeetCode 80 — Remove Duplicates from Sorted Array II](https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/)

**Concept:** Fast & Slow Pointers

This is an extension of LeetCode 26.

Here, each number is allowed to appear **at most twice**.

Since the array is sorted, compare the current element with the element two positions behind the slow pointer.

If they are different, the current element can be included.

The array is modified in-place.

**Time Complexity:** `O(n)`
**Space Complexity:** `O(1)`

---

### 15. [LeetCode 392 — Is Subsequence](https://leetcode.com/problems/is-subsequence/)

**Concept:** Two Pointers / String Traversal

Use one pointer for string `s` and another for string `t`.

Move through `t` and whenever the characters match, move the pointer of `s`.

If all characters of `s` are found in the same order inside `t`, then `s` is a subsequence.

The characters do not need to be next to each other; their order only needs to remain the same.

**Time Complexity:** `O(n)`
**Space Complexity:** `O(1)`

---

## 🧠 Two Pointers Patterns Practiced

Through these problems, I practiced several variations of the Two Pointers pattern:

### Opposite Direction

Pointers start from both ends and move towards each other.

**Problems:**
`11, 125, 167, 344, 977`

### Fast & Slow

One pointer scans the array while another maintains the position of the required result.

**Problems:**
`26, 27, 80, 283`

### Sorting + Two Pointers

Sorting allows the pointers to move efficiently based on the current sum or condition.

**Problems:**
`15, 16, 18, 881`

### Multiple Pointers

More than two pointers are used to divide or process different sections of an array.

**Problem:**
`75`

### String Two Pointers

Pointers are used to compare or traverse strings while maintaining order.

**Problems:**
`125, 344, 392`

---

## 📊 Complexity Summary

| Problem                         |       Time | Space |
| ------------------------------- | ---------: | ----: |
| 125 — Valid Palindrome          |       O(n) |  O(1) |
| 344 — Reverse String            |       O(n) |  O(1) |
| 167 — Two Sum II                |       O(n) |  O(1) |
| 15 — 3Sum                       |      O(n²) | O(1)* |
| 16 — 3Sum Closest               |      O(n²) | O(1)* |
| 18 — 4Sum                       |      O(n³) | O(1)* |
| 11 — Container With Most Water  |       O(n) |  O(1) |
| 26 — Remove Duplicates          |       O(n) |  O(1) |
| 27 — Remove Element             |       O(n) |  O(1) |
| 75 — Sort Colors                |       O(n) |  O(1) |
| 283 — Move Zeroes               |       O(n) |  O(1) |
| 977 — Squares of a Sorted Array |       O(n) |  O(n) |
| 881 — Boats to Save People      | O(n log n) | O(1)* |
| 80 — Remove Duplicates II       |       O(n) |  O(1) |
| 392 — Is Subsequence            |       O(n) |  O(1) |

`*` Output space is not included.

---

## 🎯 Learning Goal

The main goal of this practice is to understand **how to recognize a Two Pointers problem** and choose the appropriate variation instead of applying the technique blindly.

I am focusing on:

* Understanding the logic
* Writing solutions from scratch
* Debugging my own code
* Understanding pointer movement
* Analyzing time and space complexity
* Recognizing patterns across different problems

---

## 📈 Progress

**Pattern:** Two Pointers
**Problems Solved:** 15
**Language:** C++
**Platform:** LeetCode

This repository will continue to grow as I solve more DSA problems and explore new patterns.

---

## 🚀 Next

More DSA patterns coming soon.

* Sliding Window
* Binary Search
* Hashing
* Stack & Queue
* Linked List
* Recursion
* Trees
* Graphs
* Dynamic Programming

