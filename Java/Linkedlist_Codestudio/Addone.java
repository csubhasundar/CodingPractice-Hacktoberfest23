package Linkedlist_Codestudio;

import java.util.ArrayList;

public class Addone {
    static class Node{
        int data;
        Node next;
        Node(int data){
            this.data=data;
            this.next=null;
        }
    }

    public static void main(String[] args) {

        int[] arr1={5,6,3};
        int[] arr2={8,4,2};
        Node head1=createll(arr1);
        Node head2=createll(arr2);
        Node temp1=head1;
        Node temp2=head2;
        int sum1=0,sum2=0,sum=0;
        ArrayList<Integer> ans=new ArrayList<>();
        while (temp1!=null && temp2!=null){
            sum+= temp1.data+temp2.data;
            ans.add(sum);
            temp1=temp1.next;
            temp2=temp2.next;
            sum=0;
        }

        Node h=createLL(ans);
        printLL(h);




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

    private static Node createll(int[] data) {

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
        System.out.println();
    }

}
