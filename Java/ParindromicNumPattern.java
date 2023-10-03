import java.util.Scanner;

public class ParindromicNumPattern {
    public static void main(String[] args) {
        System.out.print("Enter the number of row:");

        try (Scanner sc = new Scanner(System.in)) {
            int n=sc.nextInt();
            //outer loop
            for(int i=1; i<=n; i++){
                //innner loop for print spaces
                for(int j=1; j<=n-i; j++){
                    System.out.print(" ");
                }
                //1st half print i to 1
                for(int j=i; j>=1; j--){
                    System.out.print(j);
                }
                //2nd half print 2 to i
                for(int j=2; j<=i; j++){
                    System.out.print(j);
                }
                System.out.println();
            }
        }
    }
}

/*

 OUTPUT:

 Enter the number of row:5
    1
   212
  32123
 4321234
543212345

 */