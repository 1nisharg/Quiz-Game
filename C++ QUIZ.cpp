#include <iostream>
#include <string>

using namespace std;

int Guess;
int Total;

class Question
{
	private:
		string Question_Text;
		string Answer_1;
		string Answer_2;
		string Answer_3;
		string Answer_4;
		
		int Correct_Answer;
		int Question_score;
		
		public:
			void setValues (string,string,string,string,string,int,int);
			void askQuestion ();
};

int main ()
{
	cout << "****************************************" << endl;
	cout << "****************************************" << endl;
	cout << "************WELCOME TO C++ QUIZ*********" << endl;
	cout << "****************************************" << endl;
	cout << "****************************************" << endl;
	cout << "****************************************" << endl;
    cout << "*************BY- NISHARG N**************" << endl;
    cout << "****************************************" << endl;
    
    cout << "Press Enter to start the quiz...." << endl;
    cin.get();
    
    string Name;
    int Age;
    cout << "What's your name?" << endl;
    cin >> Name;
    
    cout << endl;
    cout << "How old are you?" << endl;
    cin >> Age;
    cout << endl;
    string Respond;
    cout << "Are you ready to take the quiz" << Name << "? Yes/No"  << endl;
    cin >> Respond;
    if (Respond=="Yes")
    {
    	cout << endl;
    	cout << "Ok, Good Luck!" << endl;
    	cout << endl;
	}
    else
	{
		cout << "Ok, GoodBye!" << endl;
		return 0;
		
	}
    
    Question q1;
    Question q2;
    Question q3;
    
    
    q1.setValues("what is the only function all c++ programs must contain?",
	            "start()",
	            "system()",
	            "main()",
	            "program()",
	            3,
	            10);
	            
	 q2.setValues("which of the following is correct comment to use",
				"*/comments*/",
				"/*comments*/",
				"**comments**",
				"{comments}",
				2,
				10);
				
	q3.setValues("the statement i++ is equivalent to:",
	"i=i+1",
	"i=i*1",
	"i=i-1",
	"i=i+i",
	2,
	11);
	
	q1.askQuestion();
	q2.askQuestion();
	q3.askQuestion();
	
	cout << "Your Total Score is" << Total << "out of 30" << endl;
	cout << endl;
	
	if(Total>=15)
	{
		cout << "Great you have passed the quiz!" << endl;
		cout << endl;
		cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
		cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
		cout << "        CONGRATULATIONS             " << endl;
		cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
		cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
		}    
		
		else
		{
			cout << "Sorry, Better luck next time" << endl;
		}
		return 0;
}
void Question::setValues(string q, string a1, string a2, string a3, string a4, int ca, int pa)
{
	Question_Text = q;
	Answer_1 = a1;
	Answer_2 = a2;
	Answer_3 = a3;
	Correct_Answer = ca;
	Question_score = pa;
}

void Question::askQuestion()
{

cout << endl;
cout << Question_Text << endl;
cout << "1." << Answer_1 << endl;
cout << "2." << Answer_2 << endl;
cout << "3." << Answer_3 << endl;
cout << "4." << Answer_4 << endl;
cout << endl;

cout << "what is your answer?" << endl;
cin>> Guess;
if (Guess == Correct_Answer)
{
	cout << endl;
	cout << "Great! you are correct." << endl;
	Total = Total + Question_score;
	cout << "Score:" << Question_score << "Out of" << Question_score << "!" << endl;
	cout << endl;
	
}

else 
{
	cout << endl;
	cout << "oh no, you are wrong" << endl;
	cout << "Score: 0" << "out of" << Question_score <<"!" << endl;
	cout << "The correct answer is" << Correct_Answer << "." << endl;
	cout << endl;
}
}
