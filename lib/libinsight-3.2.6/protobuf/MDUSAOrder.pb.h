// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MDUSAOrder.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_MDUSAOrder_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_MDUSAOrder_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
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
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_MDUSAOrder_2eproto;
namespace com {
namespace htsc {
namespace mdc {
namespace insight {
namespace model {
class MDUSAOrder;
struct MDUSAOrderDefaultTypeInternal;
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

class MDUSAOrder final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:com.htsc.mdc.insight.model.MDUSAOrder) */ {
 public:
  inline MDUSAOrder() : MDUSAOrder(nullptr) {}
  ~MDUSAOrder() override;
  explicit PROTOBUF_CONSTEXPR MDUSAOrder(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

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
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const MDUSAOrder& default_instance() {
    return *internal_default_instance();
  }
  static inline const MDUSAOrder* internal_default_instance() {
    return reinterpret_cast<const MDUSAOrder*>(
               &_MDUSAOrder_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(MDUSAOrder& a, MDUSAOrder& b) {
    a.Swap(&b);
  }
  inline void Swap(MDUSAOrder* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(MDUSAOrder* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  MDUSAOrder* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<MDUSAOrder>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const MDUSAOrder& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const MDUSAOrder& from) {
    MDUSAOrder::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(MDUSAOrder* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "com.htsc.mdc.insight.model.MDUSAOrder";
  }
  protected:
  explicit MDUSAOrder(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kHTSCSecurityIDFieldNumber = 1,
    kAttributionFieldNumber = 17,
    kMDDateFieldNumber = 2,
    kMDTimeFieldNumber = 3,
    kDataTimestampFieldNumber = 4,
    kSecurityIDSourceFieldNumber = 5,
    kSecurityTypeFieldNumber = 6,
    kExchangeDateFieldNumber = 7,
    kExchangeTimeFieldNumber = 8,
    kNanosecondFieldNumber = 9,
    kChannelNoFieldNumber = 10,
    kOrderIndexFieldNumber = 11,
    kOriginalOrderIndexFieldNumber = 12,
    kOrderPriceFieldNumber = 14,
    kOrderTypeFieldNumber = 13,
    kOrderBSFlagFieldNumber = 16,
    kOrderQtyFieldNumber = 15,
    kTrackingNumFieldNumber = 18,
    kDataMultiplePowerOf10FieldNumber = 19,
    kDataIndexFieldNumber = 21,
    kTimeIndexFieldNumber = 20,
  };
  // string HTSCSecurityID = 1;
  void clear_htscsecurityid();
  const std::string& htscsecurityid() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_htscsecurityid(ArgT0&& arg0, ArgT... args);
  std::string* mutable_htscsecurityid();
  PROTOBUF_NODISCARD std::string* release_htscsecurityid();
  void set_allocated_htscsecurityid(std::string* htscsecurityid);
  private:
  const std::string& _internal_htscsecurityid() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_htscsecurityid(const std::string& value);
  std::string* _internal_mutable_htscsecurityid();
  public:

  // string Attribution = 17;
  void clear_attribution();
  const std::string& attribution() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_attribution(ArgT0&& arg0, ArgT... args);
  std::string* mutable_attribution();
  PROTOBUF_NODISCARD std::string* release_attribution();
  void set_allocated_attribution(std::string* attribution);
  private:
  const std::string& _internal_attribution() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_attribution(const std::string& value);
  std::string* _internal_mutable_attribution();
  public:

  // int32 MDDate = 2;
  void clear_mddate();
  int32_t mddate() const;
  void set_mddate(int32_t value);
  private:
  int32_t _internal_mddate() const;
  void _internal_set_mddate(int32_t value);
  public:

  // int32 MDTime = 3;
  void clear_mdtime();
  int32_t mdtime() const;
  void set_mdtime(int32_t value);
  private:
  int32_t _internal_mdtime() const;
  void _internal_set_mdtime(int32_t value);
  public:

  // int64 DataTimestamp = 4;
  void clear_datatimestamp();
  int64_t datatimestamp() const;
  void set_datatimestamp(int64_t value);
  private:
  int64_t _internal_datatimestamp() const;
  void _internal_set_datatimestamp(int64_t value);
  public:

  // .com.htsc.mdc.model.ESecurityIDSource securityIDSource = 5;
  void clear_securityidsource();
  ::com::htsc::mdc::model::ESecurityIDSource securityidsource() const;
  void set_securityidsource(::com::htsc::mdc::model::ESecurityIDSource value);
  private:
  ::com::htsc::mdc::model::ESecurityIDSource _internal_securityidsource() const;
  void _internal_set_securityidsource(::com::htsc::mdc::model::ESecurityIDSource value);
  public:

  // .com.htsc.mdc.model.ESecurityType securityType = 6;
  void clear_securitytype();
  ::com::htsc::mdc::model::ESecurityType securitytype() const;
  void set_securitytype(::com::htsc::mdc::model::ESecurityType value);
  private:
  ::com::htsc::mdc::model::ESecurityType _internal_securitytype() const;
  void _internal_set_securitytype(::com::htsc::mdc::model::ESecurityType value);
  public:

  // int32 ExchangeDate = 7;
  void clear_exchangedate();
  int32_t exchangedate() const;
  void set_exchangedate(int32_t value);
  private:
  int32_t _internal_exchangedate() const;
  void _internal_set_exchangedate(int32_t value);
  public:

  // int32 ExchangeTime = 8;
  void clear_exchangetime();
  int32_t exchangetime() const;
  void set_exchangetime(int32_t value);
  private:
  int32_t _internal_exchangetime() const;
  void _internal_set_exchangetime(int32_t value);
  public:

  // int32 Nanosecond = 9;
  void clear_nanosecond();
  int32_t nanosecond() const;
  void set_nanosecond(int32_t value);
  private:
  int32_t _internal_nanosecond() const;
  void _internal_set_nanosecond(int32_t value);
  public:

  // int32 ChannelNo = 10;
  void clear_channelno();
  int32_t channelno() const;
  void set_channelno(int32_t value);
  private:
  int32_t _internal_channelno() const;
  void _internal_set_channelno(int32_t value);
  public:

  // int64 OrderIndex = 11;
  void clear_orderindex();
  int64_t orderindex() const;
  void set_orderindex(int64_t value);
  private:
  int64_t _internal_orderindex() const;
  void _internal_set_orderindex(int64_t value);
  public:

  // int64 OriginalOrderIndex = 12;
  void clear_originalorderindex();
  int64_t originalorderindex() const;
  void set_originalorderindex(int64_t value);
  private:
  int64_t _internal_originalorderindex() const;
  void _internal_set_originalorderindex(int64_t value);
  public:

  // int64 OrderPrice = 14;
  void clear_orderprice();
  int64_t orderprice() const;
  void set_orderprice(int64_t value);
  private:
  int64_t _internal_orderprice() const;
  void _internal_set_orderprice(int64_t value);
  public:

  // int32 OrderType = 13;
  void clear_ordertype();
  int32_t ordertype() const;
  void set_ordertype(int32_t value);
  private:
  int32_t _internal_ordertype() const;
  void _internal_set_ordertype(int32_t value);
  public:

  // int32 OrderBSFlag = 16;
  void clear_orderbsflag();
  int32_t orderbsflag() const;
  void set_orderbsflag(int32_t value);
  private:
  int32_t _internal_orderbsflag() const;
  void _internal_set_orderbsflag(int32_t value);
  public:

  // double OrderQty = 15;
  void clear_orderqty();
  double orderqty() const;
  void set_orderqty(double value);
  private:
  double _internal_orderqty() const;
  void _internal_set_orderqty(double value);
  public:

  // int32 TrackingNum = 18;
  void clear_trackingnum();
  int32_t trackingnum() const;
  void set_trackingnum(int32_t value);
  private:
  int32_t _internal_trackingnum() const;
  void _internal_set_trackingnum(int32_t value);
  public:

  // int32 DataMultiplePowerOf10 = 19;
  void clear_datamultiplepowerof10();
  int32_t datamultiplepowerof10() const;
  void set_datamultiplepowerof10(int32_t value);
  private:
  int32_t _internal_datamultiplepowerof10() const;
  void _internal_set_datamultiplepowerof10(int32_t value);
  public:

  // int64 DataIndex = 21;
  void clear_dataindex();
  int64_t dataindex() const;
  void set_dataindex(int64_t value);
  private:
  int64_t _internal_dataindex() const;
  void _internal_set_dataindex(int64_t value);
  public:

  // int32 TimeIndex = 20;
  void clear_timeindex();
  int32_t timeindex() const;
  void set_timeindex(int32_t value);
  private:
  int32_t _internal_timeindex() const;
  void _internal_set_timeindex(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:com.htsc.mdc.insight.model.MDUSAOrder)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr htscsecurityid_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr attribution_;
    int32_t mddate_;
    int32_t mdtime_;
    int64_t datatimestamp_;
    int securityidsource_;
    int securitytype_;
    int32_t exchangedate_;
    int32_t exchangetime_;
    int32_t nanosecond_;
    int32_t channelno_;
    int64_t orderindex_;
    int64_t originalorderindex_;
    int64_t orderprice_;
    int32_t ordertype_;
    int32_t orderbsflag_;
    double orderqty_;
    int32_t trackingnum_;
    int32_t datamultiplepowerof10_;
    int64_t dataindex_;
    int32_t timeindex_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
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
  _impl_.htscsecurityid_.ClearToEmpty();
}
inline const std::string& MDUSAOrder::htscsecurityid() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDUSAOrder.HTSCSecurityID)
  return _internal_htscsecurityid();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void MDUSAOrder::set_htscsecurityid(ArgT0&& arg0, ArgT... args) {
 
 _impl_.htscsecurityid_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDUSAOrder.HTSCSecurityID)
}
inline std::string* MDUSAOrder::mutable_htscsecurityid() {
  std::string* _s = _internal_mutable_htscsecurityid();
  // @@protoc_insertion_point(field_mutable:com.htsc.mdc.insight.model.MDUSAOrder.HTSCSecurityID)
  return _s;
}
inline const std::string& MDUSAOrder::_internal_htscsecurityid() const {
  return _impl_.htscsecurityid_.Get();
}
inline void MDUSAOrder::_internal_set_htscsecurityid(const std::string& value) {
  
  _impl_.htscsecurityid_.Set(value, GetArenaForAllocation());
}
inline std::string* MDUSAOrder::_internal_mutable_htscsecurityid() {
  
  return _impl_.htscsecurityid_.Mutable(GetArenaForAllocation());
}
inline std::string* MDUSAOrder::release_htscsecurityid() {
  // @@protoc_insertion_point(field_release:com.htsc.mdc.insight.model.MDUSAOrder.HTSCSecurityID)
  return _impl_.htscsecurityid_.Release();
}
inline void MDUSAOrder::set_allocated_htscsecurityid(std::string* htscsecurityid) {
  if (htscsecurityid != nullptr) {
    
  } else {
    
  }
  _impl_.htscsecurityid_.SetAllocated(htscsecurityid, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.htscsecurityid_.IsDefault()) {
    _impl_.htscsecurityid_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:com.htsc.mdc.insight.model.MDUSAOrder.HTSCSecurityID)
}

// int32 MDDate = 2;
inline void MDUSAOrder::clear_mddate() {
  _impl_.mddate_ = 0;
}
inline int32_t MDUSAOrder::_internal_mddate() const {
  return _impl_.mddate_;
}
inline int32_t MDUSAOrder::mddate() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDUSAOrder.MDDate)
  return _internal_mddate();
}
inline void MDUSAOrder::_internal_set_mddate(int32_t value) {
  
  _impl_.mddate_ = value;
}
inline void MDUSAOrder::set_mddate(int32_t value) {
  _internal_set_mddate(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDUSAOrder.MDDate)
}

// int32 MDTime = 3;
inline void MDUSAOrder::clear_mdtime() {
  _impl_.mdtime_ = 0;
}
inline int32_t MDUSAOrder::_internal_mdtime() const {
  return _impl_.mdtime_;
}
inline int32_t MDUSAOrder::mdtime() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDUSAOrder.MDTime)
  return _internal_mdtime();
}
inline void MDUSAOrder::_internal_set_mdtime(int32_t value) {
  
  _impl_.mdtime_ = value;
}
inline void MDUSAOrder::set_mdtime(int32_t value) {
  _internal_set_mdtime(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDUSAOrder.MDTime)
}

// int64 DataTimestamp = 4;
inline void MDUSAOrder::clear_datatimestamp() {
  _impl_.datatimestamp_ = int64_t{0};
}
inline int64_t MDUSAOrder::_internal_datatimestamp() const {
  return _impl_.datatimestamp_;
}
inline int64_t MDUSAOrder::datatimestamp() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDUSAOrder.DataTimestamp)
  return _internal_datatimestamp();
}
inline void MDUSAOrder::_internal_set_datatimestamp(int64_t value) {
  
  _impl_.datatimestamp_ = value;
}
inline void MDUSAOrder::set_datatimestamp(int64_t value) {
  _internal_set_datatimestamp(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDUSAOrder.DataTimestamp)
}

// .com.htsc.mdc.model.ESecurityIDSource securityIDSource = 5;
inline void MDUSAOrder::clear_securityidsource() {
  _impl_.securityidsource_ = 0;
}
inline ::com::htsc::mdc::model::ESecurityIDSource MDUSAOrder::_internal_securityidsource() const {
  return static_cast< ::com::htsc::mdc::model::ESecurityIDSource >(_impl_.securityidsource_);
}
inline ::com::htsc::mdc::model::ESecurityIDSource MDUSAOrder::securityidsource() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDUSAOrder.securityIDSource)
  return _internal_securityidsource();
}
inline void MDUSAOrder::_internal_set_securityidsource(::com::htsc::mdc::model::ESecurityIDSource value) {
  
  _impl_.securityidsource_ = value;
}
inline void MDUSAOrder::set_securityidsource(::com::htsc::mdc::model::ESecurityIDSource value) {
  _internal_set_securityidsource(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDUSAOrder.securityIDSource)
}

