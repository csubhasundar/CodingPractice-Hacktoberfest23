class LinkedList {

	static Node head;

	static class Node {

		int data;
		Node next_node;

		Node(int d) {
			data = d;
			next_node = null;
		}
	}

	/* Reverse the linked list */
	Node reverse(Node node) {
		Node prev_node = null;
		Node current_node = node;
		Node next_node = null;
		while (current_node != null) {
			next_node = current_node.next_node;
			current_node.next_node = prev_node;
			prev_node = current_node;
			current_node = next_node;
		}
		node = prev_node;
		return node;
	}

	// Prints the elements of the double linked list
	void printList(Node node) {
		while (node != null) {
			System.out.print(node.data + " ");
			node = node.next_node;
		}
	}

	public static void main(String[] args) {
		LinkedList list = new LinkedList();
		list.head = new Node(20);
		list.head.next_node = new Node(40);
		list.head.next_node.next_node = new Node(60);
		list.head.next_node.next_node.next_node = new Node(80);
		
		System.out.println("Original Linked list:");
		list.printList(head);
		head = list.reverse(head);
		System.out.println("");
		System.out.println("Reversed Linked list:");
		list.printList(head);
	}
}
