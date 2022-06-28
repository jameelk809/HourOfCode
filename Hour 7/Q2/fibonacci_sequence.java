import java.util.Scanner;

public class fibonacci_sequence {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        try{
            int n = sc.nextInt(), i, count = 0;
            int arr[] = new int[n];
            for(i = 0; i < n; i++)
                arr[i] = sc.nextInt();
            for (int x : arr) {
                if(is_Fibonacci(x))
                    count++;
            }
            System.out.print(count);
        }
        finally{
            sc.close();
        }
    }
    
    public static boolean is_Perfect_Square(int K) {
        int s = (int)Math.sqrt(K);
        return ((s*s == K) ? true: false);
    }

    public static boolean is_Fibonacci(int R){
        return(is_Perfect_Square(5*R*R + 4) || is_Perfect_Square(5*R*R - 4));
    }
}
