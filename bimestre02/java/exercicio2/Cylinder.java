class Cylinder extends Shape {
    private double raio;
    private double altura;
    
    public Cylinder(double raio, double altura) {
        super("Cilindro");
        this.raio = raio;
        this.altura = altura;
    }

    @Override
    public double area() {
        return 2 * Math.PI * this.raio * this.altura + 2 * Math.PI * this.raio * this.raio;
    }

    @Override
    public String toString() {
        return "Forma: " + super.toString() + "\nRaio: " + this.raio + "\nAltura: " + this.altura + "\nÁrea: " + this.area() + "\n\n";
    }
}