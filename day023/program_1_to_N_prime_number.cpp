using namespace std;

int main()
{
    int i,num,n,flag;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"\nPrime number: ";
    for(n=1;n<=num;n++)
    {
        flag =1;
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1 && n!=1)
        {
            cout<<n<<" ";
        }
    }
    return 0;
}
