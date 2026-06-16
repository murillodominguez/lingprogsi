public class Paint{
    private double coverage; //número de cm² por galão/latão
    /**
    * Construtor: Monta o objeto de pintura.
    */
    public Paint(double c){
        coverage = c;
    }
    /**
    * Retorna a quantidade de tinta (número de galões)
    * necessário para pintar a forma passada como parâmetro
    */
    public double amount(Shape s){
        System.out.println ("Computing amount for " + s);
        return s.area() / coverage;
    }
}