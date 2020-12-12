import java.util.*;
import java.io.*;

class a{
    static List<Integer> [] list;

    static int higher(int ind,int val){

        int ans=-1,i=0,j=list[ind].size()-1;

        while(i<=j){
            int mid=(i+j)/2;
            if(list[ind].get(mid)>=val){
                ans=list[ind].get(mid);
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        return ans;
    }

    public static void main(String [] args) throws IOException{
        FastScanner sc=new FastScanner();
        int t=sc.nextInt();

        while(t-->0){
            StringBuilder sb=new StringBuilder("");
            int n=sc.nextInt();
            int x=sc.nextInt();
            int [] a=sc.nextIntArray(n);

            list=new ArrayList[32];
            for(int i=0;i<=31;i++)list[i]=new ArrayList<>();

            for(int j=0;j<=31;j++){
                for(int i=0;i<n;i++){
                    int bit=(a[i]>>j)&1;
                    if(bit==1)list[j].add(i);
                }
           }


            for(int i=0;i<(n-1) && x>0;i++){
                for(int j=31;j>=0 && x>0;j--){
                    int bit=(a[i]>>j)&1;
                    if(bit==1){
                        Integer hIndex=higher(j,i+1);
                        hIndex=(hIndex==-1)?(n-1):hIndex;
                        a[i]^=(1<<j);
                        a[hIndex]^=(1<<j);
                        --x;
                    }
                }
            }
            if(x%2==1 && n==2){
                a[n-1]^=1;
                a[n-2]^=1;
            }
    
            for(int k : a)sb.append(k+" ");
            System.out.println(sb.toString().trim());
        }
    }
}

class FastScanner{	
    private int BUFFER_SIZE = 1 << 16;
   
   private  DataInputStream din;
   
   private  byte[] buffer;
   
   private int bufferPointer, bytesRead;
   
   public FastScanner() {
       din = new DataInputStream(System.in);
       buffer = new byte[BUFFER_SIZE];
       bufferPointer = bytesRead = 0;
   }

   public FastScanner( String file_name) throws IOException {
       din = new DataInputStream(new FileInputStream(file_name));
       buffer = new byte[BUFFER_SIZE];
       bufferPointer = bytesRead = 0;
   }
   
   public String readLine() throws IOException {
        byte[] buf = new byte[64];
       int cnt = 0, c;
       while ((c = read()) != -1) {
           if (c == '\n')
               break;
           buf[cnt++] = (byte) c;
       }
       return new String(buf, 0, cnt);
   }
   
   public String next() throws IOException{

       byte c = read();
       while(Character.isWhitespace(c)){
           c = read();
       }
       
       StringBuilder builder = new StringBuilder();
       builder.append((char)c);
       c = read();
       while(!Character.isWhitespace(c)){
           builder.append((char)c);
           c = read();
       }
       
       return builder.toString();
   }

   public int nextInt() throws IOException {
       int ret = 0;
       byte c = read();
       while (c <= ' ')
           c = read();
        boolean neg = (c == '-');
       if (neg)
           c = read();
       do {
           ret = ret * 10 + c - '0';
       } while ((c = read()) >= '0' && c <= '9');

       if (neg)
           return -ret;
       return ret;
   }
   
   public int[] nextIntArray( int n) throws IOException {
        int arr[] = new int[n];
       for(int i = 0; i < n; i++){
           arr[i] = nextInt();
       }
       return arr;
   }

   public long nextLong() throws IOException {
       long ret = 0;
       byte c = read();
       while (c <= ' ')
           c = read();
        boolean neg = (c == '-');
       if (neg)
           c = read();
       do {
           ret = ret * 10 + c - '0';
       } while ((c = read()) >= '0' && c <= '9');
       if (neg)
           return -ret;
       return ret;
   }
   
   public long[] nextLongArray( int n) throws IOException {
        long arr[] = new long[n];
       for(int i = 0; i < n; i++){
           arr[i] = nextLong();
       }
       return arr;
   }

   public char nextChar() throws IOException{
       byte c = read();
       while(Character.isWhitespace(c)){
           c = read();
       }
       return (char) c;	
   }
   
   public double nextDouble() throws IOException {
       double ret = 0, div = 1;
       byte c = read();
       while (c <= ' ')
           c = read();
        boolean neg = (c == '-');
       if (neg)
           c = read();

       do {
           ret = ret * 10 + c - '0';
       } while ((c = read()) >= '0' && c <= '9');

       if (c == '.') {
           while ((c = read()) >= '0' && c <= '9') {
               ret += (c - '0') / (div *= 10);
           }
       }

       if (neg)
           return -ret;
       return ret;
   }
   
   public double[] nextDoubleArray( int n) throws IOException {
        double arr[] = new double[n];
       for(int i = 0; i < n; i++){
           arr[i] = nextDouble();
       }
       return arr;
   }

   private void fillBuffer() throws IOException {
       bytesRead = din.read(buffer, bufferPointer = 0, BUFFER_SIZE);
       if (bytesRead == -1)
           buffer[0] = -1;
   }

   private byte read() throws IOException {
       if (bufferPointer == bytesRead)
           fillBuffer();
       return buffer[bufferPointer++];
   }

   public void close() throws IOException {
       if (din == null)
           return;
       din.close();
   }

}