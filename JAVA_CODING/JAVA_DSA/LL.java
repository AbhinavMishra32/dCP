public class LL {
    Node head;
    static class Node{     
        String data;
        Node next;
    
        Node(String data) { //Node's "data" variable is given the value with the constructor
            this.data = data;
            this.next = null; //By default, the next link of a node is null.
        }
    }
    
    public void addFirst(String data){
        Node newNode  = new Node(data); //newNode now has null "next" link.
        if(head ==null){ //if head of a newNode is null then q
            head = newNode; //gives the value of newNode to head if head doesnt exists meaning it is null.
            return;
        }
        newNode.next = head;
        head = newNode;
    }
    public void addLast(String data){
        Node newNode  = new Node(data);
        if(head ==null){
            head = newNode;
            return;
        }
        Node currNode = head;
        while(currNode.next != null){
            currNode = currNode.next;
        }
        currNode.next = newNode;
    }
    public void printList(){
        if(head == null){
            System.out.println("List is empty");
        }
        Node currNode = head;
        while(currNode != null){
            System.out.print(currNode.data + " -> ");
            currNode = currNode.next;
        }
        System.out.print("NULL");
    }
    public int length(){
        int length = -1;
        Node currNode = head;
        while(currNode != null){
            length++;
            currNode = currNode.next;
        }
        return length;
    }
    public int indexOf(String x){
        Node currNode = head;
        int index = 0;
        while(currNode != null){
            if(currNode.data == x){
                return index;
            }
            else{
                index++;
            }
            currNode = currNode.next;
        }
        return -1; //if data isnt found in the list
        // public String toString(){
        //    return "Index of " + x + "is: " + index.toString;
        // }
    }
    public void deleteData(String x){
        Node currNode = head;
        Node prevNode = null;
        
        while(!currNode.data.equals(x)){
            prevNode = currNode;
            currNode = currNode.next;
        }
        //Node currNodeNext = currNode.next;
        if (prevNode == null) {
            // If the node to be deleted is the head
            head = currNode.next;
        } else {
            prevNode.next = currNode.next;
        }

    }
    public void deleteFirst(){
        Node currNode = head;  //currNode is now the previous head
        head = currNode.next; // head now changes to the next node from currNode.
    }

    public void deleteLast(){
        Node currNode = head;
        Node prevNode = null;
        while(currNode.next != null){
            prevNode = currNode;
            currNode = currNode.next;
        }
        if(prevNode == null){
            head = null;
        }
        else{
            prevNode.next = null;
        }
    }

    public static void main(String[] args) {
        LL list = new LL();
        list.addFirst("a");
        list.addFirst("b");
        list.addFirst("c");
        list.addFirst("d");
        list.addFirst("e");
        list.addFirst("f");
        list.addFirst("g");
        list.addLast("Last");
        list.deleteData("a");
        list.deleteLast();
        list.deleteLast();
        list.deleteLast();
        list.printList();
        //System.out.println("\n"+list.length());
        //System.out.println(list.indexOf("c"));
        // list.length().toString;
    }
}
