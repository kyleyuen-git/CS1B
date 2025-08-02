# include <iostream>
# include <vector>
using namespace std;

int const SIZE = 10;

class Queue
{
private:
    int items[SIZE];
    int front;
    int rear;

public:
    Queue()
    {
        front = rear = SIZE -1;
    }

    ~Queue(){}

    void makeEmpty()
    {
        front = rear = SIZE -1;
    }

    void enqueue(int item)
    {
        rear = ((rear + 1 ) % SIZE);
        items[rear] = item;
    }

    void dequeue(int& item)
    {
        front = ((front + 1 ) % SIZE);
        item = items[front];
    }

    bool isEmpty()
    {
        return (front == rear);
    }
    
    bool isFull()
    {
        return((rear + 1) % SIZE == front);
    }

};

int main()
{   
    Queue queue;
    int item;
    int i;

    queue.makeEmpty();

    cout<<"Enter values: or -1 to quit\n\n";

    while (true)
    {
        if (queue.isFull())
        {
            break;
        }
        else
        {
            cout<< "Item #"<<i+1<<": ";
            cin>>item;
            i++;
            if (item == -1)
            {
                break;
            }
            else
            {
                queue.enqueue(item);
            }
        }
    }
    cout<<endl<<endl;
    // first in first out (FIFO)
    while(!queue.isEmpty())
    {
        queue.dequeue(item);
        cout<<item<<"-->";
    }

    cout<<"NULL\n\n";
    return 0;
}