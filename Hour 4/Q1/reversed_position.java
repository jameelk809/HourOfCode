import java.util.Scanner;
public class reversed_position {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        try{
            String data = new String();
            String rev_data = new String();
            data = sc.next();

            int i, count = 0, n;
            n = data.length();
            for(i = n-1; i >= 0; i--)
                rev_data += data.charAt(i);
            for(i = 0; i < n; i++){
                if(data.charAt(i) == rev_data.charAt(i))
                    count++;
            }
            System.out.println(count);
        }
        finally{
            sc.close();
        }
    }
}
