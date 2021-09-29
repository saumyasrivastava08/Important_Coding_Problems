package below1400;

import java.util.*;
public class SortTheArray {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int[] arr = new int[n];
		
		for(int i = 0; i < n; i++) {
			arr[i] = sc.nextInt();
		}
		
		List<Integer> str = new ArrayList<Integer>();
		
		int start = 0, end = 0, f = 0;
		for(int i = 0; i < n - 1; i++) {
			if(arr[i] > arr[i+1]) {
				if(f == 0) {
					start = i;
					f = 1;
				}
				end = i + 1;
			}
			else if(arr[i] <= arr[i+1] && (f == 0)) {
				continue;
			}
			else {
				break;
			}
		}
		
		int initial = start, ending = end;
		int temp = 0;
		
		while(start < end) {
			temp = arr[start];
			arr[start]=arr[end];
            arr[end]=temp;
            start++;
            end--;
		}
		
		boolean isSort = true;
		
		for(int i = 1; i < n; i++) {
			if(arr[i - 1] > arr[i]) {
				isSort = false;
			}
		}
		
		if(isSort) {
			System.out.println("yes");
			System.out.println((initial + 1) + " " + (ending + 1));
		}
		else {
			System.out.println("no");
		}

	}
}