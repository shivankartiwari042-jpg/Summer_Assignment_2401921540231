import java.util.Random;

abstract class Compartment {
    public abstract String notice();
}

class FirstClass extends Compartment {
    @Override
    public String notice() {
        return "First Class: Please maintain silence and enjoy your journey.";
    }
}

class Ladies extends Compartment {
    @Override
    public String notice() {
        return "Ladies Compartment: Reserved exclusively for women passengers.";
    }
}

class General extends Compartment {
    @Override
    public String notice() {
        return "General Compartment: Please cooperate and maintain cleanliness.";
    }
}

class Luggage extends Compartment {
    @Override
    public String notice() {
        return "Luggage Compartment: Goods and luggage only.";
    }
}

public class TestCompartment {
    public static void main(String[] args) {
        Compartment[] c = new Compartment[10];
        Random rand = new Random();

        for (int i = 0; i < c.length; i++) {
            int n = rand.nextInt(4) + 1; 

            switch (n) {
                case 1:
                    c[i] = new FirstClass();
                    break;

                case 2:
                    c[i] = new Ladies();
                    break;

                case 3:
                    c[i] = new General();
                    break;

                case 4:
                    c[i] = new Luggage();
                    break;
            }
        }

        for (int i = 0; i < c.length; i++) {
            System.out.println("Compartment " + (i + 1) + ": "
                    + c[i].notice());
        }
    }
}