// .com.htsc.mdc.model.ESecurityType securityType = 6;
inline void MDUSAOrder::clear_securitytype() {
  _impl_.securitytype_ = 0;
}
inline ::com::htsc::mdc::model::ESecurityType MDUSAOrder::_internal_securitytype() const {
  return static_cast< ::com::htsc::mdc::model::ESecurityType >(_impl_.securitytype_);
}
inline ::com::htsc::mdc::model::ESecurityType MDUSAOrder::securitytype() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDUSAOrder.securityType)
  return _internal_securitytype();
}
inline void MDUSAOrder::_internal_set_securitytype(::com::htsc::mdc::model::ESecurityType value) {
  
  _impl_.securitytype_ = value;
}
inline void MDUSAOrder::set_securitytype(::com::htsc::mdc::model::ESecurityType value) {
  _internal_set_securitytype(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDUSAOrder.securityType)
}

// int32 ExchangeDate = 7;
inline void MDUSAOrder::clear_exchangedate() {
  _impl_.exchangedate_ = 0;
}
inline int32_t MDUSAOrder::_internal_exchangedate() const {
  return _impl_.exchangedate_;
}
inline int32_t MDUSAOrder::exchangedate() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDUSAOrder.ExchangeDate)
  return _internal_exchangedate();
}
inline void MDUSAOrder::_internal_set_exchangedate(int32_t value) {
  
  _impl_.exchangedate_ = value;
}
inline void MDUSAOrder::set_exchangedate(int32_t value) {
  _internal_set_exchangedate(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDUSAOrder.ExchangeDate)
}

