package below1400;

import java.util.*;
public class Books {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n,t;
		n = sc.nextInt();
		t = sc.nextInt();
		int[] a = new int[n];
		
		for(int i = 0; i < n; i++) {
			a[i] = sc.nextInt();
		}
		
		int l = 0;
		int r = 0;
		int sum = 0;
		int ans = 0;
		
		while(r < n) {
			sum += a[r];
			if(sum <= t) {
				ans = Math.max(ans, (r-1 + 1));
			}
			while(sum > t) {
				sum -= a[l];
				l++;
			}
			r++;
		}
		
		System.out.println(ans);
		
	}

}
