package Patterns;
import java.util.Scanner;
public class NumPattern8{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int i = 0;
		while(i<=n) {
			int space = 0;
			while(space<=n-i-1) {
				System.out.print(" ");
				space++;
			}
			int j=1;
			while(j<=i) {
				System.out.print(j);
				
				j++;
			}
			System.out.println();
			i++;
		}
	}
}