import java.util.Scanner;

public class adjacent_XOR{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        try{
            int n = sc.nextInt();
            int rem, i = 0, len;
            // Integer.toBinaryString(n);
            int[] binary = new int [30];
            while(n > 0){               //binary in reversed(wrong) order
                rem = n % 2;
                binary[i] = rem;
                i++;
                n /= 2;
            }
            len = i;

            int[] XOR_result = new int[len];
            XOR_result[0] = binary[0] ^ 1;
            for(i = 1; i < len; i++){
                XOR_result[i] = binary[i] ^ binary[i-1];
            }

            int res = 0;
            for(i = 0; i < len; i++)
                res += XOR_result[len-i-1]*(Math.pow(2, (len-i-1)));
            System.out.println(res);
        }
        finally{
            sc.close();
        }
    }
}