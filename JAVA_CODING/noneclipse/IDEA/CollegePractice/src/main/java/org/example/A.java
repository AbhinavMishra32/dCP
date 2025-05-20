package org.example;

public interface A {
    public void display();
    default public void show(){
        System.out.println("This is interface A show method");
    }
}
