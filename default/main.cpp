#include <iostream>

using namespace std;

/*class Integer{
public:
    int val;
    Integer(int v=0){
        this->val=val;cout<<"constructor whit arg "<<v<<endl;//val=v;cout<<"constructor whit arg "<<v<<endl;
    }
};

/*class IntegerWrapper{
public:
    Integer val;
    IntegerWrapper(){
        val=0;cout<<"integerwrapper default constructor"<<endl;
    }


};*/

/*int *getPtrToFive()
{
    int *x= new int;
    *x=5;
    return x;
}
int main()
{
    //Integer i;//(3);
    //Integer j(3);//=5;
    int *p =getPtrToFive();
    cout<<*p<<endl;
    delete p;//necesita el delete si no colapsa

}*/

/*int main(){
    int numItems;
    cout<<"how many items? ";
    cin>> numItems;
    int *arr = new int[numItems];
    for(int i=0;i<numItems;++i){
            cout<<"enter item "<<i<<": ";
    cin>>arr[i];
    }
    for (int i=0;i<numItems;++i){
        cout<<arr[i]<<endl;
    }
    delete[] arr;
}*/
/*class Point{
public:
    int x,y;
    Point(){
        cout<<"constructor invoked"<<endl;

    }
    ~Point(){
        cout<<"destructor invoked"<<endl;

    }
};
*/
/*main(){
    /*Point *p= new Point;
    delete p;*/
    /*if(true){
        Point p;
    }
    cout<<"p out of scope"<<endl;
}*/

/*class IntegerArray{
public:
    int *data;
    int size;
};

int main(){
   IntegerArray arr;
   arr.size=2;
   arr.data=new int[arr.size];//constructor
   for(int i=0;i<arr.size;++i){
        cout<<"enter item "<<i<<": ";
        cin>>arr.data[i];
    }
    for (int i=0;i<arr.size;++i){
        cout<<arr.data[i]<<endl;
    }
   delete[] arr.data;
}*/

/*class IntegerArray{
public:
    int *data;
    int size;
    IntegerArray(int _size){
        arr.data=new int[arr.size];//constructor
        for(int i=0;i<arr.size;++i){
            cout<<"enter item "<<i<<": ";
            cin>>arr.data[i];
        }
        for (int i=0;i<arr.size;++i){
            cout<<arr.data[i]<<endl;
        }
    }
    ~IntegerArray(){
        delete[] arr.data;//destructor
    }
};

int main(){
   IntegerArray arr(2);
   a.data[0]=4; a.data[1]=2;
   if (true){
    IntegerArray b=a;
   }
   cout<<a.data[0]<<endl;
}*/

class IntegerArray{
public:
    int *data;
    int size;
    IntegerArray(int _size){
        data =new int[size];
        this->size=size;
    }
    ~IntegerArray(){
        delete[] data;//destructor
    }
};

int main(){
   IntegerArray a(2);
   a.data[0]=4; a.data[1]=2;
   if (true){
    IntegerArray b=a;
   }
   cout<<a.data[0]<<endl;
}


