// Author: Aslam Khan
// Email : aslamkhanofficial@yahoo.com
// Institute : Air University Islamabad

#include<iostream>
using namespace std;
class Queue
{
	int arr[5];
	int front;
	int end;
public:
	Queue()
	{
		for (int i = 0; i < 5; i++)
		{
			arr[i] = 0;
		}
		front = -1;
		end = -1;
	}

	bool IsEmpty();
	bool IsFull();
	void Enqueue(int);
	void Dequeue();
	int peek();
	void Display();



};

void Queue::Enqueue(int x)
{
	if (IsFull())
	{
		cout << "Queue is Full " << endl;
	}
	else if(IsEmpty())
	{
		front = 0;
		end = 0;
		arr[front] = x;
	}
	else
	{
		end++;
		arr[end] = x;
	}

}

void Queue::Display()
{
	for (int i = 0; i <= end; i++)
	{
		cout << "Position " << i + 1 << " = " << arr[i] << endl;
		
	}
}

void Queue::Dequeue()
{
	if (IsEmpty())
	{
		cout << "Queue is Empty..." << endl;
	}
	else
	{
		for (int i = 0; i < end; i++)
		{
			arr[i] = arr[i + 1];

		}
		arr[end] = 0;
		end--;
	}
}

bool Queue::IsEmpty()
{
	if (front < 0 || end < 0 || front >end)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Queue::IsFull()
{
	if (end == 4)
	{
		return true;
	}
	else
	{
		return false;
	}


}

int Queue::peek()
{
	return arr[front];
}








int main()
{
	int data;
	int ch;
	int f;
	Queue Q;
	while (true)
	{
		cout << "1 = Enqueue" << endl;
		cout << "2 = Dequeue" << endl;
		cout << "3 = Peek" << endl;
		cout << "4 = Display" << endl;
		cin >> ch;
		switch (ch)
		{
		case 1:
			cout << "Enter Element = ";
			cin >> data;
			Q.Enqueue(data);
			break;
			
		case 2:
			Q.Dequeue();
			break;

		case 3:
			f = Q.peek();
			cout << "Peek VAlue = " << f << endl;
			break;

		case 4:
			Q.Display();
			break;
		}


	}




	system("pause");
}
