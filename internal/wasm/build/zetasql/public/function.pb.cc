// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: zetasql/public/function.proto

#include "zetasql/public/function.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
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

namespace zetasql {
class FunctionEnumsDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<FunctionEnums>
      _instance;
} _FunctionEnums_default_instance_;
}  // namespace zetasql
namespace protobuf_zetasql_2fpublic_2ffunction_2eproto {
static void InitDefaultsFunctionEnums() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::zetasql::_FunctionEnums_default_instance_;
    new (ptr) ::zetasql::FunctionEnums();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::zetasql::FunctionEnums::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_FunctionEnums =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsFunctionEnums}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_FunctionEnums.base);
}

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[8];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zetasql::FunctionEnums, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zetasql::FunctionEnums, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 5, sizeof(::zetasql::FunctionEnums)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::zetasql::_FunctionEnums_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "zetasql/public/function.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\035zetasql/public/function.proto\022\007zetasql"
      "\"\237\005\n\rFunctionEnums\"\?\n\023ArgumentCardinalit"
      "y\022\014\n\010REQUIRED\020\000\022\014\n\010REPEATED\020\001\022\014\n\010OPTIONA"
      "L\020\002\"@\n\025ProcedureArgumentMode\022\013\n\007NOT_SET\020"
      "\000\022\006\n\002IN\020\001\022\007\n\003OUT\020\002\022\t\n\005INOUT\020\003\"S\n\022WindowO"
      "rderSupport\022\025\n\021ORDER_UNSUPPORTED\020\000\022\022\n\016OR"
      "DER_OPTIONAL\020\001\022\022\n\016ORDER_REQUIRED\020\002\"/\n\004Mo"
      "de\022\n\n\006SCALAR\020\001\022\r\n\tAGGREGATE\020\002\022\014\n\010ANALYTI"
      "C\020\003\"5\n\nVolatility\022\r\n\tIMMUTABLE\020\000\022\n\n\006STAB"
      "LE\020\001\022\014\n\010VOLATILE\020\002\"\312\001\n\027TableValuedFuncti"
      "onType\022\013\n\007INVALID\020\000\022\033\n\027FIXED_OUTPUT_SCHE"
      "MA_TVF\020\001\022-\n)FORWARD_INPUT_SCHEMA_TO_OUTP"
      "UT_SCHEMA_TVF\020\002\022\025\n\021TEMPLATED_SQL_TVF\020\003\022\?"
      "\n;FORWARD_INPUT_SCHEMA_TO_OUTPUT_SCHEMA_"
      "WITH_APPENDED_COLUMNS\020\007\"\200\001\n\025ArgumentColl"
      "ationMode\022\020\n\014AFFECTS_NONE\020\000\022\025\n\021AFFECTS_O"
      "PERATION\020\001\022\027\n\023AFFECTS_PROPAGATION\020\002\022%\n!A"
      "FFECTS_OPERATION_AND_PROPAGATION\020\003*\360\003\n\025S"
      "ignatureArgumentKind\022\022\n\016ARG_TYPE_FIXED\020\000"
      "\022\022\n\016ARG_TYPE_ANY_1\020\001\022\022\n\016ARG_TYPE_ANY_2\020\002"
      "\022\030\n\024ARG_ARRAY_TYPE_ANY_1\020\003\022\030\n\024ARG_ARRAY_"
      "TYPE_ANY_2\020\004\022\025\n\021ARG_PROTO_MAP_ANY\020\016\022\031\n\025A"
      "RG_PROTO_MAP_KEY_ANY\020\017\022\033\n\027ARG_PROTO_MAP_"
      "VALUE_ANY\020\020\022\021\n\rARG_PROTO_ANY\020\005\022\022\n\016ARG_ST"
      "RUCT_ANY\020\006\022\020\n\014ARG_ENUM_ANY\020\007\022\026\n\022ARG_TYPE"
      "_ARBITRARY\020\010\022\025\n\021ARG_TYPE_RELATION\020\t\022\021\n\rA"
      "RG_TYPE_VOID\020\n\022\022\n\016ARG_TYPE_MODEL\020\013\022\027\n\023AR"
      "G_TYPE_CONNECTION\020\014\022\027\n\023ARG_TYPE_DESCRIPT"
      "OR\020\r\022\023\n\017ARG_TYPE_LAMBDA\020\021\022B\n5__Signature"
      "ArgumentKind__switch_must_have_a_default"
      "__\020\377\377\377\377\377\377\377\377\377\001B&\n\022com.google.zetasqlB\020Zet"
      "aSQLFunctions"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 1253);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "zetasql/public/function.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_zetasql_2fpublic_2ffunction_2eproto
