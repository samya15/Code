#include<iostream>
using namespace std;
int fron=0,rear=-1,arr[4],siz=0,i,fron2;
void MainMenu(string choice)
{

    if(choice=="MainMenu")
    {
        cout<<"----------------------MAIN MENU--------------------------\n\n";
        cout<<"1. Insertion\n";
        cout<<"2. Deletion\n";
        cout<<"3. Display\n";
        cout<<"4. Exit\n";
        int ch;
        cout<<"Enter your choice: ";
        cin>>ch;
        if(ch==1)
        {
            MainMenu("Insertion");
        }
        else if(ch==2)
        {
            MainMenu("Deletion");
        }
        else if(ch==3)
        {
            MainMenu("Display");
        }
        else if(ch==4)
        {
            exit(0);
        }
    }
    else if(choice=="Insertion")
    {
        if(siz==4)
        {
            cout<<"Overflow!\n\n";
            MainMenu("MainMenu");
        }
        else
        {
            siz++;
            if(rear==3)
            {
                rear=0;
            }
            else
            {
                rear++;
            }
            cout<<"\nEnter the element to be inserted: ";
            cin>>arr[rear];
            cout<<"\nUpdated array:\n";
            i=siz;
            fron2=fron;
            while(i>0)
            {
                if(fron2==4)
                {
                    fron2=0;
                }
                cout<<arr[fron2]<<endl;
                fron2++;
                i--;
            }
            MainMenu("MainMenu");
        }
    }
    else if(choice=="Deletion")
    {
        if(siz==0)
        {
            cout<<"Underflow!\n\n";
            MainMenu("MainMenu");
        }
        else
        {
            siz--;
            if(fron==3)
            {
                rear=0;
            }
            else
            {
                fron++;
            }
            cout<<"\nUpdated array:\n";
            i=siz;
            fron2=fron;
            while(i--)
            {
                if(fron2==4)
                {
                    fron2=0;
                }
                cout<<arr[fron2]<<endl;
                fron2++;
            }
            MainMenu("MainMenu");
        }
    }
    else if(choice=="Display")
    {
        cout<<"Displaying Array:\n";
        i=siz;
        fron2=fron;
        while(i--)
        {
            if(fron2==4)
            {
                fron2=0;
            }
            cout<<arr[fron2]<<endl;
            fron2++;
        }
        MainMenu("MainMenu");
    }
}
int main()
{
    MainMenu("MainMenu");
    return 0;
}
