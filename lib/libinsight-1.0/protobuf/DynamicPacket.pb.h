// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: DynamicPacket.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_DynamicPacket_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_DynamicPacket_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3008000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3008000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "ESecurityIDSource.pb.h"
#include "ESecurityType.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_DynamicPacket_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_DynamicPacket_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_DynamicPacket_2eproto;
namespace com {
namespace htsc {
namespace mdc {
namespace insight {
namespace model {
class DynamicPacket;
class DynamicPacketDefaultTypeInternal;
extern DynamicPacketDefaultTypeInternal _DynamicPacket_default_instance_;
}  // namespace model
}  // namespace insight
}  // namespace mdc
}  // namespace htsc
}  // namespace com
PROTOBUF_NAMESPACE_OPEN
template<> ::com::htsc::mdc::insight::model::DynamicPacket* Arena::CreateMaybeMessage<::com::htsc::mdc::insight::model::DynamicPacket>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace com {
namespace htsc {
namespace mdc {
namespace insight {
namespace model {

// ===================================================================

class DynamicPacket :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:com.htsc.mdc.insight.model.DynamicPacket) */ {
 public:
  DynamicPacket();
  virtual ~DynamicPacket();

  DynamicPacket(const DynamicPacket& from);
  DynamicPacket(DynamicPacket&& from) noexcept
    : DynamicPacket() {
    *this = ::std::move(from);
  }

  inline DynamicPacket& operator=(const DynamicPacket& from) {
    CopyFrom(from);
    return *this;
  }
  inline DynamicPacket& operator=(DynamicPacket&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const DynamicPacket& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const DynamicPacket* internal_default_instance() {
    return reinterpret_cast<const DynamicPacket*>(
               &_DynamicPacket_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(DynamicPacket* other);
  friend void swap(DynamicPacket& a, DynamicPacket& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline DynamicPacket* New() const final {
    return CreateMaybeMessage<DynamicPacket>(nullptr);
  }

  DynamicPacket* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<DynamicPacket>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const DynamicPacket& from);
  void MergeFrom(const DynamicPacket& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(DynamicPacket* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "com.htsc.mdc.insight.model.DynamicPacket";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_DynamicPacket_2eproto);
    return ::descriptor_table_DynamicPacket_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string HTSCSecurityID = 1;
  void clear_htscsecurityid();
  static const int kHTSCSecurityIDFieldNumber = 1;
  const std::string& htscsecurityid() const;
  void set_htscsecurityid(const std::string& value);
  void set_htscsecurityid(std::string&& value);
  void set_htscsecurityid(const char* value);
  void set_htscsecurityid(const char* value, size_t size);
  std::string* mutable_htscsecurityid();
  std::string* release_htscsecurityid();
  void set_allocated_htscsecurityid(std::string* htscsecurityid);

  // string stringContent = 8;
  void clear_stringcontent();
  static const int kStringContentFieldNumber = 8;
  const std::string& stringcontent() const;
  void set_stringcontent(const std::string& value);
  void set_stringcontent(std::string&& value);
  void set_stringcontent(const char* value);
  void set_stringcontent(const char* value, size_t size);
  std::string* mutable_stringcontent();
  std::string* release_stringcontent();
  void set_allocated_stringcontent(std::string* stringcontent);

  // bytes bytesContent = 9;
  void clear_bytescontent();
  static const int kBytesContentFieldNumber = 9;
  const std::string& bytescontent() const;
  void set_bytescontent(const std::string& value);
  void set_bytescontent(std::string&& value);
  void set_bytescontent(const char* value);
  void set_bytescontent(const void* value, size_t size);
  std::string* mutable_bytescontent();
  std::string* release_bytescontent();
  void set_allocated_bytescontent(std::string* bytescontent);

  // int32 MDDate = 2;
  void clear_mddate();
  static const int kMDDateFieldNumber = 2;
  ::PROTOBUF_NAMESPACE_ID::int32 mddate() const;
  void set_mddate(::PROTOBUF_NAMESPACE_ID::int32 value);

  // int32 MDTime = 3;
  void clear_mdtime();
  static const int kMDTimeFieldNumber = 3;
  ::PROTOBUF_NAMESPACE_ID::int32 mdtime() const;
  void set_mdtime(::PROTOBUF_NAMESPACE_ID::int32 value);

  // int64 DataTimestamp = 4;
  void clear_datatimestamp();
  static const int kDataTimestampFieldNumber = 4;
  ::PROTOBUF_NAMESPACE_ID::int64 datatimestamp() const;
  void set_datatimestamp(::PROTOBUF_NAMESPACE_ID::int64 value);

  // .com.htsc.mdc.model.ESecurityIDSource securityIDSource = 5;
  void clear_securityidsource();
  static const int kSecurityIDSourceFieldNumber = 5;
  ::com::htsc::mdc::model::ESecurityIDSource securityidsource() const;
  void set_securityidsource(::com::htsc::mdc::model::ESecurityIDSource value);

  // .com.htsc.mdc.model.ESecurityType securityType = 6;
  void clear_securitytype();
  static const int kSecurityTypeFieldNumber = 6;
  ::com::htsc::mdc::model::ESecurityType securitytype() const;
  void set_securitytype(::com::htsc::mdc::model::ESecurityType value);

  // int32 packetType = 7;
  void clear_packettype();
  static const int kPacketTypeFieldNumber = 7;
  ::PROTOBUF_NAMESPACE_ID::int32 packettype() const;
  void set_packettype(::PROTOBUF_NAMESPACE_ID::int32 value);

  // int32 ExchangeDate = 10;
  void clear_exchangedate();
  static const int kExchangeDateFieldNumber = 10;
  ::PROTOBUF_NAMESPACE_ID::int32 exchangedate() const;
  void set_exchangedate(::PROTOBUF_NAMESPACE_ID::int32 value);

  // int32 ExchangeTime = 11;
  void clear_exchangetime();
  static const int kExchangeTimeFieldNumber = 11;
  ::PROTOBUF_NAMESPACE_ID::int32 exchangetime() const;
  void set_exchangetime(::PROTOBUF_NAMESPACE_ID::int32 value);

  // @@protoc_insertion_point(class_scope:com.htsc.mdc.insight.model.DynamicPacket)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr htscsecurityid_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr stringcontent_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr bytescontent_;
  ::PROTOBUF_NAMESPACE_ID::int32 mddate_;
  ::PROTOBUF_NAMESPACE_ID::int32 mdtime_;
  ::PROTOBUF_NAMESPACE_ID::int64 datatimestamp_;
  int securityidsource_;
  int securitytype_;
  ::PROTOBUF_NAMESPACE_ID::int32 packettype_;
  ::PROTOBUF_NAMESPACE_ID::int32 exchangedate_;
  ::PROTOBUF_NAMESPACE_ID::int32 exchangetime_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_DynamicPacket_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// DynamicPacket

// string HTSCSecurityID = 1;
inline void DynamicPacket::clear_htscsecurityid() {
  htscsecurityid_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& DynamicPacket::htscsecurityid() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.DynamicPacket.HTSCSecurityID)
  return htscsecurityid_.GetNoArena();
}
inline void DynamicPacket::set_htscsecurityid(const std::string& value) {
  
  htscsecurityid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.DynamicPacket.HTSCSecurityID)
}
inline void DynamicPacket::set_htscsecurityid(std::string&& value) {
  
  htscsecurityid_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:com.htsc.mdc.insight.model.DynamicPacket.HTSCSecurityID)
}
inline void DynamicPacket::set_htscsecurityid(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  htscsecurityid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.htsc.mdc.insight.model.DynamicPacket.HTSCSecurityID)
}
inline void DynamicPacket::set_htscsecurityid(const char* value, size_t size) {
  
  htscsecurityid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.htsc.mdc.insight.model.DynamicPacket.HTSCSecurityID)
}
inline std::string* DynamicPacket::mutable_htscsecurityid() {
  
  // @@protoc_insertion_point(field_mutable:com.htsc.mdc.insight.model.DynamicPacket.HTSCSecurityID)
  return htscsecurityid_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* DynamicPacket::release_htscsecurityid() {
  // @@protoc_insertion_point(field_release:com.htsc.mdc.insight.model.DynamicPacket.HTSCSecurityID)
  
  return htscsecurityid_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void DynamicPacket::set_allocated_htscsecurityid(std::string* htscsecurityid) {
  if (htscsecurityid != nullptr) {
    
  } else {
    
  }
  htscsecurityid_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), htscsecurityid);
  // @@protoc_insertion_point(field_set_allocated:com.htsc.mdc.insight.model.DynamicPacket.HTSCSecurityID)
}

// int32 MDDate = 2;
inline void DynamicPacket::clear_mddate() {
  mddate_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 DynamicPacket::mddate() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.DynamicPacket.MDDate)
  return mddate_;
}
inline void DynamicPacket::set_mddate(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  mddate_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.DynamicPacket.MDDate)
}

// int32 MDTime = 3;
inline void DynamicPacket::clear_mdtime() {
  mdtime_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 DynamicPacket::mdtime() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.DynamicPacket.MDTime)
  return mdtime_;
}
inline void DynamicPacket::set_mdtime(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  mdtime_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.DynamicPacket.MDTime)
}

