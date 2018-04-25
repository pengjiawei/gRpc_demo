#include <iostream>
#include "FooServiceImpl.h"

#include <grpcpp/server_builder.h>
#include <grpcpp/server.h>

void runServer(){
    std::string address("0.0.0.0:8421");
    FooServiceImpl fooService;
    grpc::ServerBuilder builder;
    builder.AddListeningPort(address,grpc::InsecureServerCredentials());
    builder.RegisterService(&fooService);
    std::unique_ptr<grpc::Server> server(builder.BuildAndStart());
    std::cout << "listening address = "<<address<<std::endl;
    server->Wait();
}
int main() {
    runServer();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}