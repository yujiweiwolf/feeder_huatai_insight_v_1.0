// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MDCfetsRateSnapshot.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_MDCfetsRateSnapshot_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_MDCfetsRateSnapshot_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_MDCfetsRateSnapshot_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_MDCfetsRateSnapshot_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_MDCfetsRateSnapshot_2eproto;
namespace com {
namespace htsc {
namespace mdc {
namespace insight {
namespace model {
class MDCfetsRateSnapshot;
struct MDCfetsRateSnapshotDefaultTypeInternal;
extern MDCfetsRateSnapshotDefaultTypeInternal _MDCfetsRateSnapshot_default_instance_;
}  // namespace model
}  // namespace insight
}  // namespace mdc
}  // namespace htsc
}  // namespace com
PROTOBUF_NAMESPACE_OPEN
template<> ::com::htsc::mdc::insight::model::MDCfetsRateSnapshot* Arena::CreateMaybeMessage<::com::htsc::mdc::insight::model::MDCfetsRateSnapshot>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace com {
namespace htsc {
namespace mdc {
namespace insight {
namespace model {

// ===================================================================

class MDCfetsRateSnapshot final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:com.htsc.mdc.insight.model.MDCfetsRateSnapshot) */ {
 public:
  inline MDCfetsRateSnapshot() : MDCfetsRateSnapshot(nullptr) {}
  ~MDCfetsRateSnapshot() override;
  explicit PROTOBUF_CONSTEXPR MDCfetsRateSnapshot(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  MDCfetsRateSnapshot(const MDCfetsRateSnapshot& from);
  MDCfetsRateSnapshot(MDCfetsRateSnapshot&& from) noexcept
    : MDCfetsRateSnapshot() {
    *this = ::std::move(from);
  }

  inline MDCfetsRateSnapshot& operator=(const MDCfetsRateSnapshot& from) {
    CopyFrom(from);
    return *this;
  }
  inline MDCfetsRateSnapshot& operator=(MDCfetsRateSnapshot&& from) noexcept {
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
  static const MDCfetsRateSnapshot& default_instance() {
    return *internal_default_instance();
  }
  static inline const MDCfetsRateSnapshot* internal_default_instance() {
    return reinterpret_cast<const MDCfetsRateSnapshot*>(
               &_MDCfetsRateSnapshot_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(MDCfetsRateSnapshot& a, MDCfetsRateSnapshot& b) {
    a.Swap(&b);
  }
  inline void Swap(MDCfetsRateSnapshot* other) {
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
  void UnsafeArenaSwap(MDCfetsRateSnapshot* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  MDCfetsRateSnapshot* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<MDCfetsRateSnapshot>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const MDCfetsRateSnapshot& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const MDCfetsRateSnapshot& from) {
    MDCfetsRateSnapshot::MergeImpl(*this, from);
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
  void InternalSwap(MDCfetsRateSnapshot* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "com.htsc.mdc.insight.model.MDCfetsRateSnapshot";
  }
  protected:
  explicit MDCfetsRateSnapshot(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kHTSCSecurityIDFieldNumber = 1,
    kTransactTimeFieldNumber = 7,
    kMarketIndicatorFieldNumber = 8,
    kSecurityTypeFieldNumber = 2,
    kSecurityIDSourceFieldNumber = 3,
    kMDDateFieldNumber = 4,
    kMDTimeFieldNumber = 5,
    kDataTimestampFieldNumber = 6,
    kDataMultiplePowerOf10FieldNumber = 9,
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

  // string TransactTime = 7;
  void clear_transacttime();
  const std::string& transacttime() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_transacttime(ArgT0&& arg0, ArgT... args);
  std::string* mutable_transacttime();
  PROTOBUF_NODISCARD std::string* release_transacttime();
  void set_allocated_transacttime(std::string* transacttime);
  private:
  const std::string& _internal_transacttime() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_transacttime(const std::string& value);
  std::string* _internal_mutable_transacttime();
  public:

  // string MarketIndicator = 8;
  void clear_marketindicator();
  const std::string& marketindicator() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_marketindicator(ArgT0&& arg0, ArgT... args);
  std::string* mutable_marketindicator();
  PROTOBUF_NODISCARD std::string* release_marketindicator();
  void set_allocated_marketindicator(std::string* marketindicator);
  private:
  const std::string& _internal_marketindicator() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_marketindicator(const std::string& value);
  std::string* _internal_mutable_marketindicator();
  public:

  // .com.htsc.mdc.model.ESecurityType SecurityType = 2;
  void clear_securitytype();
  ::com::htsc::mdc::model::ESecurityType securitytype() const;
  void set_securitytype(::com::htsc::mdc::model::ESecurityType value);
  private:
  ::com::htsc::mdc::model::ESecurityType _internal_securitytype() const;
  void _internal_set_securitytype(::com::htsc::mdc::model::ESecurityType value);
  public:

  // .com.htsc.mdc.model.ESecurityIDSource SecurityIDSource = 3;
  void clear_securityidsource();
  ::com::htsc::mdc::model::ESecurityIDSource securityidsource() const;
  void set_securityidsource(::com::htsc::mdc::model::ESecurityIDSource value);
  private:
  ::com::htsc::mdc::model::ESecurityIDSource _internal_securityidsource() const;
  void _internal_set_securityidsource(::com::htsc::mdc::model::ESecurityIDSource value);
  public:

  // int32 MDDate = 4;
  void clear_mddate();
  int32_t mddate() const;
  void set_mddate(int32_t value);
  private:
  int32_t _internal_mddate() const;
  void _internal_set_mddate(int32_t value);
  public:

  // int32 MDTime = 5;
  void clear_mdtime();
  int32_t mdtime() const;
  void set_mdtime(int32_t value);
  private:
  int32_t _internal_mdtime() const;
  void _internal_set_mdtime(int32_t value);
  public:

  // int64 DataTimestamp = 6;
  void clear_datatimestamp();
  int64_t datatimestamp() const;
  void set_datatimestamp(int64_t value);
  private:
  int64_t _internal_datatimestamp() const;
  void _internal_set_datatimestamp(int64_t value);
  public:

  // int32 DataMultiplePowerOf10 = 9;
  void clear_datamultiplepowerof10();
  int32_t datamultiplepowerof10() const;
  void set_datamultiplepowerof10(int32_t value);
  private:
  int32_t _internal_datamultiplepowerof10() const;
  void _internal_set_datamultiplepowerof10(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:com.htsc.mdc.insight.model.MDCfetsRateSnapshot)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr htscsecurityid_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr transacttime_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr marketindicator_;
    int securitytype_;
    int securityidsource_;
    int32_t mddate_;
    int32_t mdtime_;
    int64_t datatimestamp_;
    int32_t datamultiplepowerof10_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_MDCfetsRateSnapshot_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MDCfetsRateSnapshot

// string HTSCSecurityID = 1;
inline void MDCfetsRateSnapshot::clear_htscsecurityid() {
  _impl_.htscsecurityid_.ClearToEmpty();
}
inline const std::string& MDCfetsRateSnapshot::htscsecurityid() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDCfetsRateSnapshot.HTSCSecurityID)
  return _internal_htscsecurityid();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void MDCfetsRateSnapshot::set_htscsecurityid(ArgT0&& arg0, ArgT... args) {
 
 _impl_.htscsecurityid_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDCfetsRateSnapshot.HTSCSecurityID)
}
inline std::string* MDCfetsRateSnapshot::mutable_htscsecurityid() {
  std::string* _s = _internal_mutable_htscsecurityid();
  // @@protoc_insertion_point(field_mutable:com.htsc.mdc.insight.model.MDCfetsRateSnapshot.HTSCSecurityID)
  return _s;
}
inline const std::string& MDCfetsRateSnapshot::_internal_htscsecurityid() const {
  return _impl_.htscsecurityid_.Get();
}
inline void MDCfetsRateSnapshot::_internal_set_htscsecurityid(const std::string& value) {
  
  _impl_.htscsecurityid_.Set(value, GetArenaForAllocation());
}
inline std::string* MDCfetsRateSnapshot::_internal_mutable_htscsecurityid() {
  
  return _impl_.htscsecurityid_.Mutable(GetArenaForAllocation());
}
inline std::string* MDCfetsRateSnapshot::release_htscsecurityid() {
  // @@protoc_insertion_point(field_release:com.htsc.mdc.insight.model.MDCfetsRateSnapshot.HTSCSecurityID)
  return _impl_.htscsecurityid_.Release();
}
inline void MDCfetsRateSnapshot::set_allocated_htscsecurityid(std::string* htscsecurityid) {
  if (htscsecurityid != nullptr) {
    
  } else {
    
  }
  _impl_.htscsecurityid_.SetAllocated(htscsecurityid, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.htscsecurityid_.IsDefault()) {
    _impl_.htscsecurityid_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:com.htsc.mdc.insight.model.MDCfetsRateSnapshot.HTSCSecurityID)
}

// .com.htsc.mdc.model.ESecurityType SecurityType = 2;
inline void MDCfetsRateSnapshot::clear_securitytype() {
  _impl_.securitytype_ = 0;
}
inline ::com::htsc::mdc::model::ESecurityType MDCfetsRateSnapshot::_internal_securitytype() const {
  return static_cast< ::com::htsc::mdc::model::ESecurityType >(_impl_.securitytype_);
}
inline ::com::htsc::mdc::model::ESecurityType MDCfetsRateSnapshot::securitytype() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDCfetsRateSnapshot.SecurityType)
  return _internal_securitytype();
}
inline void MDCfetsRateSnapshot::_internal_set_securitytype(::com::htsc::mdc::model::ESecurityType value) {
  
  _impl_.securitytype_ = value;
}
inline void MDCfetsRateSnapshot::set_securitytype(::com::htsc::mdc::model::ESecurityType value) {
  _internal_set_securitytype(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDCfetsRateSnapshot.SecurityType)
}

// .com.htsc.mdc.model.ESecurityIDSource SecurityIDSource = 3;
inline void MDCfetsRateSnapshot::clear_securityidsource() {
  _impl_.securityidsource_ = 0;
}
inline ::com::htsc::mdc::model::ESecurityIDSource MDCfetsRateSnapshot::_internal_securityidsource() const {
  return static_cast< ::com::htsc::mdc::model::ESecurityIDSource >(_impl_.securityidsource_);
}
inline ::com::htsc::mdc::model::ESecurityIDSource MDCfetsRateSnapshot::securityidsource() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDCfetsRateSnapshot.SecurityIDSource)
  return _internal_securityidsource();
}
inline void MDCfetsRateSnapshot::_internal_set_securityidsource(::com::htsc::mdc::model::ESecurityIDSource value) {
  
  _impl_.securityidsource_ = value;
}
inline void MDCfetsRateSnapshot::set_securityidsource(::com::htsc::mdc::model::ESecurityIDSource value) {
  _internal_set_securityidsource(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDCfetsRateSnapshot.SecurityIDSource)
}

// int32 MDDate = 4;
inline void MDCfetsRateSnapshot::clear_mddate() {
  _impl_.mddate_ = 0;
}
inline int32_t MDCfetsRateSnapshot::_internal_mddate() const {
  return _impl_.mddate_;
}
inline int32_t MDCfetsRateSnapshot::mddate() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDCfetsRateSnapshot.MDDate)
  return _internal_mddate();
}
inline void MDCfetsRateSnapshot::_internal_set_mddate(int32_t value) {
  
  _impl_.mddate_ = value;
}
inline void MDCfetsRateSnapshot::set_mddate(int32_t value) {
  _internal_set_mddate(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDCfetsRateSnapshot.MDDate)
}

// int32 MDTime = 5;
inline void MDCfetsRateSnapshot::clear_mdtime() {
  _impl_.mdtime_ = 0;
}
inline int32_t MDCfetsRateSnapshot::_internal_mdtime() const {
  return _impl_.mdtime_;
}
inline int32_t MDCfetsRateSnapshot::mdtime() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDCfetsRateSnapshot.MDTime)
  return _internal_mdtime();
}
inline void MDCfetsRateSnapshot::_internal_set_mdtime(int32_t value) {
  
  _impl_.mdtime_ = value;
}
inline void MDCfetsRateSnapshot::set_mdtime(int32_t value) {
  _internal_set_mdtime(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDCfetsRateSnapshot.MDTime)
}

// int64 DataTimestamp = 6;
inline void MDCfetsRateSnapshot::clear_datatimestamp() {
  _impl_.datatimestamp_ = int64_t{0};
}
inline int64_t MDCfetsRateSnapshot::_internal_datatimestamp() const {
  return _impl_.datatimestamp_;
}
inline int64_t MDCfetsRateSnapshot::datatimestamp() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDCfetsRateSnapshot.DataTimestamp)
  return _internal_datatimestamp();
}
inline void MDCfetsRateSnapshot::_internal_set_datatimestamp(int64_t value) {
  
  _impl_.datatimestamp_ = value;
}
inline void MDCfetsRateSnapshot::set_datatimestamp(int64_t value) {
  _internal_set_datatimestamp(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDCfetsRateSnapshot.DataTimestamp)
}

