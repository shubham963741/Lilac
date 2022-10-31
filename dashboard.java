package ProjectX;

interface dashboardone
{
	void total(int n);    
}

class Arithmetic implements dashboardone
{
	public void total(int n)
	{
		int a=n*1000;//base of 4000 is 10000
		System.out.println("The total rooms available are "+n+" and the expected revenue to be booked is "+a+"\n");  
	}
	void display()
	{
		System.out.println("Estimations as per base rate of 25% @ Rs.4000/room\n");         
	}
}
class ToTestInt
{
	void display()
	{
	 System.out.println("---------------------------Expected Sales Data - Assuming 100% oversubscription--------\n");
	 System.out.println("Hotel Inventory -> Total = 400 rooms");
	 dashboardone obj=new Arithmetic();                    
	 obj.total(400);
	 Arithmetic obj2=new Arithmetic();             
	 obj2.display();
	}
}
public class dashboard
{   
    public static void main(String[] args) 
	{
		ToTestInt obj1=new ToTestInt();
		obj1.display();
    }

}