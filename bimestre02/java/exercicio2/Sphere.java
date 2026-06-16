class Sphere extends Shape {
    private double raio;

    public Sphere(double raio) {
        super("Esfera");
        this.raio = raio;
    }

    @Override
    public double area() {
        return 4 * Math.PI * this.raio*this.raio;
    }

    @Override
    public String toString() {
        return "Forma: " + super.toString() + "\nRaio: " + this.raio + "\nÁrea: " + this.area() + "\n\n";
    }
}