class Folder{
    std::set<Message *>messages;
public:
    void addMsg(Message *const);
    void remMsg(Message *const);
};