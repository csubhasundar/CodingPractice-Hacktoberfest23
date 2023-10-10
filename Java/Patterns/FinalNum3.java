package Patterns;
import java.util.Scanner;
public class FinalNum3 {
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
		int a = i;
		while(a<=(2*i)-1) {
			System.out.print(a);
			a++;
			j++;
		}
		a = a-2;
		j=1;
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
