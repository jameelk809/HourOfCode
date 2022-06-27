import java.util.Scanner;

public class base_number {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        try {
            // String code = "1 3 3 5 14 20 21 18 5 _ 3 15 4 5";
            // String code = "2 1 4 _ 3 1 20 @ # 459";
            String code = sc.nextLine();
            String[] message = code.split(" ");
            String dec_msg = "";
            for (int i = 0; i < message.length; i++) {
                if (message[i].equals("_"))
                    dec_msg += ' ';
                else if (message[i].equals("#"))
                    dec_msg += message[i + 1];
                else if ((i > 1) && (message[i - 1].equals("#")))
                    ;
                else if (Character.isDigit(message[i].charAt(0))) {
                    if (message[i].length() > 1)
                        dec_msg += (char) (64 + (message[i].charAt(0) - '0') * 10 + (message[i].charAt(1) - '0'));
                    else
                        dec_msg += (char) (64 + message[i].charAt(0) - '0');
                } else
                    dec_msg += message[i];
            }
            System.out.println(dec_msg);
        } finally {
            sc.close();
        }
    }
}
