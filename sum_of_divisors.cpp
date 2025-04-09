 int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i * (n / i);  // n/i gives the divisor 
    }
    return sum;

// Instead of finding divisors of every number i, we reverse the logic:

// For every number i from 1 to n, count how many numbers from 1 to n i divides.
// Because if i divides k, then i is a divisor of k.

// So for each i, it appears as a divisor in n / i numbers, and contributes i * (n / i) to the total.

// That’s where the efficient solution comes from