// int32 ExchangeTime = 8;
inline void MDUSAOrder::clear_exchangetime() {
  _impl_.exchangetime_ = 0;
}
inline int32_t MDUSAOrder::_internal_exchangetime() const {
  return _impl_.exchangetime_;
}
inline int32_t MDUSAOrder::exchangetime() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDUSAOrder.ExchangeTime)
  return _internal_exchangetime();
}
inline void MDUSAOrder::_internal_set_exchangetime(int32_t value) {
  
  _impl_.exchangetime_ = value;
}
inline void MDUSAOrder::set_exchangetime(int32_t value) {
  _internal_set_exchangetime(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDUSAOrder.ExchangeTime)
}

// int32 Nanosecond = 9;
inline void MDUSAOrder::clear_nanosecond() {
  _impl_.nanosecond_ = 0;
}
inline int32_t MDUSAOrder::_internal_nanosecond() const {
  return _impl_.nanosecond_;
}
inline int32_t MDUSAOrder::nanosecond() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDUSAOrder.Nanosecond)
  return _internal_nanosecond();
}
inline void MDUSAOrder::_internal_set_nanosecond(int32_t value) {
  
  _impl_.nanosecond_ = value;
}
inline void MDUSAOrder::set_nanosecond(int32_t value) {
  _internal_set_nanosecond(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDUSAOrder.Nanosecond)
}

