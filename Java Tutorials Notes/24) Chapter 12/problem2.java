package message;

class msg {
    public void display(){
        System.out.println("This is my Scanner Class");
    }
}

public class problem2 {
    public static void main (String[] args){
        java.util.Scanner sc = new java.util.Scanner(System.in);
        msg m = new msg();
        m.display();
        System.out.println("Enter Your number:");
        int a = sc.nextInt();
        System.out.println("You have entered number is: " + a);
        
    }
}