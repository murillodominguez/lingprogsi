package system;

import util.Shape;
import util.Color;

public class Circle extends Shape {
    
    private double radius;

    public Circle(double rad) {
        this.radius = rad;
    }

    public Circle(Color color, boolean filled, double rad) {
        super(color, filled);
        this.radius = rad;
    }

    public void setRadius(double rad) {
        this.radius = rad;
    }

    public double getRadius() {
        return this.radius;
    }

    @Override
    public double getArea() {
        return Math.PI * this.radius * this.radius;
    }

    @Override
    public double getPerimeter() {
        return 2 * Math.PI * this.radius;
    }

    @Override
    public String toString() {
        return "Forma: Círculo\nRaio: " + this.getRadius() + "\nPerímetro: " + this.getPerimeter() + "\nÁrea: " + this.getArea() + "\n\n" + super.toString();
    }
}
