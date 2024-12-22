class variables1 {
    int a=10;
    int r;
    float f;
    static int b=20;
    public static void main(String[] args)
    {
        int c=30;
        variables1 ob1=new variables1();
        System.out.println(ob1.a);
        System.out.println(ob1.r);
        System.out.println(ob1.f);
        System.out.println(b);
        System.out.println(c);
        ob1.a=1000;
        b=2000;
        System.out.println(ob1.a);
        System.out.println(b);
        variables1 ob2=new variables1();
        System.out.println(ob2.a);
        System.out.println(b);

    



    }
    
}
