package org.example;

public interface B {
    public void display();
    default public void show(){
        System.out.println("interface B method");
    }
}
