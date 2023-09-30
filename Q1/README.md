# Multiples of 3 or 5

## Problem statement

We want to find the sum of all the multiples of 3 or 5 up to 1000 (not included).

## Brute Force solution

A brute force solution involves iterating through all the numbers from 1 to the target value and checking if each number is a multiple of 3 or 5. If it is, we add it to a running sum.

```cpp
int multipleSum(int target) {
    int sum = 0;
    for (int i = 1; i <= target; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }
    return sum;
}
```

## Optimal approach

The optimal approach uses mathematical properties to calculate the sum of multiples of 3 or 5 more efficiently.

### Sum of multiples of 3 upto 1000

$$
\text S = 3 + 6 + 9 + 12... + 999 = 3 (1 + 2 + 3 + 4 + ...+ 333)
$$

Sum of natural numbers = $`n * \frac{n+1}{2}`$

$$
\text{for n = 333} \implies \text S = 3 * n * \frac{n+1}{2}
$$

### Similarly, for the sum of multiples of 5 upto 1000
$$
\text S = 5 + 10 + 15 + 20... + 995 = 3 (1 + 2 + 3 + 4 + ...+ 199)
$$

$$
\text{for n = 199} \implies \text S = 5 * n * \frac{n+1}{2}
$$

After **subtracting the multiples of 15** which are occurring twice,

$$
\text{Sum of multiples of 3 or 5} = \text {Sum of multiples of 3 + Sum of multiples of 5 - Sum of multiples of 15}
$$

### Optimal solution
```cpp
int target = 999;

int multipleSum(int num) {
    int n = target / num; // 999 / 3 = 333;
    return num * (n * (n + 1) / 2); // 3 * 333 (333+1) /2
}

void solve() {
    cout << multipleSum(3) + multipleSum(5) - multipleSum(15);
}
```
**Time complexity** : $`O(1)`$

**Space complexity** : $`O(1)`$