// int64 DataTimestamp = 4;
inline void DynamicPacket::clear_datatimestamp() {
  datatimestamp_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 DynamicPacket::datatimestamp() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.DynamicPacket.DataTimestamp)
  return datatimestamp_;
}
inline void DynamicPacket::set_datatimestamp(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  datatimestamp_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.DynamicPacket.DataTimestamp)
}

// .com.htsc.mdc.model.ESecurityIDSource securityIDSource = 5;
inline void DynamicPacket::clear_securityidsource() {
  securityidsource_ = 0;
}
inline ::com::htsc::mdc::model::ESecurityIDSource DynamicPacket::securityidsource() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.DynamicPacket.securityIDSource)
  return static_cast< ::com::htsc::mdc::model::ESecurityIDSource >(securityidsource_);
}
inline void DynamicPacket::set_securityidsource(::com::htsc::mdc::model::ESecurityIDSource value) {
  
  securityidsource_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.DynamicPacket.securityIDSource)
}

// .com.htsc.mdc.model.ESecurityType securityType = 6;
inline void DynamicPacket::clear_securitytype() {
  securitytype_ = 0;
}
inline ::com::htsc::mdc::model::ESecurityType DynamicPacket::securitytype() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.DynamicPacket.securityType)
  return static_cast< ::com::htsc::mdc::model::ESecurityType >(securitytype_);
}
inline void DynamicPacket::set_securitytype(::com::htsc::mdc::model::ESecurityType value) {
  
  securitytype_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.DynamicPacket.securityType)
}

