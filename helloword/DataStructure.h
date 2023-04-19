using namespace std;

template <class A> class stack{
    private:
      A *items;
      int size;
      int top;
    public:
      stack(int n=10){
        top=-1;
        size=n;
        items=new A[size];
      }
      empty(){
        return (top==-1);
      }
      int stacksize(){
        return size;
      }
      A pop(){
        if(empty()){
            cout<<"stack is empty";
            exit(1);
        }
        return items[top--];
      }
      bool push(A x){
        if(top==size-1)
           return false;
        items[++top]=x;
        return true;
      }
      A stacktop(){
        if(empty()){
            cout<<"stack is empty";
            exit(1);
        }
        return items[top];
      }
};
  
template <class A> class queue{
    private:
      A *items;
      int size;
      int front,rear;
    public:
      queue(int n=10){
        size=n;
        items=new A[size+1];
        rear=front=size;
      }
      empty(){
        return (rear==front);
      }
      int queuesize(){
        return size;
      }
      int queuelen(){
        if(rear>front)
          return rear-front;
        else
          return rear-front+size+1;  
      }
      A remove(){
        if(empty()){
            cout<<"queue is empty";
            exit(1);
        }
        if(front==size)
           front=0;
        else
           front++;
        return items[front];
      }
      bool insert(A x){
        int j=rear;
        if(j==size)
           j=0;
        else
           j++;
        if(j==front)   
           return false;
        rear=j;   
        items[rear]=x;
        return true;
      }

      A atfront(){
        if(empty()){
            cout<<"queue is empty";
            exit(1);
        }
        int j=front;
        if(j==size)
           j=0;
        else
           j++;
        return items[j];
      }

      A atrear(){
        if(empty()){
            cout<<"queue is empty";
            exit(1);
        }
        return items[rear];
      }


};
  
