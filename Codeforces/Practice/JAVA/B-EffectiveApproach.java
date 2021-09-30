// https://codeforces.com/problemset/problem/227/B

// Test Cases:-

// input
// 2
// 1 2
// 1
// 1
// output
// 1 2

// input
// 2
// 2 1
// 1
// 1
// output
// 2 1

// Explanation:-

// In the first sample Vasya's approach will make one comparison (it starts with the 1-st element and immediately finds the required number), and Petya's approach makes two comparisons (first he compares with the 2-nd array element, doesn't find the search item and compares with the 1-st element).

// In the second sample, on the contrary, Vasya's approach will need two comparisons (first with 1-st element, and then with the 2-nd), and Petya's approach will find the required value in one comparison (the first comparison with the 2-nd element).

package below1400;

import java.util.Scanner;

public class solver {
	public static void main(String args[]) throws Exception {
		InputStreamReader r = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(r);

		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int arr[] = new int[n + 1];
		for (int i = 1; i <= n; i++)
			arr[sc.nextInt()] = i;
		int m = sc.nextInt();
		long sum1 = 0;
		long sum2 = 0;
		for (int i = 0; i < m; i++) {
			int x = sc.nextInt();
			sum1 += arr[x];
			sum2 += n - arr[x] + 1;
		}
		System.out.println(sum1 + " " + sum2);
	}
}