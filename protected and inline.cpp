
#include <iostream>
class Admin {
public:
private:
    void delete_user();
protected:
    virtual void give_task();
    virtual void mark_as_done();
    virtual void edit_task();
};
class Admin_Branch_logistic : protected Admin{
public:
    void mark_as_done();
private:
    void give_task();
    void edit_task();
protected:
    
};
class Admin_Branch_cleaning : protected Admin {
public:
    void mark_as_done();
private:
    void give_task();
    void edit_task();
protected:
};
class Admin_Branch_sales : protected Admin {
public:
    void mark_as_done();
private:
    void give_task();
    void edit_task();
protected:
};
class cleaner : Admin_Branch_cleaning {
public:
private:
protected:
};
class logist : Admin_Branch_logistic {
public:
private:
protected:
};
class saler : Admin_Branch_sales {
public:
private:
protected:
};
void delete_user();

int main()
{
    std::cout << "Hello World!\n";
}
