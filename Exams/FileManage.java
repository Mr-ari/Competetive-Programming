import java.io.*;
import java.util.ArrayList;
class FileManage {
    
    static public File creatFile(){
        File fp = new File("visitors.txt");
        return fp;
    }

    static public void writeFile(File f,String record){
        try{
            BufferedWriter fos= new BufferedWriter(new FileWriter(f,true));
            record += ";";
            fos.write(record);
            fos.close();
        }
        catch(Exception e){
            System.out.println(e);
        }
        

    }

    static public String [] readFile(File f){
        ArrayList <String> record = new ArrayList<>(); 
        StringBuilder sb = new StringBuilder("");
        
        try{
            FileInputStream fin = new FileInputStream(f);
            int i = 0;
            while ((i = fin.read()) != -1){
                if((char)i == ';'){
                    record.add(sb.toString());
                    sb.setLength(0);
                }
                else{
                    sb.append((char)i);
                }
            }
            fin.close();
        }
        catch(Exception e) {System.out.println(e);}
        String [] res = new String [record.size()];
        for(int i=0;i<record.size();i++) res[i] = record.get(i);
        return res;
    } 


}