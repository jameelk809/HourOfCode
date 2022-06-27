import java.util.Scanner;

class gaming_hub {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N, i, count = 0;
        try {
            N = sc.nextInt();
            int[] scores = new int[N];
            int[] health = new int[2];

            for (i = 0; i < N; i++)
                scores[i] = sc.nextInt();
            for (i = 0; i < 2; i++)
                health[i] = sc.nextInt();
                

            for (i = 0; i < N; i++) {
                if (health[0] % scores[i] == 0 && health[1] % scores[i] == 0)
                    count++;
            }
            System.out.println(count);
        } 
        finally {
            sc.close();
        }
    }
}