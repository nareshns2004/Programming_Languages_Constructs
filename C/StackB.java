import java.util.*;
public class StackB {

public static void pushAtBottom(Stack<Integer> s, int data){

            if(s.isEmpty()){
                s.push(data);

                return;
            }

            int top = s.pop();
            pushAtBottom(s, data);
            s.push(top);

}

public static void reverseStack(Stack<Integer> s){

    if(s.isEmpty()){
        return;
    }

    int top = s.pop();
    reverseStack(s);
    pushAtBottom(s,top);

}

public static String reverseString(String s){
        Stack<Character> cs = new Stack<>();
        int id = 0;
        while(id<s.length()){
            cs.push(s.charAt(id));
            id++;
        }

        StringBuilder res = new StringBuilder("");

        while(!cs.isEmpty()){
            char curr = cs.pop();
            res.append(curr);
        }

        return res.toString();

}
    public static void main(String[] args){
       
        Stack<Integer> s = new Stack<>();

        s.push(1);
        s.push(2);
        s.push(3);

        System.out.println(s);
        reverseStack(s);
        System.out.println(s);
    }
}
