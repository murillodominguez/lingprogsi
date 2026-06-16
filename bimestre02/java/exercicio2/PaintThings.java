import java.text.DecimalFormat;
public class PaintThings{
    public static void main (String[] args){
        final double COVERAGE = 350;

        Paint paint = new Paint(COVERAGE);

        double deckAmt, ballAmt, tankAmt;

        // Instancia as três formas a serem pintadas
        RectangularPrism deck = new RectangularPrism(20, 35, 10);
        Sphere bigBall = new Sphere(15);
        Cylinder tank = new Cylinder(10, 30);

        // Computa a quantidade de tinta necessária para cada forma
        deckAmt = paint.amount(deck);
        ballAmt = paint.amount(bigBall);
        tankAmt = paint.amount(tank);

        // Mostra a quantidade de tinta necessária.
        
        DecimalFormat fmt = new DecimalFormat("0.#");
        System.out.println ("\n# de latões necessários...");
        System.out.println ("Deck: " + fmt.format(deckAmt) );
        System.out.println ("Big Ball: " + fmt.format(ballAmt) );
        System.out.println ("Tank: " + fmt.format(tankAmt) );
    }
}