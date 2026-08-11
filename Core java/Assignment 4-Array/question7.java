import java.util.Scanner;

class question7 {

	public static void main(String[] args) {
		Scanner sc=new Scanner (System.in);
		 int[] arr=new int[5];
		 
		 System.out.println("Enter element in array:");
		 for(int i=0;i<arr.length;i++)
		 {
			 arr[i]=sc.nextInt();		 
	     }
	     int ele=23;
	     int flag=0;
	     for(int i=0;i<arr.length;i++)
	     {
	    	 if(arr[i]==ele)
	    		 flag=1;
	    	 break;
	     }
	     if(flag==1)
	    	 System.out.println("Number is found");
	     else
	    	 System.out.println("Number is not found");

}
}
