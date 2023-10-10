package Patterns;
import java.util.Scanner;
public class FinalNum2{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int i = 1;
		while(i<=n) {
			int j = 1;
				while(j<=(2*n)-(2*i)) {
					System.out.print(" ");
					j++;
				}
				int a = i;
				while(a<=(2*i)-1) {
					System.out.print(a);
					a++;
					j++;
				}
				a=a-2;
				while(j<=(2*n)-1) {
					System.out.print(a);
					a--;
				j++;
			}
				System.out.println();
				i++;
		}
	}
		
}
