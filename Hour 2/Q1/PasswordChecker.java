import java.util.Scanner;
public class PasswordChecker {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        try{
            String password = new String();
            password = sc.nextLine();
            System.out.println(CheckPassword(password, password.length()));
        }
        finally{
            sc.close();
        }
    }
    public static int CheckPassword(String password, int len){
        int num = 0, cap = 0, flag = 0, i;
        if (len >= 4){
            flag = 1;
            if(password.charAt(0) >= 48 && password.charAt(0) <= 57)
                flag = 0;
            for(i = 0; i < len; i++){
                if(password.charAt(i) >= 48 && password.charAt(i) <= 57)
                    num++;
                if(password.charAt(i) >= 64 && password.charAt(i) <= 90)
                    cap++;
                if(password.charAt(i) == ' ' || password.charAt(i) == '/')
                    flag = 0;
            }
            if(num < 1 || cap < 1)
                flag = 0;
        }
        return flag;
    }
}
