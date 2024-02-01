int perfect(int number) {
    int sum = 0;

    for (int i = 1; i < number; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }

    if (sum == number) {
        return 1;  // Number is perfect
    } else {
        return 0;  // Number is not perfect
    }
}