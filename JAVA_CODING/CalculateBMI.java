public class CalculateBMI {
    public static String bmi(double weight, double height){
        double bminum = weight/Math.pow(height, 2);
        String r1 = "Underweight";
        String r2 = "Normal";
        String r3 = "Overweight";
        String r4 = "Obese";
        if(bminum <= 18.5){
            return r1;
        }
        else if (bminum <=25.0){
            return r2;
        }
        else if (bminum <=30.0){
            return r3;
        }
        else if (bminum >30){
            return r4;
        }
        return "";
    }
        

    public static void main(String[] args){
        
        System.out.println("BMI Category: " + CalculateBMI.bmi(79, 180));
    }
}
    

