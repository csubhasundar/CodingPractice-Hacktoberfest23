package Patterns;
import java.util.Scanner;
public class NumPattern4 {
public static void main(String[] args) {
	Scanner sc= new Scanner(System.in);
	int n = sc.nextInt();
	int i = 1;
	int a = 1;
	while(i<=n) {
		int j = 1;
		while(j<=i) {
			System.out.print(a);
			a++;
			j++;
		}
		System.out.println();
		i++;
		a=i;
	}
}
}
