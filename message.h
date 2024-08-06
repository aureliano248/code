#include<string>
#include<set>
class Folder;
class Message
{
    friend class Folder;
private:
    std::string contents;
    std::set<Folder *> folders;
    void add_to_Folders(const Message &);
    void remove_from_Folders();
public:
    explicit Message(const std::string &contents=""):contents(contents){};
    ~Message(){
        remove_from_Folders();
    }
    Message(Message &other){
        
    }
};

// Message::Message(/* args */)
// {
// }

// Message::~Message()
// {
// }
