#include <nan.h>
#include "sample-addon.h"

NAN_MODULE_INIT(InitModule)
{
    Nan::Set(target,
        Nan::New<v8::String>("HelloWorld").ToLocalChecked(),
        Nan::GetFunction(Nan::New<v8::FunctionTemplate>(sampleaddon::HelloWorld)).ToLocalChecked());
}

NODE_MODULE(SampleAddonModule, InitModule);