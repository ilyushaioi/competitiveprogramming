int fib(int number) {                      
	if (number < 2) {
		return number;
	}
	return fib(number - 1) + fib(number - 2);
}

//https://e-maxx.ru/algo/fibonacci_numbers
