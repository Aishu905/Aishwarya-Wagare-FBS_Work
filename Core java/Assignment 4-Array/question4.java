import java.util.Scanner;

class question4 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int[] arr=new int[5];
		System.out.println("Enter element in array:");
		for(int i=0;i<arr.length;i++)
		{
			arr[i]=sc.nextInt();
		}
		System.out.println("Prime no are:");
		for(int i=0;i<arr.length;i++)
		{
			int flag=0;
			for(int j=2;j<i;j++)
			{
				if(arr[i]%j==0)
					flag=1;
				break;
			}
			if(flag==0)
				System.out.println(arr[i]);
		}
	}

}
