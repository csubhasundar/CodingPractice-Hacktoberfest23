package Linkedlist_Codestudio;

import java.util.concurrent.TimeoutException;

public class DeleteNodeUsingOnePointer {
    static class Node{

        int data;
        Node next;
        Node(int data){

            this.data=data;
            this.next=null;

        }
    }
    public static void main(String[] args) {

        Node  head=new Node(1);
        head.next=new Node(2);
        head.next.next=new Node(3);
        head.next.next.next=new Node(4);
        head.next.next.next.next=new Node(5);

        printNodes(head);

//        int counter=1;
//        Node curr=head;
//        while (counter < 3) {
//            if (curr == null || curr.next == null) {
//                // Handle the case where there are not enough nodes to delete the 3rd node
//                return;
//            }
//            curr = curr.next;
//            counter++;
//        }
//
//        delete3rd(curr);
//        printNodes(head);

    }

    private static void delete3rd(Node curr) {

//
//        if(curr.next==null  || curr.next==null){
//            return;
//        }
        curr.data=curr.next.data;
        curr.next=curr.next.next;



    }


    private static void printNodes(Node head) {
        Node temp=head;
        while (temp!=null){

            System.out.print(temp.data+" -> ");
            temp=temp.next;
//            if(temp.next==null){
//                System.out.print("NULL");
//                break;
//
//            }
        }
    }
}