// string TransactTime = 7;
inline void MDCfetsRateSnapshot::clear_transacttime() {
  _impl_.transacttime_.ClearToEmpty();
}
inline const std::string& MDCfetsRateSnapshot::transacttime() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDCfetsRateSnapshot.TransactTime)
  return _internal_transacttime();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void MDCfetsRateSnapshot::set_transacttime(ArgT0&& arg0, ArgT... args) {
 
 _impl_.transacttime_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDCfetsRateSnapshot.TransactTime)
}
inline std::string* MDCfetsRateSnapshot::mutable_transacttime() {
  std::string* _s = _internal_mutable_transacttime();
  // @@protoc_insertion_point(field_mutable:com.htsc.mdc.insight.model.MDCfetsRateSnapshot.TransactTime)
  return _s;
}
inline const std::string& MDCfetsRateSnapshot::_internal_transacttime() const {
  return _impl_.transacttime_.Get();
}
inline void MDCfetsRateSnapshot::_internal_set_transacttime(const std::string& value) {
  
  _impl_.transacttime_.Set(value, GetArenaForAllocation());
}
inline std::string* MDCfetsRateSnapshot::_internal_mutable_transacttime() {
  
  return _impl_.transacttime_.Mutable(GetArenaForAllocation());
}
inline std::string* MDCfetsRateSnapshot::release_transacttime() {
  // @@protoc_insertion_point(field_release:com.htsc.mdc.insight.model.MDCfetsRateSnapshot.TransactTime)
  return _impl_.transacttime_.Release();
}
inline void MDCfetsRateSnapshot::set_allocated_transacttime(std::string* transacttime) {
  if (transacttime != nullptr) {
    
  } else {
    
  }
  _impl_.transacttime_.SetAllocated(transacttime, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.transacttime_.IsDefault()) {
    _impl_.transacttime_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:com.htsc.mdc.insight.model.MDCfetsRateSnapshot.TransactTime)
}