namespace zetasql {
const ::google::protobuf::EnumDescriptor* FunctionEnums_ArgumentCardinality_descriptor() {
  protobuf_zetasql_2fpublic_2ffunction_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_zetasql_2fpublic_2ffunction_2eproto::file_level_enum_descriptors[0];
}
bool FunctionEnums_ArgumentCardinality_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const FunctionEnums_ArgumentCardinality FunctionEnums::REQUIRED;
const FunctionEnums_ArgumentCardinality FunctionEnums::REPEATED;
const FunctionEnums_ArgumentCardinality FunctionEnums::OPTIONAL;
const FunctionEnums_ArgumentCardinality FunctionEnums::ArgumentCardinality_MIN;
const FunctionEnums_ArgumentCardinality FunctionEnums::ArgumentCardinality_MAX;
const int FunctionEnums::ArgumentCardinality_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
const ::google::protobuf::EnumDescriptor* FunctionEnums_ProcedureArgumentMode_descriptor() {
  protobuf_zetasql_2fpublic_2ffunction_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_zetasql_2fpublic_2ffunction_2eproto::file_level_enum_descriptors[1];
}
bool FunctionEnums_ProcedureArgumentMode_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const FunctionEnums_ProcedureArgumentMode FunctionEnums::NOT_SET;
const FunctionEnums_ProcedureArgumentMode FunctionEnums::IN;
const FunctionEnums_ProcedureArgumentMode FunctionEnums::OUT;
const FunctionEnums_ProcedureArgumentMode FunctionEnums::INOUT;
const FunctionEnums_ProcedureArgumentMode FunctionEnums::ProcedureArgumentMode_MIN;
const FunctionEnums_ProcedureArgumentMode FunctionEnums::ProcedureArgumentMode_MAX;
const int FunctionEnums::ProcedureArgumentMode_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
const ::google::protobuf::EnumDescriptor* FunctionEnums_WindowOrderSupport_descriptor() {
  protobuf_zetasql_2fpublic_2ffunction_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_zetasql_2fpublic_2ffunction_2eproto::file_level_enum_descriptors[2];
}
bool FunctionEnums_WindowOrderSupport_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const FunctionEnums_WindowOrderSupport FunctionEnums::ORDER_UNSUPPORTED;
const FunctionEnums_WindowOrderSupport FunctionEnums::ORDER_OPTIONAL;
const FunctionEnums_WindowOrderSupport FunctionEnums::ORDER_REQUIRED;
const FunctionEnums_WindowOrderSupport FunctionEnums::WindowOrderSupport_MIN;
const FunctionEnums_WindowOrderSupport FunctionEnums::WindowOrderSupport_MAX;
const int FunctionEnums::WindowOrderSupport_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
const ::google::protobuf::EnumDescriptor* FunctionEnums_Mode_descriptor() {
  protobuf_zetasql_2fpublic_2ffunction_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_zetasql_2fpublic_2ffunction_2eproto::file_level_enum_descriptors[3];
}
bool FunctionEnums_Mode_IsValid(int value) {
  switch (value) {
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const FunctionEnums_Mode FunctionEnums::SCALAR;
const FunctionEnums_Mode FunctionEnums::AGGREGATE;
const FunctionEnums_Mode FunctionEnums::ANALYTIC;
const FunctionEnums_Mode FunctionEnums::Mode_MIN;
const FunctionEnums_Mode FunctionEnums::Mode_MAX;
const int FunctionEnums::Mode_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
const ::google::protobuf::EnumDescriptor* FunctionEnums_Volatility_descriptor() {
  protobuf_zetasql_2fpublic_2ffunction_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_zetasql_2fpublic_2ffunction_2eproto::file_level_enum_descriptors[4];
}
bool FunctionEnums_Volatility_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const FunctionEnums_Volatility FunctionEnums::IMMUTABLE;
const FunctionEnums_Volatility FunctionEnums::STABLE;
const FunctionEnums_Volatility FunctionEnums::VOLATILE;
const FunctionEnums_Volatility FunctionEnums::Volatility_MIN;
const FunctionEnums_Volatility FunctionEnums::Volatility_MAX;
const int FunctionEnums::Volatility_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
const ::google::protobuf::EnumDescriptor* FunctionEnums_TableValuedFunctionType_descriptor() {
  protobuf_zetasql_2fpublic_2ffunction_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_zetasql_2fpublic_2ffunction_2eproto::file_level_enum_descriptors[5];
}
bool FunctionEnums_TableValuedFunctionType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 7:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const FunctionEnums_TableValuedFunctionType FunctionEnums::INVALID;
const FunctionEnums_TableValuedFunctionType FunctionEnums::FIXED_OUTPUT_SCHEMA_TVF;
const FunctionEnums_TableValuedFunctionType FunctionEnums::FORWARD_INPUT_SCHEMA_TO_OUTPUT_SCHEMA_TVF;
const FunctionEnums_TableValuedFunctionType FunctionEnums::TEMPLATED_SQL_TVF;
const FunctionEnums_TableValuedFunctionType FunctionEnums::FORWARD_INPUT_SCHEMA_TO_OUTPUT_SCHEMA_WITH_APPENDED_COLUMNS;
const FunctionEnums_TableValuedFunctionType FunctionEnums::TableValuedFunctionType_MIN;
const FunctionEnums_TableValuedFunctionType FunctionEnums::TableValuedFunctionType_MAX;
const int FunctionEnums::TableValuedFunctionType_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
const ::google::protobuf::EnumDescriptor* FunctionEnums_ArgumentCollationMode_descriptor() {
  protobuf_zetasql_2fpublic_2ffunction_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_zetasql_2fpublic_2ffunction_2eproto::file_level_enum_descriptors[6];
}
bool FunctionEnums_ArgumentCollationMode_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const FunctionEnums_ArgumentCollationMode FunctionEnums::AFFECTS_NONE;
const FunctionEnums_ArgumentCollationMode FunctionEnums::AFFECTS_OPERATION;
const FunctionEnums_ArgumentCollationMode FunctionEnums::AFFECTS_PROPAGATION;
const FunctionEnums_ArgumentCollationMode FunctionEnums::AFFECTS_OPERATION_AND_PROPAGATION;
const FunctionEnums_ArgumentCollationMode FunctionEnums::ArgumentCollationMode_MIN;
const FunctionEnums_ArgumentCollationMode FunctionEnums::ArgumentCollationMode_MAX;
const int FunctionEnums::ArgumentCollationMode_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
const ::google::protobuf::EnumDescriptor* SignatureArgumentKind_descriptor() {
  protobuf_zetasql_2fpublic_2ffunction_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_zetasql_2fpublic_2ffunction_2eproto::file_level_enum_descriptors[7];
}
bool SignatureArgumentKind_IsValid(int value) {
  switch (value) {
    case -1:
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
      return true;
    default:
      return false;
  }
}


// ===================================================================

void FunctionEnums::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

FunctionEnums::FunctionEnums()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_zetasql_2fpublic_2ffunction_2eproto::scc_info_FunctionEnums.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:zetasql.FunctionEnums)
}
FunctionEnums::FunctionEnums(const FunctionEnums& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:zetasql.FunctionEnums)
}

