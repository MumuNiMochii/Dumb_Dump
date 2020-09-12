package test.pack;

import java.util.Scanner; //can also use java.util.* to 'mention others' just like in CSS
import static java.lang.System.out;

public class Test {

	public static void main(String[] args) {
		System.out.println("What is your name?");
		
		System.out.println("Start by inputting your first name:");
		Scanner fN = new Scanner(System.in);
		String firstname = fN.nextLine();
		
		System.out.println("Next, input your middle name:");
		Scanner mN = new Scanner(System.in);
		String middlename = mN.next(); //this is the string for middlename; to be used in array to get its initial
		//make a char array to get middlename's initial letter //mnNum stands for middlename's number
		int mNnum = middlename.length(); //I recalled using .length() in C++ so yeah I added this xD
		char mInit[] = new char[mNnum]; //so regardless of middlename's length, the array limit will be right
		middlename.getChars(0, 1, mInit, 0); //data: (starting point, numbers to take, destination 'mInit', where to put inside array)  //just same as .substr() in C++ //also, mInit's 'Init' stands for initial xD
		
		System.out.println("Next, input your last name:");
		Scanner lN = new Scanner(System.in);
		String lastname = lN.nextLine();
			
		//message
		System.out.println(("Hello ")+(firstname)+(" ")+(mInit[0])+(". ")+(lastname)+("!"));
		
		//OVERALL IT WAS SUCCESSFUL!
		//Furthermore, I just realized that I should use arrays too on first and surname, you know, for cases in which it consists of more than 1 word
		//In order to get all the input names is what I meant what I mentioned above
		//Arrays really does not work, I need to find sometime like the .getline() from C++
		//.next() refers to 'next word' to be detected by the scanner, while .nextLine() refers to the 'next words within the whole line'
		//Thereby getting the String regardless of space

	}

}
