package system;

import util.Shape;
import util.Color;

public class Square extends Rectangle {
    
    private double side;
    
    public Square(double side) {
        super(side, side);
        this.side = side;
    }

    public Square(Color color, boolean filled, double side) {
        super(color, filled, side, side);
        this.side = side;
    }

    @Override
    public String toString() {
        return "Forma: Quadrado\nLado: " + this.side + "\nPerímetro: " + this.getPerimeter() + "\nÁrea: " + this.getArea() + "\n\n" + super.toString();
    }

}
