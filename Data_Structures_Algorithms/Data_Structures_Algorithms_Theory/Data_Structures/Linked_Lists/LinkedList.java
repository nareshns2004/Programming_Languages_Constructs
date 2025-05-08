



public class LinkedList{

    public static class Node{
        
        int data;
        Node next;

        public Node(int data){
            this.data = data;
            this.next = null;
        }
    }

    public static Node head;
    public static Node tail;
    public static int size;

    public void addFirst(int data){

        Node newNode = new Node(data);
        size++;
        if(head == null){
            
            head = tail = newNode;
            return;
        }
        
        newNode.next = head;
        head = newNode;
    }

    public void addLast(int data){
        Node newNode = new Node(data);
        size++;
        if(head == null){
            
            head = tail = null;

            return;
        }

        tail.next = newNode;
        tail = newNode;
    }

    public void print(Node head){

        if(head==null){
            System.out.println("LL is Empty");
        }
        Node tmp = head;
        while(tmp!=null){
            System.out.print(tmp.data + "->");
            tmp = tmp.next;
        }

        System.out.println("null");
    }

    public  void add(int idx, int data){
        if(idx==0){
            addFirst(data);
            return;
        }

        size++;
        Node newNode = new Node(data);
        Node tmp = head;
        int i = 0;
        while(i<idx-1){
            tmp = tmp.next;
            i++;
        }

        newNode.next = tmp.next;
        tmp.next = newNode;
    }

    public static void main(String [] args){
        LinkedList ll = new LinkedList();
        ll.addFirst(1);
        ll.addFirst(2);

        ll.addLast(3);
        ll.addLast(4);
        ll.print(head);
        ll.add(2,9);
        ll.print(head);

        System.out.println(ll.size);
        
    }

}