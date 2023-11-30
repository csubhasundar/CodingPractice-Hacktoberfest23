import java.util.ArrayDeque;
import java.util.Deque;
import java.util.Scanner;

public class DoubleEndedQueue {
    public static void main(String[] args) {
        // Create a deque
        Deque<String> deque = new ArrayDeque<>();

        Scanner scanner = new Scanner(System.in);

        while (true) {
            System.out.println("Choose an operation:");
            System.out.println("1. Add element at the front");
            System.out.println("2. Add element at the back");
            System.out.println("3. Remove element from the front");
            System.out.println("4. Remove element from the back");
            System.out.println("5. Exit");

            int choice = scanner.nextInt();
            scanner.nextLine(); // Consume the newline character

            switch (choice) {
                case 1:
                    System.out.print("Enter the element to add at the front: ");
                    String frontElement = scanner.nextLine();
                    deque.addFirst(frontElement);
                    break;
                case 2:
                    System.out.print("Enter the element to add at the back: ");
                    String backElement = scanner.nextLine();
                    deque.addLast(backElement);
                    break;
                case 3:
                    if (!deque.isEmpty()) {
                        String removedFront = deque.removeFirst();
                        System.out.println("Removed from the front: " + removedFront);
                    } else {
                        System.out.println("Deque is empty.");
                    }
                    break;
                case 4:
                    if (!deque.isEmpty()) {
                        String removedBack = deque.removeLast();
                        System.out.println("Removed from the back: " + removedBack);
                    } else {
                        System.out.println("Deque is empty.");
                    }
                    break;
                case 5:
                    scanner.close();
                    System.exit(0);
                default:
                    System.out.println("Invalid choice. Please select a valid operation.");
                    break;
            }

            System.out.println("Current Deque: " + deque);
        }
    }
}
