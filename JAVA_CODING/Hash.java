public class Hash {
    //Hashing algorithm

    String a = "sdaogsaowfeoweffe";
    int hash = 1;

    public void calculateHash() {
        for(int i= 0; i<a.length();i++){
            hash *= (int) a.charAt(i);
            hash *= a.length();
        }
    }

    public static void main(String args[]){
        Hash myobj = new Hash();
        myobj.calculateHash();
        System.out.println(myobj.hash);
    }
}

