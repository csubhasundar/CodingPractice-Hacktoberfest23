package Patterns;
import java.util.Scanner;
public class DiamondPattern {
public static void main(String[] args) {
	Scanner sc = new Scanner(System.in);
	int n = sc.nextInt();
	int i = 1;
	while(i<=n) {
		int j = 1;
		while(j<=n-i) {
			System.out.print(" ");
			j++;
		}
		int h = 1;
		while(h<=2*i-1) {
			System.out.print("*");
			h++;
		}
		System.out.println();
		i++;
	}
	i = n-1;
	while(i>=1) {
		int j = 1;
		while(j<=n-i) {
			System.out.print(" ");
			j++;
		}
		int h = 1;
		while(h<=i*2-1) {
			System.out.print("*");
			h++;
		}
		System.out.println();
		i--;
	}
	}
	
}

