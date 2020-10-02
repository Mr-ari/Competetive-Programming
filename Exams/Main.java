import java.io.*;
import java.util.*;


class Main {
    public static void main(String[] args) {
        int loop = 1;
        Scanner sc = new Scanner (System.in);
        do{
            System.out.println("Enter Name");
            String name = sc.nextLine();
            System.out.println("Enter Phone Number");
            String ph = sc.nextLine();
            System.out.println("Enter Email");
            String email = sc.nextLine();
            System.out.println("Do you want to enter another record(yes/no)");
            String op = sc.nextLine();
            File fp = FileManage.creatFile();
            FileManage.writeFile(fp,name+","+ph+","+email);

            if(op != "yes"){
                loop = 0;
                fp = FileManage.creatFile();
                String[] rec = FileManage.readFile(fp);
                for(int i=0;i<rec.length;i++){
                    System.out.println(rec[i]);
                }
            }

        }
        while(loop != 0);

    }
}