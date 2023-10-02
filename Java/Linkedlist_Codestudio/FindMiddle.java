package Linkedlist_Codestudio;

public class FindMiddle {
    static class Node{
        int data;
        Node next;
        Node(int data){
            this.data=data;
            this.next=null;
        }
    }
    public static Node head;
    public static Node tail;

    public static void main(String[] args) {


        head=new Node(1);
        Node newnode=new Node(2);
        head.next=newnode;
        head.next.next=new Node(3);
        head.next.next.next=new Node(4);
        head.next.next.next.next=new Node(5);
        head.next.next.next.next.next=new Node(6);

//        Node rev=reverseLL(head);
//        printLL(rev);

        findmidofLL(head);




    }

    private static Node findmidofLL(Node head) {

        Node temp=head;
        int n=0;
        while (temp!=null){
            temp=temp.next;
            n++;
        }
        temp=head;
        System.out.println(n);  
        for(int i = 0; i < n / 2; i++) {
            System.out.print(temp.data+"->");
            temp = temp.next;
        }
        return temp;
    }

    private static Node reverseLL(Node head) {
        Node prev = null;
        Node curr = head;
        Node next;
        while (curr != null) {
            next = curr.next;
            curr.next = prev;
            prev = curr;
            curr = next;
        }
        return prev; // Return the new head of the reversed list
    }
    private static void printLL(Node head) {
        Node temp=head;

        while (temp!=null){
            System.out.print(temp.data+" -> ");
            temp=temp.next;

        }
        System.out.print("null");
    }
}

