package Linkedlist_Codestudio;

public class Linkedlistremovenodefromlast {

    static class Node
    {
        int data;
        Node next;
        Node(int data)
        {
            this.data=data;
            this.next=null;
        }
    }

    public static void main(String[] args) {

        Node head=new Node(1);
        head.next=new Node(2);
        head.next.next=new Node(3);
        head.next.next.next=new Node(4);
        head.next.next.next.next=new Node(5);

        deletemiddlenode(head);

        Node temp=head;
        while (temp!=null){
            System.out.print(temp.data+" -> ");
            temp=temp.next;
        }










    }

    private static void deletemiddlenode(Node head) {

        if(head==null || head.next==null){
            return;
        }
        Node slow=head;
        Node fast=head;
        Node prev=null;

        while (fast!=null && fast.next!=null){

            fast=fast.next.next;
            prev=slow;
            slow=slow.next;

        }

        prev.next=slow.next;
    }

    private static Node reverse(Node head) {

        Node prev=null;
        Node curr=head;
        Node next;

        while (curr!=null){
            next=curr.next;
            curr.next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }

}
