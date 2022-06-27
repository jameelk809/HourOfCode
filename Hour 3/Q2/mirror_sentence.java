import java.util.Scanner;

public class mirror_sentence {
    
    public static String rev_sentence(String sentence){
        String rev_sentence = "";
        String word = "";
        for(int i = 0; i < sentence.length(); i++){
            if(sentence.charAt(i) == ' '){
                rev_sentence = " " + word + rev_sentence;
                word = "";
            }
            else
                word += sentence.charAt(i);
        }
        rev_sentence = word + rev_sentence;
        return rev_sentence;
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        try{
            String sentence = "Coding is awesome";
            // sentence = sc.nextLine();
            System.out.print(rev_sentence(sentence));
        }
        finally{
            sc.close();
        }
    }
}
