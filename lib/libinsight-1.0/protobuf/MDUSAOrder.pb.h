// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MDUSAOrder.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_MDUSAOrder_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_MDUSAOrder_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_MDUSAOrder_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_MDUSAOrder_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_MDUSAOrder_2eproto;
namespace com {
namespace htsc {
namespace mdc {
namespace insight {
namespace model {
class MDUSAOrder;
class MDUSAOrderDefaultTypeInternal;
extern MDUSAOrderDefaultTypeInternal _MDUSAOrder_default_instance_;
}  // namespace model
}  // namespace insight
}  // namespace mdc
}  // namespace htsc
}  // namespace com
PROTOBUF_NAMESPACE_OPEN
template<> ::com::htsc::mdc::insight::model::MDUSAOrder* Arena::CreateMaybeMessage<::com::htsc::mdc::insight::model::MDUSAOrder>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace com {
namespace htsc {
namespace mdc {
namespace insight {
namespace model {

// ===================================================================

class MDUSAOrder :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:com.htsc.mdc.insight.model.MDUSAOrder) */ {
 public:
  MDUSAOrder();
  virtual ~MDUSAOrder();

  MDUSAOrder(const MDUSAOrder& from);
  MDUSAOrder(MDUSAOrder&& from) noexcept
    : MDUSAOrder() {
    *this = ::std::move(from);
  }

  inline MDUSAOrder& operator=(const MDUSAOrder& from) {
    CopyFrom(from);
    return *this;
  }
  inline MDUSAOrder& operator=(MDUSAOrder&& from) noexcept {
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
  static const MDUSAOrder& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const MDUSAOrder* internal_default_instance() {
    return reinterpret_cast<const MDUSAOrder*>(
               &_MDUSAOrder_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(MDUSAOrder* other);
  friend void swap(MDUSAOrder& a, MDUSAOrder& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline MDUSAOrder* New() const final {
    return CreateMaybeMessage<MDUSAOrder>(nullptr);
  }

  MDUSAOrder* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<MDUSAOrder>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const MDUSAOrder& from);
  void MergeFrom(const MDUSAOrder& from);
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
  void InternalSwap(MDUSAOrder* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "com.htsc.mdc.insight.model.MDUSAOrder";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_MDUSAOrder_2eproto);
    return ::descriptor_table_MDUSAOrder_2eproto.file_level_metadata[kIndexInFileMessages];
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

  // string Attribution = 17;
  void clear_attribution();
  static const int kAttributionFieldNumber = 17;
  const std::string& attribution() const;
  void set_attribution(const std::string& value);
  void set_attribution(std::string&& value);
  void set_attribution(const char* value);
  void set_attribution(const char* value, size_t size);
  std::string* mutable_attribution();
  std::string* release_attribution();
  void set_allocated_attribution(std::string* attribution);

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

  // int32 ExchangeDate = 7;
  void clear_exchangedate();
  static const int kExchangeDateFieldNumber = 7;
  ::PROTOBUF_NAMESPACE_ID::int32 exchangedate() const;
  void set_exchangedate(::PROTOBUF_NAMESPACE_ID::int32 value);

  // int32 ExchangeTime = 8;
  void clear_exchangetime();
  static const int kExchangeTimeFieldNumber = 8;
  ::PROTOBUF_NAMESPACE_ID::int32 exchangetime() const;
  void set_exchangetime(::PROTOBUF_NAMESPACE_ID::int32 value);

  // int32 Nanosecond = 9;
  void clear_nanosecond();
  static const int kNanosecondFieldNumber = 9;
  ::PROTOBUF_NAMESPACE_ID::int32 nanosecond() const;
  void set_nanosecond(::PROTOBUF_NAMESPACE_ID::int32 value);

  // int32 ChannelNo = 10;
  void clear_channelno();
  static const int kChannelNoFieldNumber = 10;
  ::PROTOBUF_NAMESPACE_ID::int32 channelno() const;
  void set_channelno(::PROTOBUF_NAMESPACE_ID::int32 value);

  // int64 OrderIndex = 11;
  void clear_orderindex();
  static const int kOrderIndexFieldNumber = 11;
  ::PROTOBUF_NAMESPACE_ID::int64 orderindex() const;
  void set_orderindex(::PROTOBUF_NAMESPACE_ID::int64 value);

  // int64 OriginalOrderIndex = 12;
  void clear_originalorderindex();
  static const int kOriginalOrderIndexFieldNumber = 12;
  ::PROTOBUF_NAMESPACE_ID::int64 originalorderindex() const;
  void set_originalorderindex(::PROTOBUF_NAMESPACE_ID::int64 value);

  // int64 OrderPrice = 14;
  void clear_orderprice();
  static const int kOrderPriceFieldNumber = 14;
  ::PROTOBUF_NAMESPACE_ID::int64 orderprice() const;
  void set_orderprice(::PROTOBUF_NAMESPACE_ID::int64 value);

  // int32 OrderType = 13;
  void clear_ordertype();
  static const int kOrderTypeFieldNumber = 13;
  ::PROTOBUF_NAMESPACE_ID::int32 ordertype() const;
  void set_ordertype(::PROTOBUF_NAMESPACE_ID::int32 value);

  // int32 OrderBSFlag = 16;
  void clear_orderbsflag();
  static const int kOrderBSFlagFieldNumber = 16;
  ::PROTOBUF_NAMESPACE_ID::int32 orderbsflag() const;
  void set_orderbsflag(::PROTOBUF_NAMESPACE_ID::int32 value);

  // double OrderQty = 15;
  void clear_orderqty();
  static const int kOrderQtyFieldNumber = 15;
  double orderqty() const;
  void set_orderqty(double value);

  // int32 TrackingNum = 18;
  void clear_trackingnum();
  static const int kTrackingNumFieldNumber = 18;
  ::PROTOBUF_NAMESPACE_ID::int32 trackingnum() const;
  void set_trackingnum(::PROTOBUF_NAMESPACE_ID::int32 value);

  // @@protoc_insertion_point(class_scope:com.htsc.mdc.insight.model.MDUSAOrder)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr htscsecurityid_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr attribution_;
  ::PROTOBUF_NAMESPACE_ID::int32 mddate_;
  ::PROTOBUF_NAMESPACE_ID::int32 mdtime_;
  ::PROTOBUF_NAMESPACE_ID::int64 datatimestamp_;
  int securityidsource_;
  int securitytype_;
  ::PROTOBUF_NAMESPACE_ID::int32 exchangedate_;
  ::PROTOBUF_NAMESPACE_ID::int32 exchangetime_;
  ::PROTOBUF_NAMESPACE_ID::int32 nanosecond_;
  ::PROTOBUF_NAMESPACE_ID::int32 channelno_;
  ::PROTOBUF_NAMESPACE_ID::int64 orderindex_;
  ::PROTOBUF_NAMESPACE_ID::int64 originalorderindex_;
  ::PROTOBUF_NAMESPACE_ID::int64 orderprice_;
  ::PROTOBUF_NAMESPACE_ID::int32 ordertype_;
  ::PROTOBUF_NAMESPACE_ID::int32 orderbsflag_;
  double orderqty_;
  ::PROTOBUF_NAMESPACE_ID::int32 trackingnum_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_MDUSAOrder_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MDUSAOrder

// string HTSCSecurityID = 1;
inline void MDUSAOrder::clear_htscsecurityid() {
  htscsecurityid_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& MDUSAOrder::htscsecurityid() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDUSAOrder.HTSCSecurityID)
  return htscsecurityid_.GetNoArena();
}
inline void MDUSAOrder::set_htscsecurityid(const std::string& value) {
  
  htscsecurityid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDUSAOrder.HTSCSecurityID)
}
inline void MDUSAOrder::set_htscsecurityid(std::string&& value) {
  
  htscsecurityid_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:com.htsc.mdc.insight.model.MDUSAOrder.HTSCSecurityID)
}
inline void MDUSAOrder::set_htscsecurityid(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  htscsecurityid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.htsc.mdc.insight.model.MDUSAOrder.HTSCSecurityID)
}
inline void MDUSAOrder::set_htscsecurityid(const char* value, size_t size) {
  
  htscsecurityid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.htsc.mdc.insight.model.MDUSAOrder.HTSCSecurityID)
}
inline std::string* MDUSAOrder::mutable_htscsecurityid() {
  
  // @@protoc_insertion_point(field_mutable:com.htsc.mdc.insight.model.MDUSAOrder.HTSCSecurityID)
  return htscsecurityid_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* MDUSAOrder::release_htscsecurityid() {
  // @@protoc_insertion_point(field_release:com.htsc.mdc.insight.model.MDUSAOrder.HTSCSecurityID)
  
  return htscsecurityid_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void MDUSAOrder::set_allocated_htscsecurityid(std::string* htscsecurityid) {
  if (htscsecurityid != nullptr) {
    
  } else {
    
  }
  htscsecurityid_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), htscsecurityid);
  // @@protoc_insertion_point(field_set_allocated:com.htsc.mdc.insight.model.MDUSAOrder.HTSCSecurityID)
}

// int32 MDDate = 2;
inline void MDUSAOrder::clear_mddate() {
  mddate_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MDUSAOrder::mddate() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDUSAOrder.MDDate)
  return mddate_;
}
inline void MDUSAOrder::set_mddate(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  mddate_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDUSAOrder.MDDate)
}

// int32 MDTime = 3;
inline void MDUSAOrder::clear_mdtime() {
  mdtime_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MDUSAOrder::mdtime() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDUSAOrder.MDTime)
  return mdtime_;
}
inline void MDUSAOrder::set_mdtime(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  mdtime_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDUSAOrder.MDTime)
}