// int32 ChannelNo = 10;
inline void MDUSAOrder::clear_channelno() {
  _impl_.channelno_ = 0;
}
inline int32_t MDUSAOrder::_internal_channelno() const {
  return _impl_.channelno_;
}
inline int32_t MDUSAOrder::channelno() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDUSAOrder.ChannelNo)
  return _internal_channelno();
}
inline void MDUSAOrder::_internal_set_channelno(int32_t value) {
  
  _impl_.channelno_ = value;
}
inline void MDUSAOrder::set_channelno(int32_t value) {
  _internal_set_channelno(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDUSAOrder.ChannelNo)
}

// int64 OrderIndex = 11;
inline void MDUSAOrder::clear_orderindex() {
  _impl_.orderindex_ = int64_t{0};
}
inline int64_t MDUSAOrder::_internal_orderindex() const {
  return _impl_.orderindex_;
}
inline int64_t MDUSAOrder::orderindex() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDUSAOrder.OrderIndex)
  return _internal_orderindex();
}
inline void MDUSAOrder::_internal_set_orderindex(int64_t value) {
  
  _impl_.orderindex_ = value;
}
inline void MDUSAOrder::set_orderindex(int64_t value) {
  _internal_set_orderindex(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDUSAOrder.OrderIndex)
}

