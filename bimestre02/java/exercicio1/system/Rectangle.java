package bimestre02.java.exercicio1;

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
        return "Forma: Retângulo\nLargura: " + this.width.toString() + "\nAltura: " + this.height.toString() + "\nPerímetro: " + this.getPerimeter().toString() + "\nÁrea: " + this.getArea().toString() + "\n\n" + super.toString();
    }
}