// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: EMessageType.proto

#include "EMessageType.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace com {
namespace htsc {
namespace mdc {
namespace insight {
namespace model {
}  // namespace model
}  // namespace insight
}  // namespace mdc
}  // namespace htsc
}  // namespace com
static constexpr ::PROTOBUF_NAMESPACE_ID::Metadata* file_level_metadata_EMessageType_2eproto = nullptr;
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_EMessageType_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_EMessageType_2eproto = nullptr;
const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_EMessageType_2eproto::offsets[1] = {};
static constexpr ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema* schemas = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_EMessageType_2eproto[] =
  "\n\022EMessageType.proto\022\032com.htsc.mdc.insig"
  "ht.model*\237\004\n\014EMessageType\022\030\n\024UNKNOWN_MES"
  "SAGE_TYPE\020\000\022\025\n\021HEARTBEAT_REQUEST\020\001\022\026\n\022HE"
  "ARTBEAT_RESPONSE\020\002\022\031\n\025GENERAL_ERROR_MESS"
  "AGE\020\n\022\021\n\rLOGIN_REQUEST\020\013\022\022\n\016LOGIN_RESPON"
  "SE\020\014\022\035\n\031SERVICE_DISCOVERY_REQUEST\020\r\022\036\n\032S"
  "ERVICE_DISCOVERY_RESPONSE\020\016\022\030\n\024MD_SUBSCR"
  "IBE_REQUEST\020\017\022\031\n\025MD_SUBSCRIBE_RESPONSE\020\020"
  "\022\024\n\020PUSH_MARKET_DATA\020\021\022\024\n\020MD_QUERY_REQUE"
  "ST\020\022\022\025\n\021MD_QUERY_RESPONSE\020\023\022\024\n\020PLAYBACK_"
  "REQUEST\020\024\022\025\n\021PLAYBACK_RESPONSE\020\025\022\034\n\030PLAY"
  "BACK_CONTROL_REQUEST\020\026\022\035\n\031PLAYBACK_CONTR"
  "OL_RESPONSE\020\027\022\033\n\027PLAYBACK_STATUS_REQUEST"
  "\020\030\022\023\n\017PLAYBACK_STATUS\020\031\022\024\n\020PLAYBACK_PAYL"
  "OAD\020\032\022\033\n\027PUSH_MARKET_DATA_STREAM\020\033B4\n\032co"
  "m.htsc.mdc.insight.modelB\021EMessageTypePr"
  "otoH\001\240\001\001b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_EMessageType_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_EMessageType_2eproto_sccs[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_EMessageType_2eproto_once;
static bool descriptor_table_EMessageType_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_EMessageType_2eproto = {
  &descriptor_table_EMessageType_2eproto_initialized, descriptor_table_protodef_EMessageType_2eproto, "EMessageType.proto", 656,
  &descriptor_table_EMessageType_2eproto_once, descriptor_table_EMessageType_2eproto_sccs, descriptor_table_EMessageType_2eproto_deps, 0, 0,
  schemas, file_default_instances, TableStruct_EMessageType_2eproto::offsets,
  file_level_metadata_EMessageType_2eproto, 0, file_level_enum_descriptors_EMessageType_2eproto, file_level_service_descriptors_EMessageType_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_EMessageType_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_EMessageType_2eproto), true);
namespace com {
namespace htsc {
namespace mdc {
namespace insight {
namespace model {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EMessageType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_EMessageType_2eproto);
  return file_level_enum_descriptors_EMessageType_2eproto[0];
}
bool EMessageType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace model
}  // namespace insight
}  // namespace mdc
}  // namespace htsc
}  // namespace com
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