// int64 OriginalOrderIndex = 12;
inline void MDUSAOrder::clear_originalorderindex() {
  _impl_.originalorderindex_ = int64_t{0};
}
inline int64_t MDUSAOrder::_internal_originalorderindex() const {
  return _impl_.originalorderindex_;
}
inline int64_t MDUSAOrder::originalorderindex() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDUSAOrder.OriginalOrderIndex)
  return _internal_originalorderindex();
}
inline void MDUSAOrder::_internal_set_originalorderindex(int64_t value) {
  
  _impl_.originalorderindex_ = value;
}
inline void MDUSAOrder::set_originalorderindex(int64_t value) {
  _internal_set_originalorderindex(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDUSAOrder.OriginalOrderIndex)
}

// int32 OrderType = 13;
inline void MDUSAOrder::clear_ordertype() {
  _impl_.ordertype_ = 0;
}
inline int32_t MDUSAOrder::_internal_ordertype() const {
  return _impl_.ordertype_;
}
inline int32_t MDUSAOrder::ordertype() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDUSAOrder.OrderType)
  return _internal_ordertype();
}
inline void MDUSAOrder::_internal_set_ordertype(int32_t value) {
  
  _impl_.ordertype_ = value;
}
inline void MDUSAOrder::set_ordertype(int32_t value) {
  _internal_set_ordertype(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDUSAOrder.OrderType)
}

// int64 OrderPrice = 14;
inline void MDUSAOrder::clear_orderprice() {
  _impl_.orderprice_ = int64_t{0};
}
inline int64_t MDUSAOrder::_internal_orderprice() const {
  return _impl_.orderprice_;
}
inline int64_t MDUSAOrder::orderprice() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDUSAOrder.OrderPrice)
  return _internal_orderprice();
}
inline void MDUSAOrder::_internal_set_orderprice(int64_t value) {
  
  _impl_.orderprice_ = value;
}
inline void MDUSAOrder::set_orderprice(int64_t value) {
  _internal_set_orderprice(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDUSAOrder.OrderPrice)
}

// double OrderQty = 15;
inline void MDUSAOrder::clear_orderqty() {
  _impl_.orderqty_ = 0;
}
inline double MDUSAOrder::_internal_orderqty() const {
  return _impl_.orderqty_;
}
inline double MDUSAOrder::orderqty() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDUSAOrder.OrderQty)
  return _internal_orderqty();
}
inline void MDUSAOrder::_internal_set_orderqty(double value) {
  
  _impl_.orderqty_ = value;
}
inline void MDUSAOrder::set_orderqty(double value) {
  _internal_set_orderqty(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDUSAOrder.OrderQty)
}

// int32 OrderBSFlag = 16;
inline void MDUSAOrder::clear_orderbsflag() {
  _impl_.orderbsflag_ = 0;
}
inline int32_t MDUSAOrder::_internal_orderbsflag() const {
  return _impl_.orderbsflag_;
}
inline int32_t MDUSAOrder::orderbsflag() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDUSAOrder.OrderBSFlag)
  return _internal_orderbsflag();
}
inline void MDUSAOrder::_internal_set_orderbsflag(int32_t value) {
  
  _impl_.orderbsflag_ = value;
}
inline void MDUSAOrder::set_orderbsflag(int32_t value) {
  _internal_set_orderbsflag(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDUSAOrder.OrderBSFlag)
}

