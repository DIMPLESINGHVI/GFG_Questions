int evenlyDivides(int n) {
    int num = n;
    bool used[10] = {false};
    int count = 0;

    while (num > 0) {
        int digit = num % 10;
        num /= 10;

        if (digit == 0 || used[digit]) continue;

        used[digit] = true;  // mark digit as used once
        if (n % digit == 0) count++;
    }

    return count;
}


// in case we are asked about unique digits that divide the number
// int evenlyDivides(int n) {
//     int num = n;
//     bool used[10] = {false};
//     int count = 0;

//     while (num > 0) {
//         int digit = num % 10;
//         num /= 10;

//         if (digit == 0 || used[digit]) continue;

//         used[digit] = true;  // mark digit as used once
//         if (n % digit == 0) count++;
//     }

//     return count;
// }
