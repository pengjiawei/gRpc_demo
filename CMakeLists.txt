cmake_minimum_required(VERSION 3.9)
project(gRpc_demo)

set(CMAKE_CXX_STANDARD 11)
#link protobuf directly is not OK
find_package(Protobuf  REQUIRED)

set(SERVER_SRC_FILE server.cpp FooService.grpc.pb.cc FooServiceImpl.cpp  FooService.pb.cc)
add_executable(gRpc_server ${SERVER_SRC_FILE})
target_link_libraries(gRpc_server ${Protobuf_LIBRARIES} grpc++ )

set(CLIENT_SRC_FILE client.cpp FooService.grpc.pb.cc FooServiceImpl.cpp  FooService.pb.cc)
add_executable(gRpc_client ${CLIENT_SRC_FILE})
target_link_libraries(gRpc_client ${Protobuf_LIBRARIES} grpc++ )