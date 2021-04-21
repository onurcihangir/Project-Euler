
public class EulerOne {
	
	public static int multiplesOf3And5(int max) {
		int sum = 0;
		for(int i = 1; i<max; i++) {
			if(i % 3 == 0 || i % 5 == 0) {
				sum += i;
			}
		}
		return sum;
	}

}
