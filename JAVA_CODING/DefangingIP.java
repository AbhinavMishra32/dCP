public class DefangingIP {
    public static String defangIPaddr(String address){
        StringBuilder result = new StringBuilder();
        char[] addressArray = address.toCharArray();
        for(int i= 0;i<addressArray.length; i++){
            if(addressArray[i]=='.'){
            result.append('[').append('.').append(']');
            }
            else{
                result.append(addressArray[i]);
            }
        }
        return result.toString();
    }
    public static void main(String[] args){
        String mystring = "1.1.1.1";
        System.out.println(DefangingIP.defangIPaddr(mystring));
    }
}
