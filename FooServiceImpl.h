//
// Created by root on 18-4-25.
//

#ifndef GRPC_DEMO_FOOSERVICEIMPL_H
#define GRPC_DEMO_FOOSERVICEIMPL_H

#include "FooService.grpc.pb.h"

class FooServiceImpl : public FooService::Service{
public:
    FooServiceImpl();

    grpc::Status Foo(::grpc::ServerContext *context, const ::request *request, ::response *response) override;
};


#endif //GRPC_DEMO_FOOSERVICEIMPL_H