void FunctionEnums::SharedCtor() {
}

FunctionEnums::~FunctionEnums() {
  // @@protoc_insertion_point(destructor:zetasql.FunctionEnums)
  SharedDtor();
}

void FunctionEnums::SharedDtor() {
}

void FunctionEnums::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* FunctionEnums::descriptor() {
  ::protobuf_zetasql_2fpublic_2ffunction_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_zetasql_2fpublic_2ffunction_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const FunctionEnums& FunctionEnums::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_zetasql_2fpublic_2ffunction_2eproto::scc_info_FunctionEnums.base);
  return *internal_default_instance();
}


void FunctionEnums::Clear() {
// @@protoc_insertion_point(message_clear_start:zetasql.FunctionEnums)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool FunctionEnums::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:zetasql.FunctionEnums)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
  handle_unusual:
    if (tag == 0) {
      goto success;
    }
    DO_(::google::protobuf::internal::WireFormat::SkipField(
          input, tag, _internal_metadata_.mutable_unknown_fields()));
  }
success:
  // @@protoc_insertion_point(parse_success:zetasql.FunctionEnums)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:zetasql.FunctionEnums)
  return false;
#undef DO_
}

void FunctionEnums::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:zetasql.FunctionEnums)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:zetasql.FunctionEnums)
}

::google::protobuf::uint8* FunctionEnums::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:zetasql.FunctionEnums)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:zetasql.FunctionEnums)
  return target;
}

size_t FunctionEnums::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:zetasql.FunctionEnums)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void FunctionEnums::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:zetasql.FunctionEnums)
  GOOGLE_DCHECK_NE(&from, this);
  const FunctionEnums* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const FunctionEnums>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:zetasql.FunctionEnums)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:zetasql.FunctionEnums)
    MergeFrom(*source);
  }
}

void FunctionEnums::MergeFrom(const FunctionEnums& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:zetasql.FunctionEnums)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

}

void FunctionEnums::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:zetasql.FunctionEnums)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void FunctionEnums::CopyFrom(const FunctionEnums& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:zetasql.FunctionEnums)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FunctionEnums::IsInitialized() const {
  return true;
}

void FunctionEnums::Swap(FunctionEnums* other) {
  if (other == this) return;
  InternalSwap(other);
}
void FunctionEnums::InternalSwap(FunctionEnums* other) {
  using std::swap;
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata FunctionEnums::GetMetadata() const {
  protobuf_zetasql_2fpublic_2ffunction_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_zetasql_2fpublic_2ffunction_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace zetasql
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::zetasql::FunctionEnums* Arena::CreateMaybeMessage< ::zetasql::FunctionEnums >(Arena* arena) {
  return Arena::CreateInternal< ::zetasql::FunctionEnums >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)