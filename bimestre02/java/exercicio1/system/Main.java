public class Main {
    public static void main(String[] args) {
        Circle blueCircle = Circle(Color.AZUL, true, 7);
        Square unfilledSquare = Square(5);
        Rectangle blackRectangle = Rectangle(Color.PRETO, true, 3, 6);
        Shape greenShape = Shape(Color.VERDE, true);

        blackRectangle.setFilled(false);

        showInfo(blueCircle);
    }

    public void showInfo(Shape shape) {
        System.out.println("VINDO INFORMAÇÃO AÍ:\n\n" + shape.toString());
    }
}