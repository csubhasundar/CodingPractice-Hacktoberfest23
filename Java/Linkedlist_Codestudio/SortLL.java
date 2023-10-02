package Linkedlist_Codestudio;

import java.util.ArrayList;
import java.util.Collections;

public class SortLL {
    static class Node{
        int data;
        Node next;

        Node(int data){
            this.data=data;
            this.next=null;
        }
    }
    public static Node createLL(ArrayList<Integer> data){
        if(data==null || data.size()==0){
            return null;
        }

        Node head=new Node(data.get(0));
        Node temp=head;

        for (int i = 1; i < data.size(); i++) {
            temp.next=new Node(data.get(i));
            temp=temp.next;
        }
        return head;

    }
    public static Node createLL(int[] data){
        if(data==null || data.length==0){
            return null;
        }

        Node head=new Node(data[0]);
        Node temp=head;

        for (int i = 1; i < data.length; i++) {
            temp.next=new Node(data[i]);
            temp=temp.next;
        }
        return head;

    }

    public static void printLL(Node head){

        Node temp=head;
        while (temp!=null){
            System.out.print(temp.data+" => ");
            temp=temp.next;
        }
        System.out.print("null");

    }
    public static void main(String[] args) {
        int[] data = {1, 9, 2, 8, 3, 7, 4};
        int n=data.length;


        Node head=createLL(data);
        sortLL(head);

    }

        private static void sortLL(Node head) {

            Node temp=head;
            ArrayList<Integer> arr=new ArrayList<>();
            while (temp!=null){
                arr.add(temp.data);
                temp=temp.next;
            }
            Collections.sort(arr);
            Node head2=createLL(arr);
            printLL(head2);
        }
}
