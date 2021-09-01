#include "sample-addon.h"

namespace sampleaddon
{
    NAN_METHOD(HelloWorld)
    {
        info.GetReturnValue().Set(Nan::New<v8::String>("Hello World !!!").ToLocalChecked());
    }
}