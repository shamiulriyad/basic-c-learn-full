#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   /*
    cout << "Hello My world!" << endl;
    cout << "      !" << endl;
    cout << "     / !" << endl;
    cout << "    /  !" << endl;
    cout << "   /   !" << endl;
    cout << "  /    !" << endl;
    cout << " /_____!" << endl;
   */
/*
 
  string caracter_name = "tom";
  int caracter_age;
  caracter_age =50;
  cout <<"enter the man name : " << caracter_name<< endl;
  cout << "he was " << caracter_age <<"years old"<<endl;
  caracter_name ="niki";
  cout <<"he liked the name " << caracter_name << endl;
  cout <<"but did not loke being  " <<caracter_age << endl;
  cout << "he was " << caracter_age <<"years old"<<endl;
  */





            //strings



 /*
    string phrase = "Marvel stdio";
    cout << phrase.length();
    phrase[0]='B'; // 0 number index a b
    cout << phrase.find("stdio", 0); // whice position stdio start
    cout << phrase[0]; // whice letter stand in 0 number index
    cout << phrase.substr(8, 3);
    string phrasesub;
    phrasesub = phrase.substr(8, 3);
    cout << phrasesub;
  */



                // working with numbers

    /*
    int w_num =5;
    double d_num =5.5;
    //w_num += 80;
    //w_num -= 80;
    //w_num *= 80;
    //w_num /= 80;
   // w_num --;
   // w_num++;
    //d_num++;
   // cout << d_num;
    cout <<w_num;


      //cout << floor(4.8);
   // cout << round(4.6);
   // cout << ceil(4.6);
   // cout << pow(2, 5);
   //cout << sqrt(36);
   // cout << fmax(3 , 5 );
    cout << fmin(4,6);


    */


       //  gating user input 
       /*
       int age;
      cout << "enter your age : ";
      cin >>age ;

      cout << "you are " << age << "years old";

       string name;
      cout << "your name : ";
      getline (cin , name);

      cout <<"hello "<<name;
       */



            // build sum calculator

            /*
             double num1,num2;
            cout << "enter first number : ";
            cin >> num1;
            cout << "enter second number :";
            cin >> num2;

            cout << num1+num2;
            
            */

           // building a mad libs game/////
/*
           string color, plural_noun, celebraty;

           cout<<"enter a color";
            getline(cin , color  );
             cout<<"enter a plural noun : ";
            getline(cin, plural_noun);
             cout<<"enter the name of a celebraty : ";
             getline(cin, celebraty);

          cout<< "rose are" << color << endl;
          cout << plural_noun << " are blue " << endl;
            cout << "i love you " << celebraty << endl;
*/



            // function//..............................




            /*
            void sayhi(string name , int age, int roll )
          {
             cout << "hello " << name << "\n you are " << age << "\n your roll number is  " << roll <<endl;

                               }
                  int main()
               {

    sayhi("Riyad ", 20, 5);
     sayhi("Shaib ", 30, 3);
      sayhi("bashar ", 22, 1);
       sayhi("Munna ", 21, 4);
        sayhi("Tarek ", 24, 6);
         sayhi("shorif ", 23, 2);

            
            */

           //return statement................///////



         /*
         using namespace std;

double cube(double num){
    //double result = num* num *num;
    return num * num *num;
    return hello;


}
int main()
{

   // double ans = cube(5.0);
    cout << cube (5.0);


         */
  


     // if statements //................//


     /*
     bool ismale = false;

    bool istall = true;

    if(ismale && istall){
            cout << "you are a male and tall";
    }
    else if(ismale && !istall){
            cout << "you are a short male";

    }
    else if(!ismale && istall){
        cout << "you are a toll but not male";
    }

    else {
        cout << "you are not male and tall";
    }

     
     */

          //another if else statemant ///.....



    // find the max in 2 number ///......

          /*
          
          int getmax(int num1, int num2){
int result;

   if(num1 > num2 ){
        result = num1;
   }
   else  {
        result = num2;

   }
    return result;
}
int main()
{


   cout << getmax(2 , 5);


          
          */
     

     //find the max num in three

          /*
          int getmax(int num1, int num2 ,int  num3){
int result;

   if(num1 >= num2 && num1>= num3 ){
        result = num1;
   }
   else if(num2>=num1 && num2 >= num3)  {
        result = num2;

   }
   else {
    result = num3;
   }
    return result;
}
int main()
{


   cout << getmax(2 , 5, 10);

          
          */

    // simple calculator made //...........

    /*
   int num1, num2;
  char op;

  cout << "enter a number : ";
  cin >> num1;
  cout << "enter a operator : ";
  cin >>op;
  cout << "enter  2nd num : ";
  cin >> num2;

  int result;
  if(op=='+'){
    result = num1+num2;
  }
  else if(op=='-'){
    result = num1-num2;
  }
  else if(op=='*'){
    result = num1*num2;
  }
  else if(op=='/'){
    result = num1/num2;
  }
  else{
    cout << "invalide operator";
  }

  cout << result; 
    
    */



      //switch statement //.........

      /*
      
      string getdaynumber(int daynumber){

    string dayname;
     switch(daynumber){
     case 0:
     dayname ="sunday";
     break;

     case 1:
     dayname ="saturday";
     break;

     case 2:
     dayname ="tuesday";
     break;

     case 3:
     dayname ="monday";
     break;

     case 4:
     dayname ="wednesday";
     break;

     case 5:
     dayname ="thursday";
     break;
     case 6:
     dayname ="friday";
     break;
     default:
        dayname ="invalid day number";

     }

     return dayname;
 }

 int main()
 {
        int daynumber;
     cout <<  "enter the get day number : ";
     cin >> daynumber;

     string dayname = getdaynumber(daynumber);
     cout <<" The day is "  << dayname << endl;



      */



     // while loops.............///

    /* int index =1;
     while(index <= 5){
    cout << index << endl;
    index++;
     }
     */



    // do while loop////..........


    /*
      int index =1;
   do {
    cout << index << endl;
    index++;
     }
      while(index <= 5);
    */

     //INFINITY time guessing game........////

     /*
     
      int secretnum =7;
     int guess;


     do {
          cout <<  "enter the guess : ";
            cin >> guess;
     }

     while (secretnum != guess);

     cout << "you are win !";

     
     */


    // limited time guessin game///.....................


    /*
    
    int secretnum =7;
     int guess;
     int guesscont =0;
     int guesslimit = 3;
     bool outofguesses =false;


     while (secretnum != guess && !outofguesses){
            if(guesscont < guesslimit){
                    cout <<  "enter the guess : ";
                    cin >> guess;
                    guesscont++;

            } else {
                outofguesses =true;


            }

     }
     if(outofguesses){
            cout << "you lose!";

     }else {
         cout << "you win";

     }
    */




   // using for loops////.............


   /*
   
   
     for(int i=1; i <= 5; i++){
    cout << i << endl;

     }

   
   
   */


  // using for loops in array //.........


  /*
  
  int nums [] = {1,2, 3 ,5 ,6 ,7, 9 };
     for(int i=0; i <= 5; i++){
    cout << nums[i] << endl;
  
  */


       // exponent function.........................//


       /*
       
       int power(int basenum, int pownum){
    int result =1;
    for(int i=0; i < pownum; i++){
        result = result * basenum;
    }
    return result;

}

 int main()
 {
     cout << power(2, 3);
       
       */


      // 2d arrays and nested loops //.................//

      /*
       int numbergrid[3][2] = {

            {1, 2},
            {3, 4},
            {7, 8},
     };

     cout << numbergrid[2][0];
  
      */


      //nested loop//.....




     /*
     
      int numbergrid[3][2] = {

            {1, 2},
            {3, 4},
            {7, 8},
     };
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            cout << numbergrid[i][j];
        }
        cout <<endl;
    }
     */

    //pointer //........


    /*
    
     int age = 19;
     int *pAge =&age;
     double gpa =3.5;
     double *pGpa =&gpa;
     string name = "Riyad";
     string *pName = &name;


     //cout << *pAge;           // dereferencing 
      cout << *&gpa;

     //cout << pGpa;
    //cout << pName;

    */


    // classes and objects //.......

    /*
    
    class book{
         public:
             string title;
             string author;
             int pages;
};

 int main()
 {

     book book1;

     book1.title ="Harry portter";
     book1.author = "Jk rowling";
     book1.pages =500;


     book book2;

     book2.title ="Lord of the rings";
     book2.author = "Tolkein";
     book2.pages =500;


     cout << book2.title;


    
    */


      // constructor function //...........


