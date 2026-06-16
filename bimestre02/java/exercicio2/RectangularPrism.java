class RectangularPrism extends Shape {
    private double altura;
    private double largura;
    private double comprimento;

    public RectangularPrism(double altura, double largura, double comprimento) {
        super("Prisma Retangular");
        this.altura = altura;
        this.largura = largura;
        this.comprimento = comprimento;
    }

    @Override
    public double area() {
        return 2*(this.altura*this.largura) + 2*(this.altura*this.comprimento) + 2*(this.largura*this.comprimento);
    }

    @Override
    public String toString() {
        return "Forma: " + super.toString() + "\nAltura: " + this.altura + "\nLargura: " + this.largura + "\nComprimento: " + this.comprimento + "\nÁrea: " + this.area() + "\n\n";
    }
}