import java.util.Scanner;

class question1 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int[] arr=new int[5];
		System.out.println("Enter element in array:");
		for(int i=0;i<arr.length;i++)
		{
			arr[i]=sc.nextInt();
		}
		System.out.println("Even no are:");
		for(int i=0;i<arr.length;i++)
		{
			if(arr[i]%2==0)
				System.out.println(arr[i]);
		}
		System.out.println("Odd no are:");
		for(int i=0;i<arr.length;i++)
		{
			if(arr[i]%2!=0)
				System.out.println(arr[i]);
		}
	}

}