// int32 packetType = 7;
inline void DynamicPacket::clear_packettype() {
  packettype_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 DynamicPacket::packettype() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.DynamicPacket.packetType)
  return packettype_;
}
inline void DynamicPacket::set_packettype(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  packettype_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.DynamicPacket.packetType)
}

// string stringContent = 8;
inline void DynamicPacket::clear_stringcontent() {
  stringcontent_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& DynamicPacket::stringcontent() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.DynamicPacket.stringContent)
  return stringcontent_.GetNoArena();
}
inline void DynamicPacket::set_stringcontent(const std::string& value) {
  
  stringcontent_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.DynamicPacket.stringContent)
}
inline void DynamicPacket::set_stringcontent(std::string&& value) {
  
  stringcontent_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:com.htsc.mdc.insight.model.DynamicPacket.stringContent)
}
inline void DynamicPacket::set_stringcontent(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  stringcontent_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.htsc.mdc.insight.model.DynamicPacket.stringContent)
}
inline void DynamicPacket::set_stringcontent(const char* value, size_t size) {
  
  stringcontent_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.htsc.mdc.insight.model.DynamicPacket.stringContent)
}
inline std::string* DynamicPacket::mutable_stringcontent() {
  
  // @@protoc_insertion_point(field_mutable:com.htsc.mdc.insight.model.DynamicPacket.stringContent)
  return stringcontent_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* DynamicPacket::release_stringcontent() {
  // @@protoc_insertion_point(field_release:com.htsc.mdc.insight.model.DynamicPacket.stringContent)
  
  return stringcontent_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void DynamicPacket::set_allocated_stringcontent(std::string* stringcontent) {
  if (stringcontent != nullptr) {
    
  } else {
    
  }
  stringcontent_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), stringcontent);
  // @@protoc_insertion_point(field_set_allocated:com.htsc.mdc.insight.model.DynamicPacket.stringContent)
}

// bytes bytesContent = 9;
inline void DynamicPacket::clear_bytescontent() {
  bytescontent_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& DynamicPacket::bytescontent() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.DynamicPacket.bytesContent)
  return bytescontent_.GetNoArena();
}
inline void DynamicPacket::set_bytescontent(const std::string& value) {
  
  bytescontent_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.DynamicPacket.bytesContent)
}
inline void DynamicPacket::set_bytescontent(std::string&& value) {
  
  bytescontent_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:com.htsc.mdc.insight.model.DynamicPacket.bytesContent)
}
inline void DynamicPacket::set_bytescontent(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  bytescontent_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.htsc.mdc.insight.model.DynamicPacket.bytesContent)
}
inline void DynamicPacket::set_bytescontent(const void* value, size_t size) {
  
  bytescontent_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.htsc.mdc.insight.model.DynamicPacket.bytesContent)
}
inline std::string* DynamicPacket::mutable_bytescontent() {
  
  // @@protoc_insertion_point(field_mutable:com.htsc.mdc.insight.model.DynamicPacket.bytesContent)
  return bytescontent_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* DynamicPacket::release_bytescontent() {
  // @@protoc_insertion_point(field_release:com.htsc.mdc.insight.model.DynamicPacket.bytesContent)
  
  return bytescontent_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void DynamicPacket::set_allocated_bytescontent(std::string* bytescontent) {
  if (bytescontent != nullptr) {
    
  } else {
    
  }
  bytescontent_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), bytescontent);
  // @@protoc_insertion_point(field_set_allocated:com.htsc.mdc.insight.model.DynamicPacket.bytesContent)
}

// int32 ExchangeDate = 10;
inline void DynamicPacket::clear_exchangedate() {
  exchangedate_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 DynamicPacket::exchangedate() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.DynamicPacket.ExchangeDate)
  return exchangedate_;
}
inline void DynamicPacket::set_exchangedate(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  exchangedate_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.DynamicPacket.ExchangeDate)
}

// int32 ExchangeTime = 11;
inline void DynamicPacket::clear_exchangetime() {
  exchangetime_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 DynamicPacket::exchangetime() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.DynamicPacket.ExchangeTime)
  return exchangetime_;
}
inline void DynamicPacket::set_exchangetime(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  exchangetime_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.DynamicPacket.ExchangeTime)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace model
}  // namespace insight
}  // namespace mdc
}  // namespace htsc
}  // namespace com

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_DynamicPacket_2eproto
