package bimestre02.java.exercicio1;

public class Shape {
    protected Color color;
    protected boolean filled;

    public Shape() {
        this.color = null;
        this.filled = false;
    }

    public Shape(Color color, boolean filled) {
        this.color = color;
        this.filled = filled;
    }

    public void setFilled(boolean filled) {
        if (!filled) {
            this.color = null;
        }
        this.filled = filled;
    }

    public boolean isFilled() {
        return this.filled;
    }

    public void setColor(Color color) {
        if (this.color == null) {
            this.filled = true;
        }
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
        String stateString = (this.isFilled() && this.color != null) ? "A forma está preenchida. Sua cor é " + this.color.name() : "A forma não está preenchida"; 

        return stateString;
    }
}