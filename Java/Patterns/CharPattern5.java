package Patterns;
import java.util.Scanner;
public class CharPattern5 {
public static void main(String[] args) {
	Scanner sc = new Scanner (System.in);
	int n = sc.nextInt();
	int i = 1;
	while(i<=n) {
		int j = 1;
		char p = (char)(n+65-i);
		while(j<=i) {
			System.out.print(p);
			p++;
		j++;
		
	}
		
	System.out.println();
	i++;
}
}
}