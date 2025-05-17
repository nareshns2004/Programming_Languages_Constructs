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

    public int removeFirst(){

        if(size==0){
            System.out.println("Linked List is Empty");

            return Integer.MAX_VALUE;
        }else if(size == 1){
            int val = head.data;
            head = tail = null;
            size=0;
            return val;

        }

        int val = head.data;
        Node temp = head.next;
        head.next = null;
        head = temp;
        size--;

        return val;

    }

    public static void removeLast(){

        if(size==0){
            System.out.println("Linked List is Empty");
        }
        else if (size==1) {
            head = tail = null;
            size = 0;
        }
        Node temp = head;
        while(temp.next.next!=null){
            temp = temp.next;
        }

        temp.next = null;
        tail = temp;
        size--;
    }

    public int searchKey(int data){
        Node srch = head;
        int cnt=0;
        while(srch!=null){
            if(srch.data==data){
                return cnt;
            }
            srch = srch.next;
            cnt++;
        }

        return -1;

    }

    public int recursiveSearch(Node head, int data ){
            if(head==null){
                return -1;
            }
        
            if(head.data == data ){
            return 0;
            }

            int idx = recursiveSearch(head.next, data);

            if(idx == -1){
                return -1;
            }

            return idx+1;
    }

    public Node findMid(Node head){
        Node slow = head;
        Node fast = head;

        while(fast!=null&&fast.next!=null){
            slow = slow.next;
            fast = fast.next.next;
        }

        return slow;
    }

    public boolean checkPalindrome(){
        if(head==null||head.next==null){
            return true;
        }

        Node midNode = findMid(head);

        Node prev = null;
        Node curr = midNode;
        Node next;

        while(curr!=null){
            next = curr.next;
            curr.next = prev;
            prev = curr;
            curr = next;
        }

        Node left = head;

        Node right = prev;

        while(right!=null){

            if(left.data!=right.data){
                return false;
            }

            left = left.next;
            right = right.next;
        }

        return true;
    }

    public static void main(String [] args){
        LinkedList ll = new LinkedList();
        ll.addFirst(1);
        ll.addFirst(2);
        ll.addLast(5);
        ll.addLast(1);
        ll.addLast(2);
        ll.print(head);
        //ll.add(2,9);
        ll.print(head);

       /* System.out.println(ll.size);

        ll.removeFirst();
        ll.print(head);

        System.out.println(ll.size);

        ll.removeLast();
        ll.print(head);

        System.out.println(ll.size);
        
        */

       // System.out.println(ll.searchKey(9));

       System.out.println(ll.recursiveSearch(head, 9));
        System.out.println(ll.checkPalindrome());

    }

}