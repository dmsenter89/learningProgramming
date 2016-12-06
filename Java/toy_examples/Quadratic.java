public class Quadratic {
  public static void main(String[] args) {
    double b = Double.parseDouble(args[0]);
    double c = Double.parseDouble(args[1]);
    double d = Math.sqrt(b*b-4.0*c);
    System.out.println((-b+d)/2.0);
    System.out.println((-b-d)/2.0);
  }
}
