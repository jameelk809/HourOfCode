import java.util.Scanner;
class pond_blocks{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        try{
            int n, i,j=0;
            n = sc.nextInt();
            int[] arr = new int[n+1];
            for(i = 1; i <= n; i++)
                arr[i] = i;
            while(n>1){
                j = 2*j+1;
                n/=2;
            }
            System.out.println(arr[j+1]);
        }
        finally{
            sc.close();
        }
    }
}