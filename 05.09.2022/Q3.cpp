class Total : public AddData   
{
    protected:
        int total;
    public:
        void total_of_three_subjects()
        {
                total = subjects[0] + subjects[1] + subjects[2]; 
        }
};
class Percentage : public Total       //Class Percentage – Derived Class. Derived from class Total
{
    private:
        float per;
    public:
        void calculate_percentage()
        {
                per=total/3;
        } 
        void show_result()
        {
                cout<<"\n ------------------------------- \n";
                cout<<"\n Percentage of a Student : "<<per;
        }
};
int main()
{
        Percentage p;
        p.accept_details();
        p.total_of_three_subjects();
        p.calculate_percentage();
        p.show_result();
        return 0;
}
