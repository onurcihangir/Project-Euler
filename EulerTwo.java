
public class EulerTwo {
	public static int evenFibonacciNumbers(int max) {
		int sum = 0;
		int first = 1;
		int second = 1;
		while(second <= max) {
			if(second % 2 == 0) {
				sum += second;
			}
			int third = first + second;
			first = second;
			second = third;
		}
		return sum;
	}
}
