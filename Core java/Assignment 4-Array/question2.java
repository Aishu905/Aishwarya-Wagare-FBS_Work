import java.util.Scanner;

class question2 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int [] arr=new int[5];
		System.out.println("Enter elements in array:");
		for(int i=0;i<arr.length;i++)
		{
			arr[i]=sc.nextInt();
		}
		System.out.println("Revere array are:");
		for(int i=0;i<arr.length/2;i++)
		{
			int temp;
			temp=arr[i];
			arr[i]=arr[arr.length-1-i];
			arr[arr.length-1-i]=temp;
		}
		for(int i=0;i<arr.length;i++)
		{
			System.out.println(arr[i]);
		}
	}

}
