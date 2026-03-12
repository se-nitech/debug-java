public class Main {

    public static int myfunc(int x, int y) {
        int z;
        z = 2 * x - y;
        return z;
    }

    public static void main(String[] args) {
        int[] a = { 1, 2, 3, 4, 5 };
        int b, c;

        c = a[1] + a[5];

        b = c + a[1];

        b = myfunc(b, c);

        System.out.println("b=" + b);
    }
}
