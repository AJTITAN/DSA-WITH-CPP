class box {
	protected int l, w, h;
	//Base Constructor - non parameterized
	public box() {
		l=0;
		w=0;
		h=0;
	}
	public box(int x1, int x2, int x3) {
	//Base Constructor - Parameterized
		l=x1;
		w=x2;
		h=x3;
	}
	public void input() {
	//input in base class - non parameterized
		l=0;
		w=0;
		h=0;
	}
	public void input(int x1, int x2, int x3) {
	//input in base class - parameterized
		l=x1;
		w=x2;
		h=x3;
	}
	public void display() {
	//display in base class
		System.out.println("the l, w, h are "+l+" "+w+" "+h);
		
	}
	

}
class derived extends box{
	protected int wt;

	
	public derived() {
	//Derived class constructor - non parameterized
		this(0,0,0,0);// call the parameterized constructor of this class
		wt=0;
	}
	public derived(int x1, int x2, int x3, int x4) {
		super(x1,x2,x3);//call the parameterized constructor of base class
		
		wt=x4;
	}


	public void input(int x1, int x2, int x3, int x4) {
		//Call the parameterized input of base class
		super.input(x1,x2,x3);
		
		wt=x4;
	}
	public void display() {
		//call the display function of base class
		super.display();
		//System.out.println("And the l, w, h, wt are "+l+" "+w+" "+h+" "+wt);
		System.out.println("and the weight is "+wt);
		
	}
	
	
}

public class box_demo {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		box obj1=new box(10,20,30);
		obj1.display();
		
		derived obj2=new derived(1,2,3,4);
		obj2.display();
		obj2.input(100,200,300,400);
		obj2.display();
		
		System.out.println("Function overriding");
		box ref= new derived(5,6,7,8);
		ref.display();

	}

}
