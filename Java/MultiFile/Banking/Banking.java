import java.util.Scanner;

public class Banking {

    public static void main(String[] args){
        System.out.println("Welcome to my simple Banking app!");
        Account savings = new Account();
        System.out.println("what is your initial deposit?");
        Scanner in = new Scanner(System.in);
        double amt = in.nextFloat();
        if (amt<=0){
          throw new IllegalArgumentException();
        }
        savings.makeDeposit(amt);
        System.out.println("Your current balance: " + savings.getBalance());
        System.out.println("Do you want to make a deposit (d) or withdraw (w)?");
        char c = in.next().charAt(0);
        if (c=='d'){
          System.out.println("Pick an amount: ");
          amt = in.nextFloat();
          savings.makeDeposit(amt);
        } else if (c=='w') {
          System.out.println("Pick an amount: ");
          amt = in.nextFloat();
          savings.makeWithdrawal(amt);
        }
        System.out.println("Your new account balance is $" + savings.getBalance() + ".");

    }
}
