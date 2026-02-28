#include<bits/stdc++.h>
 using namespace std;
class Student
{
public:
      string name;
        // একটি স্টুডেন্ট ক্লাস লিখা হয়েছে যার মধ্যে স্টুডেন্ট এর নাম, রোল এবং মার্ক্স থাকবে।
  int roll;
      int marks;
      Student(string name, int roll, int marks)  // কন্সট্রাক্টর
    {
            this->marks = marks;
            this->roll = roll;
            this->name = name;  
    }
};
class cmp     // কাস্টম কম্পেয়ার ক্লাস
    {
        public :
  bool operator()(Student a, Student b)  // কাস্টম কম্পেয়ার ক্লাসের মধ্যে একটি অপারেটর ফাংশন নেওয়া হয়েছে। এক্ষেত্রে অবশ্যই ফাংশনের নাম operator হতে হবে এবং রিটার্ন টাইপ bool হতে হবে। ফাংশনে কোন প্যারামিটার দিতে হলে আগে operator() লিখে তারপর আবার ব্র্যাকেট দিয়ে প্যারামিটার দিতে হবে। 
  {
    if (a.marks > b.marks)   
      return true;
  // যখন ট্রু রিটার্ন হয় তখন প্রায়োরিটি কিউ চেঞ্জ করে। তাই আমরা যেখানে চেঞ্জ করতে চাব সেখানে ট্রু রিটার্ন করব।
    else if (a.marks < b.marks)
      return false;
  // ফলস রিটার্ন হলে প্রায়োরিটি কিউ কোন চেঞ্জ করে না।
    else    
     {
     if (a.roll > b.roll)
        return true;
     else  return false;
       }
}
}
;
int main()
{
      int n;
      cin >> n;
      priority_queue<Student, vector<Student>, cmp> pq;
      // প্রায়োরিটি কিউ নেওয়া হচ্ছে কাস্টম কম্পেয়ার ক্লাস টাইপের।
  for (int i = 0; i < n; i++)     // স্টুডেন্ট এর ডাটা ইনপুট নেওয়া হচ্ছে।
 
    {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            Student obj(name, roll, marks);
            pq.push(obj);
         
    }
      while (!pq.empty())  // প্রায়োরিটি কিউ প্রিন্ট করা হচ্ছে।
 
    {
            cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            pq.pop();
         
    }
    return 0;
}
