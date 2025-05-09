class Employee {
 int age;
 String name;
 String designation;
 String DOJ;
 Employee() {
     this("Rahul", 26, "Developer", "02-07-2018");
 }
 Employee(String name, int age, String designation, String DOJ) {
     this.name = name;
     this.age = age;
     this.designation = designation;
     this.DOJ = DOJ;
 }
 void display() {
     System.out.println("Name: " + name);
     System.out.println("Age: " + age);
     System.out.println("Designation: " + designation);
     System.out.println("Date of Joining: " + DOJ);
 }
}
class mainclass3 {
	public static void main(String[] args) {
	        Employee emp = new Employee(); 
	        emp.display();   
	}
}
