public class Account {
    private double balance;
    private double interest;

    public Account(){
        balance = 0.0;
        interest = 0.0;
    }

    public Account(double startBal){
        balance = startBal;
        interest = 0.0;
    }

    public void makeDeposit (double deposit){
        balance += deposit;
    }

    public void makeWithdrawal(double withdraw){
      balance -= withdraw;
    }

    public double getBalance(){
        return balance;
    }

}
