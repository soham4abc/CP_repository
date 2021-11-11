
class outer {
    int a=123;
    void dekhano(){
        System.out.println("From outer class"+a);
    }

}
class csdm{
    public static void main (String args[]) {

        outer obj=new outer();
        System.out.println("Displaying from another class"+obj.a);
        
    }
}
