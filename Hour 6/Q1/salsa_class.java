import java.util.Scanner;

public class salsa_class{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        try{
            String queue_A = sc.nextLine();
            String queue_B = sc.nextLine();
            int len = queue_A.length(), i, count = 0;
            for(i = 0; i < len; i++){
                if(queue_A.charAt(i) != queue_B.charAt(i))
                    count++;
            }
            System.out.print(count*100/len);
        }
        finally{
            sc.close();
        }
    }
}