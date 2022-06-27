import java.util.Scanner;

class convert_to_palindrome {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        try{
            String str = sc.nextLine();
            System.out.println(convert_palindrome(str));
        }
        finally{
            sc.close();
        }
    }

    public static boolean isPalindrome(String str) {
        int i = 0, j = str.length() - 1;
        while (i < j) {
            if (str.charAt(i) != str.charAt(j))
                return false;
            i++;
            j--;
        }
        return true;
    }
    
    public static String convert_palindrome(String str){
        if(isPalindrome(str))
            return "0";
        int length = str.length(), res = 0, i, j = 0;
        String tempstr = new String();
        String result = new String();
        while(length > 0){
            tempstr = "";
            result = "";
            for(i = j; i < str.length(); i++)
                tempstr += str.charAt(i);
            if(isPalindrome(tempstr)){
                res = j;
                break;
            }
            j++;
            length--;
        }
        for(i = res-1; i >= 0; i--)
            result += str.charAt(i);
        return result;
    }
}
