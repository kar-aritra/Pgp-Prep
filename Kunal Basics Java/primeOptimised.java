import java.util.Scanner ;

public class primeOptimised {
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the numbber = ");

        int n = sc.nextInt();

        boolean p = false;

        for(int i=2; i*i<=n; i++){
            if(n%i ==0){
                p=true;
                System.out.println("Not prime");
                break;
            }
            else{
                continue;
            }
        }

        if(p==false){
            System.out.println("Prime");
        }
    }
}