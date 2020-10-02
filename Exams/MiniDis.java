import java.util.*;
class MiniDis {
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();

        String [] name = new String[n];
        int [] price = new int[n];
        int [] dis = new int[n];
        int [] value = new int[n];

        for(int i = 0;i<n;i++){
            StringTokenizer st = new StringTokenizer(sc.nextLine(),",");
            name[i] = st.nextToken();
            price[i] = Integer.valueOf(st.nextToken());
            dis[i] = Integer.valueOf(st.nextToken()); 
        }

        int minDis = 1000000000;
        for(int i=0;i<n;i++){
            int discount = (price[i]*dis[i])/100;
            if(discount < minDis) minDis = discount;
            value[i] = discount;
        }

        String res="";
        for(int i=0;i<n;i++){
            if(value[i] == minDis) res += (name[i]+",");
        }
        System.out.println(res.substring(0,res.length()-1));
    }

}