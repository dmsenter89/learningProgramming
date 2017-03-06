import java.util.regex.*;

class FunWithStrings
{
    public static void main(String args[]){
        System.out.println("Hello and welcome to 'FunWithStrings'!");
        System.out.println("We'll start with string splitting :)");

        String teststr = "10x 10y 20x 20y 30x 30y 40x,40y";
        System.out.println("We'll test on d='" + teststr + "'.");

        String[] parts = teststr.split("\\s|,");
        System.out.println("We'll show the result from splitting now:");
        for (String s : parts){
            System.out.println("Element: '" + s +  "'.");
        }

        int nparts  = parts.length;
        System.out.println("As we see, the array has " + nparts + " elements.");

        if ((nparts %2)==0){
            System.out.println("We have an even, that is realistic, number of numbers.");
        } else {
            System.out.println("We don't have a realistic number of arguments.");
        }

        System.out.println();

        System.out.println("We'll now demonstrate regex pattern matching.");
        Pattern pat = Pattern.compile("([a-zA-Z]+)([^a-zA-Z]+)");
        String pdata = "M10 10 L20 20";
        Matcher m = pat.matcher(pdata);
        while (m.find()){
            System.out.println("Matching group: " + m.group(0));
            System.out.println("First part: " + m.group(1));
            System.out.println("Second part: " +  m.group(2));
            System.out.println();
        }
    }
    
}
