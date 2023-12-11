import java.lang.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        // YOUR CODE GOES HERE
        // Please take input and print output to standard input/output (stdin/stdout)
        // DO NOT USE ARGUMENTS FOR INPUTS
        // E.g. 'Scanner' for input & 'System.out' for output
        
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        while(t-- > 0) {
            String A = scan.next();
            boolean flag = true;
            Stack<Character> myStack = new Stack<>();
            for(int i=0; i<A.length(); i++) {
                
                if(isOpening(A.charAt(i))) {
                    myStack.push(A.charAt(i));
                } else if(myStack.empty() || (! isMatching(myStack.peek(), A.charAt(i)))) {
                    flag = false;
                    break;
                } else {
                    myStack.pop();
                }
                
            }
            if(flag == false) {
                System.out.println("0");
            } else {
                if(myStack.empty()) {
                    System.out.println("1");
                } else {
                    System.out.println("0");
                }
            }
        }
        
        
    }
    
    static boolean isOpening(char a) {
        return (a=='(') || (a=='{') || (a=='[');
    }
    
    static boolean isMatching(char a, char b) {
        return (a=='(' && b==')') || (a=='{' && b=='}') || (a=='[' && b==']');
    }
    
    
}