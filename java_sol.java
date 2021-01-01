import java.io.*;
import java.util.*;

public class Main {
	static long min(long sum, int d) {
		return (sum < d ? sum : d);
	}
	
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int tt = in.nextInt();
		for (int qq = 1; qq <= tt; qq++) {
			int n = in.nextInt();
			int k = in.nextInt();
			int d = in.nextInt();
			long sum = 0;
			for (int i = 0; i < n; i++) {
				int a = in.nextInt();
				sum += a;
			}
			System.out.println(min(sum / k, d));
		}
	}
}
