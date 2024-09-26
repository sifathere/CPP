#include <iostream>
using namespace std;

class Queue
{
private:
    int front, rear, a[5];

public:
    Queue()
    {
        front = -1;
        rear = -1;
        for(int i=0; i<5; i++)
        {++
            a[i]=0;
        }
    }

    bool isEmpty()
    {
        if(front == -1 && rear == -1)
            return true;
        else 
            return false;
    }

    bool isFull()
    {
        if(rear == 4)
            return true;
        else 
            return false;
    }

    void enqueue(int val)
    {
        if(isFull())
        {
            cout<<"Queue is FULL"<<endl;
            return;
        }
        else if(isEmpty())
        {
            rear=0;
            front=0;
        }
        else
        {
            rear++;
        }
        a[rear]=val;
    }

    int dequeue()
    {
        int x;
        if(isEmpty())
        {
            cout<<"Queue is EMPTY"<<endl;
            return 0;
        }
        else if (front == rear)
        {
            x = a[front];
            rear = -1;
            front = -1;
            return x;
        }
        else
        {
            x = a[front];
            a[front] = 0;
            front++;
            return x;
        }
    }

    int count()
	{
		if(rear==-1 && front==-1)
			return 0;
		else
		return rear-front+1;
	}

    void display()
    {
        cout<<"All value in the Queue are - "<<endl;
        for(int i=0; i<5; i++)
        {
            cout<<a[i]<<" ";
        }
    }

};

int main()
{
    Queue q;
    int option, value;

    do
    {
        cout<<"\n\n What operation do you want to perform? Select option number. Enter 0 to EXIT."<<endl;

        cout<<"1. Enqueue()"<<endl
        <<"2. Dequeue()"<<endl
        <<"3. isEmpty()"<<endl
        <<"4. isFull()"<<endl
        <<"5. count()"<<endl
        <<"6. display()"<<endl
        <<"7. Clear Screen"<<endl<<endl;

        cin>>option;

        switch(option)
        {
            case 0:
                break;

            case 1:
                cout<<"Enqueue Operation \nEnter an item to Enqueue in the Queue"<<endl;
                cin>>value;
                q.enqueue(value);
                break;

            case 2:
                cout<<"Dequeue Operation \nDequeued Value: "<<q.dequeue()<<endl;
                break;

            case 3:
                if(q.isEmpty())
                    cout<<"Queue is EMPTY"<<endl;
                else
                    cout<<"Queue is not EMPTY"<<endl;
                break;
                
            case 4:
                if(q.isFull())
                    cout<<"Queue is FULL"<<endl;
                else
                    cout<<"Queue is not FULL"<<endl;
                break;
            
            case 5:
                cout<<"Count Operation \nCount of items in Queue: "<<q.count()<<endl;
                break;

            case 6:
                cout<<"Display Function Called -"<<endl;
                q.display();
                break;

            case 7:
                system("cls");
                break;

            default:
                cout<<"Enter proper option number"<<endl;
                break;      
        }        
    } while (option != 0);
    
}
