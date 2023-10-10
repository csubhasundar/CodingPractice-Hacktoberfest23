package Patterns;

import java.util.Scanner;

public class NumPattern9 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int i = 1;
		int a = n;
		while(i<=n) {
			int j = 1;
			while(j<=n-i+1) {
				System.out.print(a);
				j++;
			}
			a--;
			System.out.println();
			i++;
		}

	}

}