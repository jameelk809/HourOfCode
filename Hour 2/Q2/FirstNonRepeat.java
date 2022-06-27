import java.util.Scanner;
public class FirstNonRepeat {
    public static void main(String[] args) {
        String str = new String();
        Scanner sc = new Scanner(System.in);
        try{
            str = sc.next();
            System.out.println(FirstRepeat(str));
        }
        finally{
            sc.close();
        }
    }


    public static char FirstRepeat(String str){
        int i;
        int[] freq = new int[256];
        for(i = 0; i < str.length(); i++)
            freq[str.charAt(i)]++;
        for(i = 0; i < str.length(); i++){
            if(freq[str.charAt(i)] == 1)
                return str.charAt(i);
        }
        return '0';
    }
}
