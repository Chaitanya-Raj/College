package a16;
class fibonacci
{
    int fibo(int num)
    {
        if((num==0)||(num==1))
            return num;
        else
            return (fibo(num-1)+fibo(num-2));
    }

    void fibor(int num)
    {
        int next,a=0,b=1;
        if(num==0)
        System.out.println("empty!");

        else if(num==1)

        System.out.println(a);

        else if(num>1)
        {
            System.out.println("\n" + a+" \n\n"+b + "\n");
            for(int i=2; i<num; i++)
            {
                next=a+b;
                a=b;
                b=next;
                System.out.println(next + "\n");
            }
        }
    }
}