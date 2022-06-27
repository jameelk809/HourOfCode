import java.util.Scanner;
class key_formula{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        try{
            int[] arr = new int[3];
            int i, min_th = 100, max_hu = -1, min_te = 100, max_on = -1, th, hu, te, on;
            for(i = 0; i < 3; i++)
                arr[i] = sc.nextInt();
            for(i = 0; i < 3; i++){
                th = arr[i] / 1000;
                hu = (arr[i] % 1000)/100;
                te = (arr[i] % 100)/10;
                on = arr[i] % 10;
                if (th < min_th)
                    min_th = th;
                if (hu > max_hu)
                    max_hu = hu;
                if (te < min_te)
                    min_te = te;
                if (on > max_on)
                    max_on = on;
            }
            System.out.println(min_th*1000 + max_hu*100 + min_te*10 + max_on);
        }
        finally{
            sc.close();
        }
    }
}