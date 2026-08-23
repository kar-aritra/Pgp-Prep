import java.util.Scanner ;

public class prime{
    public static void main(String [ ] args){
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the number = ");
        int num = sc.nextInt();

        boolean a = false;
        for(int i=2; i<=num/2;i++){
            if(num%i == 0){
                System.out.println("Not Prime");
                a= true ;
                break;
            }
            else{
                continue;
            }
        }
        if(a == false){
            System.out.println("Prime");
        }
    }
}