// int64 DataTimestamp = 4;
inline void MDUSAOrder::clear_datatimestamp() {
  datatimestamp_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 MDUSAOrder::datatimestamp() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDUSAOrder.DataTimestamp)
  return datatimestamp_;
}
inline void MDUSAOrder::set_datatimestamp(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  datatimestamp_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDUSAOrder.DataTimestamp)
}

// .com.htsc.mdc.model.ESecurityIDSource securityIDSource = 5;
inline void MDUSAOrder::clear_securityidsource() {
  securityidsource_ = 0;
}
inline ::com::htsc::mdc::model::ESecurityIDSource MDUSAOrder::securityidsource() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDUSAOrder.securityIDSource)
  return static_cast< ::com::htsc::mdc::model::ESecurityIDSource >(securityidsource_);
}
inline void MDUSAOrder::set_securityidsource(::com::htsc::mdc::model::ESecurityIDSource value) {
  
  securityidsource_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDUSAOrder.securityIDSource)
}

// .com.htsc.mdc.model.ESecurityType securityType = 6;
inline void MDUSAOrder::clear_securitytype() {
  securitytype_ = 0;
}
inline ::com::htsc::mdc::model::ESecurityType MDUSAOrder::securitytype() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDUSAOrder.securityType)
  return static_cast< ::com::htsc::mdc::model::ESecurityType >(securitytype_);
}
inline void MDUSAOrder::set_securitytype(::com::htsc::mdc::model::ESecurityType value) {
  
  securitytype_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDUSAOrder.securityType)
}

