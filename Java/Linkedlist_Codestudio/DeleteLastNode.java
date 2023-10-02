package Linkedlist_Codestudio;

import com.sun.source.doctree.StartElementTree;

public class DeleteLastNode {

    static class Node{
        int data;
        Node next;


        Node(int data){

            this.data=data;
            this.next=null;

        }
    }
    public static void printll(Node head){
        Node temp=head;
        while (temp!=null){
            System.out.print(temp.data+" -> ");
            temp=temp.next;
        }
        System.out.print("NULL");
    }
    public static void main(String[] args) {

        Node head=new Node(1);
        head.next=new Node(2);
        head.next.next=new Node(3);
        head.next.next.next=new Node(4);
        head.next.next.next.next=new Node(5);



        Node temp=head;

        while (temp.next.next!=null){
            System.out.print(temp.data+ "-> ");
            temp=temp.next;
        }
//        System.out.println(temp.data);
        temp.next=null;
        printll(head);






    }
}
