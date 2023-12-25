public class BinaryNode {
    Node head;
    static class Node{
        String data;
        Node ref1;
        Node ref2;

        Node(String data){
            this.data = data;
            this.ref1 = null;
            this.ref2 = null;
        }
            
        Node(String data, Node ref1, Node ref2){
        this.data = data;
        this.ref1= ref1;
        this.ref2 = ref2;
        }
    }

    public void createNode(String data, Node ref1, Node ref2){
        Node newNode = new Node(data, ref1, ref2);
        if(head==null){
            head = newNode;
            return;
        }
        newNode.ref1 = ref1;
        newNode.ref2 = ref2;
    }
}
