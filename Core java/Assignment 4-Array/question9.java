import java.util.Scanner;

class question9 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int[] arr1=new int[5];
		int[] arr2=new int[5];
		int[] arr3=new int[5];
		System.out.println("Enter element in array 1:");
		for(int i=0;i<arr1.length;i++)
		{
			arr1[i]=sc.nextInt();
		}
		System.out.println("Enter element in array 2:");
		for(int i=0;i<arr2.length;i++)
		{
			arr2[i]=sc.nextInt();
		}
		System.out.println("Sum of 1 and 2 array is stored in 3rd array: ");
		for(int i=0;i<arr3.length;i++)
		{
			arr3[i]=arr1[i]+arr2[i];
			System.out.println(arr3[i]);
		}
	}

}
