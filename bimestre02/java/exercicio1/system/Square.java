package bimestre02.java.exercicio1;

public class Square extends Rectangle {
    
    private double side;
    
    public Square(double side) {
        super(side, side);
        this.side = side;
    }

    public Square(Color color, double filled, double side) {
        super(color, filled, side, side);
        this.side = side;
    }

    @Override
    public String toString() {
        return "Forma: Quadrado\nLado: " + this.side.toString() + "\nPerímetro: " + this.getPerimeter().toString() + "\nÁrea: " + this.getArea().toString() + "\n\n" + super.toString();
    }

}
