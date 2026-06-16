package system;

import util.Shape;
import util.Color;

public class Rectangle extends Shape {

    private double width;
    private double height;

    public Rectangle(double width, double height) {
        this.width = width;
        this.height = height;
    }

    public Rectangle(Color color, boolean filled, double width, double height) {
        super(color, filled);
        this.width = width;
        this.height = height;
    }

    public void setWidth(double width) {
        this.width = width;
    }
    
    public void setHeight(double height) {
        this.height = height;
    }
    
    public double getWidth() {
        return this.width;
    }

    public double getHeight() {
        return this.height;
    }
    
    @Override
    public double getArea() {
        return this.width * this.height;
    }

    @Override
    public double getPerimeter() {
        return 2*this.width + 2*this.height;
    }

    @Override
    public String toString() {
        return "Forma: Retângulo\nLargura: " + this.width + "\nAltura: " + this.height + "\nPerímetro: " + this.getPerimeter() + "\nÁrea: " + this.getArea() + "\n\n" + super.toString();
    }
}