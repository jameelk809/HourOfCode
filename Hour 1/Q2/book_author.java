import java.util.Scanner;
class book_author {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        try{
            String batch = new String();
            batch = sc.next().toLowerCase();
            int i, j, unique = 0, count;
            boolean flag = true;
            for(i = 0; i < batch.length(); i++){
                flag = true;
                count = 0;
                for(j = 0; j < batch.length(); j++){
                    if(batch.charAt(i) == batch.charAt(j))
                        count++;
                    if(count > 1){
                        flag = false;
                        break;
                    }
                }
                if(flag)
                    unique++;
            }
            System.out.println(unique);
        }
        finally{
            sc.close();
        }
    }
}
