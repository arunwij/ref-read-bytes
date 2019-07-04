#include <nan.h>
#include <functional>
#include <iostream>

using namespace Nan;
using namespace v8;
using namespace std;

// copy memory starting from start
// until length
char* readBytes(const char* start, uint32_t size) {
    char* data = new char[size];
    memcpy(data, start, size);
    return data;
};

// node addon 
NAN_METHOD(ReadBytes) {
  Nan:: HandleScope Scope;

  char* start = (char*) node::Buffer::Data(info[0]->ToObject());
  unsigned int size = info[1]->Uint32Value();
  char * retval = readBytes(start, size);
  info.GetReturnValue().Set(Nan::NewBuffer(retval, size).ToLocalChecked());
}

NAN_MODULE_INIT(Init) {
    Nan::Set(target, New<String>("readBytes").ToLocalChecked(),GetFunction(New<FunctionTemplate>(ReadBytes)).ToLocalChecked());
}

NODE_MODULE(addon, Init)
