import java.util.*;   // actually, I only need the scanner from here.

public  class pipe {
  public static void main(String[] args) {
    Scanner scan = new Scanner(System.in); // scanner set to stdin

    String x;
    int ctr=1;
    while(scan.hasNextLine()) { // true as long as stdin has a new line
      x = scan.nextLine();      // this actually gets the new line
      System.out.println("Line " + ctr++  + ": " + x);
    }
  }
}
