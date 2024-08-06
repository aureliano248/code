#include "Folder.h"
#include "message.h"
void Folder::addMsg(Message *const m){
    messages.insert(m);
}
void Folder::remMsg(Message *const m)
{
    messages.erase(m);
}