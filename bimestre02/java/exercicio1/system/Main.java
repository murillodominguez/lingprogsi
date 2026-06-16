package system;

import util.Shape;
import util.Color;

public class Main {
    public static void main(String[] args) {
        Circle blueCircle = new Circle(Color.AZUL, true, 7);
        Square unfilledSquare = new Square(5);
        Rectangle blackRectangle = new Rectangle(Color.PRETO, true, 3, 6);
        Shape greenShape = new Shape(Color.VERDE, true);

        blackRectangle.setFilled(false);

        showInfo(blueCircle);
    }

    public static void showInfo(Shape shape) {
        System.out.println("VINDO INFORMAÇÃO AI:\n\n" + shape.toString());
    }
}