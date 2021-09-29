package below1400;

import java.util.*;
public class PashmakAndFlowers {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int max = 0;
		int min = Integer.MAX_VALUE;
		
		int[] arr = new int[n];
		for(int i = 0; i < n; i++) {
			arr[i] = sc.nextInt();
			max = Math.max(max, arr[i]);
			min = Math.min(min, arr[i]);
		}
		
		int diff = max - min;
		int way = 0, way1 = 0;
		    
		    for(int i: arr){     
		        if(i==max){    
		            way++;   
		        }else if(i==min) {
		            way1++;
		        }   
		    }
		    System.out.print(diff + " ");
		    if(max == min) {
		    	System.out.println((n * (n-1)) / 2);
		    }
		    else {
		    	System.out.println(way * way1);
		    }
		    
	}

}