/*

using namespace std;
class book{
         public:
             string title;
             string author;
             int pages;
             book(){
                 title = "no title";
                 author= "no author";
                 pages = 0;


             }
             book(string atitle, string aauthore, int apages ){
                 title = atitle;
                 author = aauthore;
                 pages = apages;
             }
};

 int main()
 {

     book book1("Harry portter","Jk rowling", 500);




     book book2("Lord of the rings","Tolkein",500);

     book book3;


     cout << book3.title;

*/

// object functions.........//


/*

using namespace std;

class student{

      public:
        string name;
        string major;
        double gpa;
        student(string aName, string aMajor, double aGpa){

            name = aName;
            major = aMajor;
            gpa = aGpa;
        }

        bool hashonors(){
        if(gpa>=3.5){
            return true;
        }
        return false;
        }
};

int main ()
{
    student stduent1("jim","business",2.4);

    student stduent2("pam","Art",3.6);


    cout << stduent1.hashonors();


*/


// getters and setters //.....

/*

using namespace std;

class Movie {
public:
    string title;
    string director;
    string rating;


    Movie(string atitle, string adirector, string arating) {
        title = atitle;
        director = adirector;
        setrating(arating);
    }


    void setrating(string arating) {
        if (arating == "G" || arating == "PG" || arating == "PG-13" || arating == "R" || arating == "NR") {
            rating = arating;
        } else {
            rating = "NR";
        }
    }


    string getrating() {
        return rating;
    }
};

int main() {

    Movie avengers("The Avengers", "Joss Whedon", "PG-13");


    avengers.setrating("dog");


    cout << "Movie Rating: " << avengers.getrating() << endl;

*/


  // Inheritance //.............


  /*
  class Chef {
public:
    void makeChicken() {
        cout << "The chef makes chicken." << endl;
    }

    void makeSalad() {
        cout << "The chef makes salad." << endl;
    }

    void makeSpecialDish() {
        cout << "The chef makes BBQ ribs." << endl;
    }
};


class ItalianChef : public Chef {
public:
    void makePasta() {
        cout << "The Italian chef makes pasta." << endl;
    }
};

int main() {
   
    Chef chef;
    chef.makeChicken();

    
    ItalianChef italianChef;
    italianChef.makePasta();

  
  */

    return 0;
}
