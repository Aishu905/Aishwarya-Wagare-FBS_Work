import java.util.Scanner;

class Test {

	public static void main(String[] args) {
		Scanner input=new Scanner (System.in);
		int [] arr=new int[5];
		System.out.println("Enter element in array: ");
		for(int i=0;i<arr.length;i++)
		{
			arr[i]=input.nextInt();
		}
		System.out.println("Array elements are: ");
		for(int i=0;i<arr.length;i++)
		{
			System.out.println(arr[i]);
		}
	}

}
