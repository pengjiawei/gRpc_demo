// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: FooService.proto

#include "FooService.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
class requestDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<request>
      _instance;
} _request_default_instance_;
class responseDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<response>
      _instance;
} _response_default_instance_;
namespace protobuf_FooService_2eproto {
void InitDefaultsrequestImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::_request_default_instance_;
    new (ptr) ::request();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::request::InitAsDefaultInstance();
}

void InitDefaultsrequest() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsrequestImpl);
}

void InitDefaultsresponseImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::_response_default_instance_;
    new (ptr) ::response();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::response::InitAsDefaultInstance();
}

void InitDefaultsresponse() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsresponseImpl);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::request, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::request, op_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::response, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::response, text_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::request)},
  { 6, -1, sizeof(::response)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::_request_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::_response_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "FooService.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\020FooService.proto\"\025\n\007request\022\n\n\002op\030\001 \001("
      "\005\"\030\n\010response\022\014\n\004text\030\001 \001(\t2(\n\nFooServic"
      "e\022\032\n\003Foo\022\010.request\032\t.responseB\003\200\001\000b\006prot"
      "o3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 122);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "FooService.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_FooService_2eproto

// ===================================================================

void request::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int request::kOpFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

request::request()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_FooService_2eproto::InitDefaultsrequest();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:request)
}
request::request(const request& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  op_ = from.op_;
  // @@protoc_insertion_point(copy_constructor:request)
}

void request::SharedCtor() {
  op_ = 0;
  _cached_size_ = 0;
}

request::~request() {
  // @@protoc_insertion_point(destructor:request)
  SharedDtor();
}

void request::SharedDtor() {
}

void request::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* request::descriptor() {
  ::protobuf_FooService_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_FooService_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const request& request::default_instance() {
  ::protobuf_FooService_2eproto::InitDefaultsrequest();
  return *internal_default_instance();
}


void request::Clear() {
// @@protoc_insertion_point(message_clear_start:request)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  op_ = 0;
  _internal_metadata_.Clear();
}

bool request::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:request)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 op = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &op_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:request)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:request)
  return false;
#undef DO_
}

void request::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:request)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 op = 1;
  if (this->op() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->op(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:request)
}

::google::protobuf::uint8* request::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:request)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 op = 1;
  if (this->op() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->op(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:request)
  return target;
}

size_t request::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:request)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // int32 op = 1;
  if (this->op() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->op());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void request::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:request)
  GOOGLE_DCHECK_NE(&from, this);
  const request* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const request>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:request)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:request)
    MergeFrom(*source);
  }
}

void request::MergeFrom(const request& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:request)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.op() != 0) {
    set_op(from.op());
  }
}

void request::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:request)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void request::CopyFrom(const request& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:request)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool request::IsInitialized() const {
  return true;
}

void request::Swap(request* other) {
  if (other == this) return;
  InternalSwap(other);
}
void request::InternalSwap(request* other) {
  using std::swap;
  swap(op_, other->op_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata request::GetMetadata() const {
  protobuf_FooService_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_FooService_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void response::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int response::kTextFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

response::response()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_FooService_2eproto::InitDefaultsresponse();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:response)
}
response::response(const response& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  text_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.text().size() > 0) {
    text_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.text_);
  }
  // @@protoc_insertion_point(copy_constructor:response)
}

void response::SharedCtor() {
  text_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

response::~response() {
  // @@protoc_insertion_point(destructor:response)
  SharedDtor();
}

void response::SharedDtor() {
  text_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void response::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* response::descriptor() {
  ::protobuf_FooService_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_FooService_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const response& response::default_instance() {
  ::protobuf_FooService_2eproto::InitDefaultsresponse();
  return *internal_default_instance();
}


void response::Clear() {
// @@protoc_insertion_point(message_clear_start:response)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  text_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool response::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:response)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string text = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_text()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->text().data(), static_cast<int>(this->text().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "response.text"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:response)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:response)
  return false;
#undef DO_
}

void response::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:response)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string text = 1;
  if (this->text().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->text().data(), static_cast<int>(this->text().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "response.text");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->text(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:response)
}

::google::protobuf::uint8* response::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:response)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string text = 1;
  if (this->text().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->text().data(), static_cast<int>(this->text().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "response.text");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->text(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:response)
  return target;
}

size_t response::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:response)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string text = 1;
  if (this->text().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->text());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void response::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:response)
  GOOGLE_DCHECK_NE(&from, this);
  const response* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const response>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:response)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:response)
    MergeFrom(*source);
  }
}

void response::MergeFrom(const response& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:response)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.text().size() > 0) {

    text_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.text_);
  }
}

void response::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:response)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void response::CopyFrom(const response& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:response)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool response::IsInitialized() const {
  return true;
}

void response::Swap(response* other) {
  if (other == this) return;
  InternalSwap(other);
}
void response::InternalSwap(response* other) {
  using std::swap;
  text_.Swap(&other->text_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata response::GetMetadata() const {
  protobuf_FooService_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_FooService_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::request* Arena::Create< ::request >(Arena* arena) {
  return Arena::CreateInternal< ::request >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::response* Arena::Create< ::response >(Arena* arena) {
  return Arena::CreateInternal< ::response >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
