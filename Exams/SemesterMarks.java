import java.util.Scanner;

class SemesterMarks {
    
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter no. of semester:");
        int sem = sc.nextInt();

        int[] semSub = new int [sem];
        int[] result = new int [sem];

        for(int i=0;i<sem;i++){
            System.out.println("Enter no. of subjects in "+(i+1)+" semester:");
            semSub[i] = sc.nextInt();
        }

        for(int i=0;i<sem;i++){
            System.out.println("Marks obtained in semester "+(i+1)+":");
            int max = -1;
            int [] marks = new int[semSub[i]];
            for(int j=0;j<semSub[i];j++){
                marks[j] = sc.nextInt(); 
            }

            for(int j=0;j<semSub[i];j++){
                int num = marks[j];
                if(num>=0 && num <= 100) {
                    if(num > max ) max = num;
                }
                else {
                    System.out.println("You have Entered Invalid mark.");return;
                }
            }

            result[i] = max; 
        }


        for(int i=0;i<sem;i++){
            System.out.println("Maximum mark in "+(i+1) + " semester:"+result[i]);
        }
    }
}