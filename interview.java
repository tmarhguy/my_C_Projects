import java.util.*;

public class interview{
    public static void main(String[] args){
        Scanner scan = new Scanner (System.in);
        String input = scan.next();
        scan.close();

        int size ;
        int i = 0;

        StringBuilder result = new StringBuilder();
        StringBuilder sizeBuilder = new StringBuilder();

        while (i < input.length()){
            char letter = input.charAt(i);
            i++;
            
            sizeBuilder.setLength(0);
            while(input.length() > i && Character.isDigit(input.charAt(i))){
                sizeBuilder.append(input.charAt(i));
                i++;
            }

            size = Integer.parseInt(sizeBuilder.toString());

            for (int j = 0; j< size; j++){
                result.append(letter);
            }    

        }

        System.out.println("Result: " + result.toString());
    }
}