// string Attribution = 17;
inline void MDUSAOrder::clear_attribution() {
  _impl_.attribution_.ClearToEmpty();
}
inline const std::string& MDUSAOrder::attribution() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDUSAOrder.Attribution)
  return _internal_attribution();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void MDUSAOrder::set_attribution(ArgT0&& arg0, ArgT... args) {
 
 _impl_.attribution_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDUSAOrder.Attribution)
}
inline std::string* MDUSAOrder::mutable_attribution() {
  std::string* _s = _internal_mutable_attribution();
  // @@protoc_insertion_point(field_mutable:com.htsc.mdc.insight.model.MDUSAOrder.Attribution)
  return _s;
}
inline const std::string& MDUSAOrder::_internal_attribution() const {
  return _impl_.attribution_.Get();
}
inline void MDUSAOrder::_internal_set_attribution(const std::string& value) {
  
  _impl_.attribution_.Set(value, GetArenaForAllocation());
}
inline std::string* MDUSAOrder::_internal_mutable_attribution() {
  
  return _impl_.attribution_.Mutable(GetArenaForAllocation());
}
inline std::string* MDUSAOrder::release_attribution() {
  // @@protoc_insertion_point(field_release:com.htsc.mdc.insight.model.MDUSAOrder.Attribution)
  return _impl_.attribution_.Release();
}
inline void MDUSAOrder::set_allocated_attribution(std::string* attribution) {
  if (attribution != nullptr) {
    
  } else {
    
  }
  _impl_.attribution_.SetAllocated(attribution, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.attribution_.IsDefault()) {
    _impl_.attribution_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:com.htsc.mdc.insight.model.MDUSAOrder.Attribution)
}

// int32 TrackingNum = 18;
inline void MDUSAOrder::clear_trackingnum() {
  _impl_.trackingnum_ = 0;
}
inline int32_t MDUSAOrder::_internal_trackingnum() const {
  return _impl_.trackingnum_;
}
inline int32_t MDUSAOrder::trackingnum() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDUSAOrder.TrackingNum)
  return _internal_trackingnum();
}
inline void MDUSAOrder::_internal_set_trackingnum(int32_t value) {
  
  _impl_.trackingnum_ = value;
}
inline void MDUSAOrder::set_trackingnum(int32_t value) {
  _internal_set_trackingnum(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDUSAOrder.TrackingNum)
}

// int32 DataMultiplePowerOf10 = 19;
inline void MDUSAOrder::clear_datamultiplepowerof10() {
  _impl_.datamultiplepowerof10_ = 0;
}
inline int32_t MDUSAOrder::_internal_datamultiplepowerof10() const {
  return _impl_.datamultiplepowerof10_;
}
inline int32_t MDUSAOrder::datamultiplepowerof10() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDUSAOrder.DataMultiplePowerOf10)
  return _internal_datamultiplepowerof10();
}
inline void MDUSAOrder::_internal_set_datamultiplepowerof10(int32_t value) {
  
  _impl_.datamultiplepowerof10_ = value;
}
inline void MDUSAOrder::set_datamultiplepowerof10(int32_t value) {
  _internal_set_datamultiplepowerof10(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDUSAOrder.DataMultiplePowerOf10)
}

// int32 TimeIndex = 20;
inline void MDUSAOrder::clear_timeindex() {
  _impl_.timeindex_ = 0;
}
inline int32_t MDUSAOrder::_internal_timeindex() const {
  return _impl_.timeindex_;
}
inline int32_t MDUSAOrder::timeindex() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDUSAOrder.TimeIndex)
  return _internal_timeindex();
}
inline void MDUSAOrder::_internal_set_timeindex(int32_t value) {
  
  _impl_.timeindex_ = value;
}
inline void MDUSAOrder::set_timeindex(int32_t value) {
  _internal_set_timeindex(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDUSAOrder.TimeIndex)
}

// int64 DataIndex = 21;
inline void MDUSAOrder::clear_dataindex() {
  _impl_.dataindex_ = int64_t{0};
}
inline int64_t MDUSAOrder::_internal_dataindex() const {
  return _impl_.dataindex_;
}
inline int64_t MDUSAOrder::dataindex() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDUSAOrder.DataIndex)
  return _internal_dataindex();
}
inline void MDUSAOrder::_internal_set_dataindex(int64_t value) {
  
  _impl_.dataindex_ = value;
}
inline void MDUSAOrder::set_dataindex(int64_t value) {
  _internal_set_dataindex(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDUSAOrder.DataIndex)
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
