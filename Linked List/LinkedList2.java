class Node {
    int data;
    Node next;

    Node(int data) {
        this.data = data;
        this.next = null;
    }
}

class LinkList {
    Node Head;

    void add(int data) {
        Node newNode = new Node(data);
        if (Head == null) {
            Head = newNode;
        } else {
            Node temp = Head;
            while (temp.next != null) {
                temp = temp.next;
            }
            temp.next = newNode;
        }
    }

    void display() {
        Node temp = Head;
        while (temp != null) {
            System.out.println(temp.data);
            temp = temp.next;
        }
    }
}

public class LinkedList2 {
    public static void main(String[] args) {

        LinkList list = new LinkList();
        list.add(10);
        list.display();

    }

}
