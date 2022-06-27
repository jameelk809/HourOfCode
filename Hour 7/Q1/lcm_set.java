import java.util.Scanner;

public class lcm_set {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        try{
            int n = sc.nextInt(), i, max = -1;
            int[] arr = new int[n];
            int[] lcm_list = new int[n-1];
            for(i = 0; i < n; i++)
                arr[i] = sc.nextInt();
            for(i = 0; i < n-1; i++){
                lcm_list[i] = lcm(arr[i], arr[i+1]);
                if(lcm_list[i] > max)
                    max = lcm_list[i];
            }
            System.out.print(max);
        }
        finally{
            sc.close();
        }
    }

    public static int gcd(int x, int y){
        if (y == 0)
            return x;
        else 
            return gcd(y, x % y);
    }

    public static int lcm(int x, int y){
        return (x*y)/gcd(x, y);
    }

}
