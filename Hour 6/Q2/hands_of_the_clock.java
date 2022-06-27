import java.util.Scanner;

public class hands_of_the_clock{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        try{
            String time = sc.nextLine();
            int h, m;
            float h_angle, m_angle, angle;
            String[] t = time.split(":");
            h = (int)((t[0].charAt(0)-'0')*10 + t[0].charAt(1) - '0');
            m = (int)((t[1].charAt(0)-'0')*10 + t[1].charAt(1) - '0');
            h_angle = 0.5f * (60 * h + m);
            m_angle = 6 * m;
            angle = Math.abs(h_angle - m_angle);
            angle = Math.min(360 - angle, angle);
            System.out.println(angle);
        }
        finally{
            sc.close();
        }
    }
}