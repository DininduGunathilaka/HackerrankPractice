import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    
    public static void main(String[] args) {
        String s;
        Scanner scanner = new Scanner(System.in);
        int t= scanner.nextInt();
        for(int i=0;i<t;i++){
            s = scanner.next();
             for(int j=0; j<s.length();j++){
                 if(j%2==0){
                     System.out.print(s.charAt(j));
                 }
            }
             System.out.print(" ");
             for(int j=0; j<s.length();j++){
                 if(j%2!=0){
                     System.out.print(s.charAt(j));
                 }
            }
            System.out.println("");
            
        }
        
    }
}

