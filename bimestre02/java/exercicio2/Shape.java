abstract class Shape {
    private String shapeName;

    public Shape() {
        this.shapeName = "Forma Geométrica";
    }

    public Shape(String shapeName) {
        this.shapeName = shapeName;
    }

    public abstract double area();
    
    public String toString() {
        return this.shapeName;
    }
}