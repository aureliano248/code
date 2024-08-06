#include"message.h"
#include"Folder.h"
void Message::add_to_Folders(const Message &m){
    for(auto &folder:folders){
        folder->addMsg(const_cast<Message *const>(&m));
    }
}
void Message::remove_from_Folders()
{
    for(auto &folder:folders){
        folder->remMsg(this);
    }
}

