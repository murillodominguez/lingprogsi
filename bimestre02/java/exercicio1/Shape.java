package bimestre02.java.exercicio1;

public class Shape {
    protected Color color;
    protected boolean filled;

    public Shape(Color color, boolean filled) {
        this.color = color;
        this.filled = filled;
    }

    public void setFilled(boolean filled) {
        this.filled = filled;
    }

    public boolean isFilled() {
        return this.filled;
    }

    public void setColor(Color color) {
        this.color = color;
    }

    public Color getColor() {
        return this.color;
    }

    public double getArea() {
        return 0;
    }

    public double getPerimeter() {
        return 0;
    }

    public String toString() {
        String stateString = (this.isFilled()) ? "A forma está preenchida. Sua cor é " + this.color.name : "A forma não está preenchida"; 

        return stateString;
    }
}