// int32 ExchangeDate = 7;
inline void MDUSAOrder::clear_exchangedate() {
  exchangedate_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MDUSAOrder::exchangedate() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDUSAOrder.ExchangeDate)
  return exchangedate_;
}
inline void MDUSAOrder::set_exchangedate(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  exchangedate_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDUSAOrder.ExchangeDate)
}

// int32 ExchangeTime = 8;
inline void MDUSAOrder::clear_exchangetime() {
  exchangetime_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MDUSAOrder::exchangetime() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDUSAOrder.ExchangeTime)
  return exchangetime_;
}
inline void MDUSAOrder::set_exchangetime(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  exchangetime_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDUSAOrder.ExchangeTime)
}

// int32 Nanosecond = 9;
inline void MDUSAOrder::clear_nanosecond() {
  nanosecond_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MDUSAOrder::nanosecond() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDUSAOrder.Nanosecond)
  return nanosecond_;
}
inline void MDUSAOrder::set_nanosecond(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  nanosecond_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDUSAOrder.Nanosecond)
}

// int32 ChannelNo = 10;
inline void MDUSAOrder::clear_channelno() {
  channelno_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MDUSAOrder::channelno() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDUSAOrder.ChannelNo)
  return channelno_;
}
inline void MDUSAOrder::set_channelno(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  channelno_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDUSAOrder.ChannelNo)
}

