//
// Created by root on 18-4-25.
//

#include "FooServiceImpl.h"


FooServiceImpl::FooServiceImpl() {}

grpc::Status FooServiceImpl::Foo(::grpc::ServerContext *context, const ::request *request, ::response *response) {
    std::cout << "request op = "<<request->op()<<std::endl;
    response->set_text("hello ,this is response");
    return grpc::Status::OK;
}
