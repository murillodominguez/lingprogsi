package bimestre02.java.exercicio1;

public class Square extends Shape {
    
    protected double side;
    
    public Square(double side) {
        super(Color.VERMELHO, true);
        this.side = side;
    }

    public Square(Color color, boolean filled, double side) {
        super(color, filled);
        this.side = side;
    }

    @Override
    public double getPerimeter() {
        return side*4;
    }
    
    @Override
    public double getArea() {
        return side*side;
    }

}