// int64 OrderIndex = 11;
inline void MDUSAOrder::clear_orderindex() {
  orderindex_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 MDUSAOrder::orderindex() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDUSAOrder.OrderIndex)
  return orderindex_;
}
inline void MDUSAOrder::set_orderindex(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  orderindex_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDUSAOrder.OrderIndex)
}

// int64 OriginalOrderIndex = 12;
inline void MDUSAOrder::clear_originalorderindex() {
  originalorderindex_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 MDUSAOrder::originalorderindex() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDUSAOrder.OriginalOrderIndex)
  return originalorderindex_;
}
inline void MDUSAOrder::set_originalorderindex(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  originalorderindex_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDUSAOrder.OriginalOrderIndex)
}

// int32 OrderType = 13;
inline void MDUSAOrder::clear_ordertype() {
  ordertype_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MDUSAOrder::ordertype() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDUSAOrder.OrderType)
  return ordertype_;
}
inline void MDUSAOrder::set_ordertype(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  ordertype_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDUSAOrder.OrderType)
}

// int64 OrderPrice = 14;
inline void MDUSAOrder::clear_orderprice() {
  orderprice_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 MDUSAOrder::orderprice() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDUSAOrder.OrderPrice)
  return orderprice_;
}
inline void MDUSAOrder::set_orderprice(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  orderprice_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDUSAOrder.OrderPrice)
}

// double OrderQty = 15;
inline void MDUSAOrder::clear_orderqty() {
  orderqty_ = 0;
}
inline double MDUSAOrder::orderqty() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDUSAOrder.OrderQty)
  return orderqty_;
}
inline void MDUSAOrder::set_orderqty(double value) {
  
  orderqty_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDUSAOrder.OrderQty)
}

// int32 OrderBSFlag = 16;
inline void MDUSAOrder::clear_orderbsflag() {
  orderbsflag_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MDUSAOrder::orderbsflag() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDUSAOrder.OrderBSFlag)
  return orderbsflag_;
}
inline void MDUSAOrder::set_orderbsflag(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  orderbsflag_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDUSAOrder.OrderBSFlag)
}

// string Attribution = 17;
inline void MDUSAOrder::clear_attribution() {
  attribution_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& MDUSAOrder::attribution() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDUSAOrder.Attribution)
  return attribution_.GetNoArena();
}
inline void MDUSAOrder::set_attribution(const std::string& value) {
  
  attribution_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDUSAOrder.Attribution)
}
inline void MDUSAOrder::set_attribution(std::string&& value) {
  
  attribution_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:com.htsc.mdc.insight.model.MDUSAOrder.Attribution)
}
inline void MDUSAOrder::set_attribution(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  attribution_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.htsc.mdc.insight.model.MDUSAOrder.Attribution)
}
inline void MDUSAOrder::set_attribution(const char* value, size_t size) {
  
  attribution_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.htsc.mdc.insight.model.MDUSAOrder.Attribution)
}
inline std::string* MDUSAOrder::mutable_attribution() {
  
  // @@protoc_insertion_point(field_mutable:com.htsc.mdc.insight.model.MDUSAOrder.Attribution)
  return attribution_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* MDUSAOrder::release_attribution() {
  // @@protoc_insertion_point(field_release:com.htsc.mdc.insight.model.MDUSAOrder.Attribution)
  
  return attribution_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void MDUSAOrder::set_allocated_attribution(std::string* attribution) {
  if (attribution != nullptr) {
    
  } else {
    
  }
  attribution_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), attribution);
  // @@protoc_insertion_point(field_set_allocated:com.htsc.mdc.insight.model.MDUSAOrder.Attribution)
}

// int32 TrackingNum = 18;
inline void MDUSAOrder::clear_trackingnum() {
  trackingnum_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MDUSAOrder::trackingnum() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDUSAOrder.TrackingNum)
  return trackingnum_;
}
inline void MDUSAOrder::set_trackingnum(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  trackingnum_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDUSAOrder.TrackingNum)
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_MDUSAOrder_2eproto