// string MarketIndicator = 8;
inline void MDCfetsRateSnapshot::clear_marketindicator() {
  _impl_.marketindicator_.ClearToEmpty();
}
inline const std::string& MDCfetsRateSnapshot::marketindicator() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDCfetsRateSnapshot.MarketIndicator)
  return _internal_marketindicator();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void MDCfetsRateSnapshot::set_marketindicator(ArgT0&& arg0, ArgT... args) {
 
 _impl_.marketindicator_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDCfetsRateSnapshot.MarketIndicator)
}
inline std::string* MDCfetsRateSnapshot::mutable_marketindicator() {
  std::string* _s = _internal_mutable_marketindicator();
  // @@protoc_insertion_point(field_mutable:com.htsc.mdc.insight.model.MDCfetsRateSnapshot.MarketIndicator)
  return _s;
}
inline const std::string& MDCfetsRateSnapshot::_internal_marketindicator() const {
  return _impl_.marketindicator_.Get();
}
inline void MDCfetsRateSnapshot::_internal_set_marketindicator(const std::string& value) {
  
  _impl_.marketindicator_.Set(value, GetArenaForAllocation());
}
inline std::string* MDCfetsRateSnapshot::_internal_mutable_marketindicator() {
  
  return _impl_.marketindicator_.Mutable(GetArenaForAllocation());
}
inline std::string* MDCfetsRateSnapshot::release_marketindicator() {
  // @@protoc_insertion_point(field_release:com.htsc.mdc.insight.model.MDCfetsRateSnapshot.MarketIndicator)
  return _impl_.marketindicator_.Release();
}
inline void MDCfetsRateSnapshot::set_allocated_marketindicator(std::string* marketindicator) {
  if (marketindicator != nullptr) {
    
  } else {
    
  }
  _impl_.marketindicator_.SetAllocated(marketindicator, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.marketindicator_.IsDefault()) {
    _impl_.marketindicator_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:com.htsc.mdc.insight.model.MDCfetsRateSnapshot.MarketIndicator)
}

// int32 DataMultiplePowerOf10 = 9;
inline void MDCfetsRateSnapshot::clear_datamultiplepowerof10() {
  _impl_.datamultiplepowerof10_ = 0;
}
inline int32_t MDCfetsRateSnapshot::_internal_datamultiplepowerof10() const {
  return _impl_.datamultiplepowerof10_;
}
inline int32_t MDCfetsRateSnapshot::datamultiplepowerof10() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDCfetsRateSnapshot.DataMultiplePowerOf10)
  return _internal_datamultiplepowerof10();
}
inline void MDCfetsRateSnapshot::_internal_set_datamultiplepowerof10(int32_t value) {
  
  _impl_.datamultiplepowerof10_ = value;
}
inline void MDCfetsRateSnapshot::set_datamultiplepowerof10(int32_t value) {
  _internal_set_datamultiplepowerof10(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDCfetsRateSnapshot.DataMultiplePowerOf10)
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_MDCfetsRateSnapshot_2eproto
