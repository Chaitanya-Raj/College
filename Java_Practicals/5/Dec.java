class Stack
{
	int stck[]=new int [32];
	int tos;
        Stack()
        {
            tos=-1;
        }
        void push(int item)
        {
            if(tos==31)
            System.out.println("Stack is full");
            else
            stck[++tos]=item;
        }
        int pop()
        {
            if(tos < 0)
            {
                System.out.println(" Stack underflow");
                return 0;
            }
            else
                return stck[tos--];
        }
        boolean isempty()
        {
            if(tos == -1)
            return true;
            else
            return false;
        }
}

class DectoBin
{
    public static void main(String args[])
    {
        Stack st=new Stack();
        int num=4;
        while(num!=0)
        {
            int d=(num%2);
            st.push(d);
            num /= 2;
        }
        while(!st.isempty())
        {
            System.out.println(st.pop());        
        }
    }
}