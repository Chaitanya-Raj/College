class Array2D
{
    public static void main(String[] args){
        int[][] x={{1},{1,2,3},{1,2}};
        System.out.println("length of main array");
        System.out.println(x.length+"\n");
        for(int i=0;i<3;i++){
            System.out.println("length of sub array "+(i+1));
            System.out.println(x[i].length);
        }
    }
}