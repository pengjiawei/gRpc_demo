//
// Created by root on 18-4-25.
//
#include <grpcpp/channel.h>
#include <grpcpp/create_channel.h>
#include "FooService.grpc.pb.h"
class FooClient{
public:
    FooClient(std::shared_ptr<grpc::Channel> channel):stub_(FooService::NewStub(channel)){

    }
    void getResponse(){
        grpc::ClientContext context;
        request req;
        req.set_op(1);
        response res;
        stub_->Foo(&context,req,&res);
        std::cout <<" response = "<<res.text()<<std::endl;
    }
private:
    std::unique_ptr<FooService::Stub> stub_;
};
int main(){
    FooClient client(grpc::CreateChannel("localhost:8421",grpc::InsecureChannelCredentials()));
    client.getResponse();
}