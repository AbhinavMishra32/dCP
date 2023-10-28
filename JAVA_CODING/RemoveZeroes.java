    import org.w3c.dom.Text;

    public class RemoveZeroes {
        public static int noBoringZeros(int n) {
            if(n%10 ==0){
                return 0;
            }
            while (n%10==0){
                n = n/10;
            }
            return n;
        }
        public static void main(String[] args){
            RemoveZeroes test = new RemoveZeroes();
            System.out.println(test.noBoringZeros(300));
        }

    }
