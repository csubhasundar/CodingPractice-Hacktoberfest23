package Patterns;

import java.util.Scanner;

public class FinalNum1 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int i = 1;
		while(i<=n) {
			int s = 1;
			while(s<=n-i) {
				System.out.print(" ");
				s++;
			}
			int j = 1;
			int a = 1;
			while(j<=i) {
				System.out.print(a);
				a++;
				j++;
			}
			a = i-1;
			j = 1;
			while(j<=i-1) {
				System.out.print(a);
				a--;
				j++;
			}
			System.out.println();
			i++;
		}

	}

}
