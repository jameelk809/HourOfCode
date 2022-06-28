import java.util.Scanner;

public class pre_sorted {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        try{
            int n = sc.nextInt(), i, count = 0;
            int[] arr = new int[n];
            for(i = 0; i < n; i++)
                arr[i] = sc.nextInt();
            int[] sorted_arr = new int[n];
            sorted_arr = sorted(arr, n);
            for(i = 0; i < n; i++){
                if(arr[i] == sorted_arr[i])
                    count++;
            }
            System.out.print(count);
        }
        finally{
            sc.close();
        }
    }
    

    public static int[] sorted(int[] arr, int n) {
        int temp;
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                if(arr[i] > arr[j]){
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        return arr;
    }
}
