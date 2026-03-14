public class MainPrintf {

    public static int myfunc(int x, int y) {
        int z;
        z = 2 * x - y;
        return z;
    }

    public static void main(String[] args) {

        int[] a = {1, 2, 3, 4, 5};
        int b = 0;
        int c = 0;

        System.out.printf("c=%d, a1=%d, a5=%d\n", c, a[1], a[5]);
        c = a[1] + a[5];
        System.out.printf("c=%d, a1=%d, a5=%d\n", c, a[1], a[5]);

        System.out.printf("b=%d, c=%d, a1=%d\n", b, c, a[1]);
        b = c + a[1];
        System.out.printf("b=%d, c=%d, a1=%d\n", b, c, a[1]);

        b = myfunc(b, c);

        System.out.printf("b=%d\n", b);
    }
}
