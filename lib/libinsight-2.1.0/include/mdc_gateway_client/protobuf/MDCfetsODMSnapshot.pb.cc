// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MDCfetsODMSnapshot.proto

#include "MDCfetsODMSnapshot.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace com {
namespace htsc {
namespace mdc {
namespace insight {
namespace model {
PROTOBUF_CONSTEXPR MDCfetsODMSnapshot::MDCfetsODMSnapshot(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.htscsecurityid_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.transacttime_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.marketindicator_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.securitytype_)*/0
  , /*decltype(_impl_.securityidsource_)*/0
  , /*decltype(_impl_.mddate_)*/0
  , /*decltype(_impl_.mdtime_)*/0
  , /*decltype(_impl_.datatimestamp_)*/int64_t{0}
  , /*decltype(_impl_.datamultiplepowerof10_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct MDCfetsODMSnapshotDefaultTypeInternal {
  PROTOBUF_CONSTEXPR MDCfetsODMSnapshotDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~MDCfetsODMSnapshotDefaultTypeInternal() {}
  union {
    MDCfetsODMSnapshot _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 MDCfetsODMSnapshotDefaultTypeInternal _MDCfetsODMSnapshot_default_instance_;
}  // namespace model
}  // namespace insight
}  // namespace mdc
}  // namespace htsc
}  // namespace com
static ::_pb::Metadata file_level_metadata_MDCfetsODMSnapshot_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_MDCfetsODMSnapshot_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_MDCfetsODMSnapshot_2eproto = nullptr;

const uint32_t TableStruct_MDCfetsODMSnapshot_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::MDCfetsODMSnapshot, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::MDCfetsODMSnapshot, _impl_.htscsecurityid_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::MDCfetsODMSnapshot, _impl_.securitytype_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::MDCfetsODMSnapshot, _impl_.securityidsource_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::MDCfetsODMSnapshot, _impl_.mddate_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::MDCfetsODMSnapshot, _impl_.mdtime_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::MDCfetsODMSnapshot, _impl_.datatimestamp_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::MDCfetsODMSnapshot, _impl_.transacttime_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::MDCfetsODMSnapshot, _impl_.marketindicator_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::MDCfetsODMSnapshot, _impl_.datamultiplepowerof10_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::com::htsc::mdc::insight::model::MDCfetsODMSnapshot)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::com::htsc::mdc::insight::model::_MDCfetsODMSnapshot_default_instance_._instance,
};

const char descriptor_table_protodef_MDCfetsODMSnapshot_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\030MDCfetsODMSnapshot.proto\022\032com.htsc.mdc"
  ".insight.model\032\027ESecurityIDSource.proto\032"
  "\023ESecurityType.proto\"\253\002\n\022MDCfetsODMSnaps"
  "hot\022\026\n\016HTSCSecurityID\030\001 \001(\t\0227\n\014SecurityT"
  "ype\030\002 \001(\0162!.com.htsc.mdc.model.ESecurity"
  "Type\022\?\n\020SecurityIDSource\030\003 \001(\0162%.com.hts"
  "c.mdc.model.ESecurityIDSource\022\016\n\006MDDate\030"
  "\004 \001(\005\022\016\n\006MDTime\030\005 \001(\005\022\025\n\rDataTimestamp\030\006"
  " \001(\003\022\024\n\014TransactTime\030\007 \001(\t\022\027\n\017MarketIndi"
  "cator\030\010 \001(\t\022\035\n\025DataMultiplePowerOf10\030\t \001"
  "(\005B;\n\032com.htsc.mdc.insight.modelB\030MDCfet"
  "sODMSnapshotProtosH\001\240\001\001b\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_MDCfetsODMSnapshot_2eproto_deps[2] = {
  &::descriptor_table_ESecurityIDSource_2eproto,
  &::descriptor_table_ESecurityType_2eproto,
};
static ::_pbi::once_flag descriptor_table_MDCfetsODMSnapshot_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_MDCfetsODMSnapshot_2eproto = {
    false, false, 471, descriptor_table_protodef_MDCfetsODMSnapshot_2eproto,
    "MDCfetsODMSnapshot.proto",
    &descriptor_table_MDCfetsODMSnapshot_2eproto_once, descriptor_table_MDCfetsODMSnapshot_2eproto_deps, 2, 1,
    schemas, file_default_instances, TableStruct_MDCfetsODMSnapshot_2eproto::offsets,
    file_level_metadata_MDCfetsODMSnapshot_2eproto, file_level_enum_descriptors_MDCfetsODMSnapshot_2eproto,
    file_level_service_descriptors_MDCfetsODMSnapshot_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_MDCfetsODMSnapshot_2eproto_getter() {
  return &descriptor_table_MDCfetsODMSnapshot_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_MDCfetsODMSnapshot_2eproto(&descriptor_table_MDCfetsODMSnapshot_2eproto);
namespace com {
namespace htsc {
namespace mdc {
namespace insight {
namespace model {

// ===================================================================

class MDCfetsODMSnapshot::_Internal {
 public:
};

MDCfetsODMSnapshot::MDCfetsODMSnapshot(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:com.htsc.mdc.insight.model.MDCfetsODMSnapshot)
}
MDCfetsODMSnapshot::MDCfetsODMSnapshot(const MDCfetsODMSnapshot& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  MDCfetsODMSnapshot* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.htscsecurityid_){}
    , decltype(_impl_.transacttime_){}
    , decltype(_impl_.marketindicator_){}
    , decltype(_impl_.securitytype_){}
    , decltype(_impl_.securityidsource_){}
    , decltype(_impl_.mddate_){}
    , decltype(_impl_.mdtime_){}
    , decltype(_impl_.datatimestamp_){}
    , decltype(_impl_.datamultiplepowerof10_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.htscsecurityid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.htscsecurityid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_htscsecurityid().empty()) {
    _this->_impl_.htscsecurityid_.Set(from._internal_htscsecurityid(), 
      _this->GetArenaForAllocation());
  }
  _impl_.transacttime_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.transacttime_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_transacttime().empty()) {
    _this->_impl_.transacttime_.Set(from._internal_transacttime(), 
      _this->GetArenaForAllocation());
  }
  _impl_.marketindicator_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.marketindicator_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_marketindicator().empty()) {
    _this->_impl_.marketindicator_.Set(from._internal_marketindicator(), 
      _this->GetArenaForAllocation());
  }
  ::memcpy(&_impl_.securitytype_, &from._impl_.securitytype_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.datamultiplepowerof10_) -
    reinterpret_cast<char*>(&_impl_.securitytype_)) + sizeof(_impl_.datamultiplepowerof10_));
  // @@protoc_insertion_point(copy_constructor:com.htsc.mdc.insight.model.MDCfetsODMSnapshot)
}

inline void MDCfetsODMSnapshot::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.htscsecurityid_){}
    , decltype(_impl_.transacttime_){}
    , decltype(_impl_.marketindicator_){}
    , decltype(_impl_.securitytype_){0}
    , decltype(_impl_.securityidsource_){0}
    , decltype(_impl_.mddate_){0}
    , decltype(_impl_.mdtime_){0}
    , decltype(_impl_.datatimestamp_){int64_t{0}}
    , decltype(_impl_.datamultiplepowerof10_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.htscsecurityid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.htscsecurityid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.transacttime_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.transacttime_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.marketindicator_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.marketindicator_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

MDCfetsODMSnapshot::~MDCfetsODMSnapshot() {
  // @@protoc_insertion_point(destructor:com.htsc.mdc.insight.model.MDCfetsODMSnapshot)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void MDCfetsODMSnapshot::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.htscsecurityid_.Destroy();
  _impl_.transacttime_.Destroy();
  _impl_.marketindicator_.Destroy();
}

void MDCfetsODMSnapshot::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void MDCfetsODMSnapshot::Clear() {
// @@protoc_insertion_point(message_clear_start:com.htsc.mdc.insight.model.MDCfetsODMSnapshot)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.htscsecurityid_.ClearToEmpty();
  _impl_.transacttime_.ClearToEmpty();
  _impl_.marketindicator_.ClearToEmpty();
  ::memset(&_impl_.securitytype_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.datamultiplepowerof10_) -
      reinterpret_cast<char*>(&_impl_.securitytype_)) + sizeof(_impl_.datamultiplepowerof10_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* MDCfetsODMSnapshot::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string HTSCSecurityID = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_htscsecurityid();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "com.htsc.mdc.insight.model.MDCfetsODMSnapshot.HTSCSecurityID"));
        } else
          goto handle_unusual;
        continue;
      // .com.htsc.mdc.model.ESecurityType SecurityType = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_securitytype(static_cast<::com::htsc::mdc::model::ESecurityType>(val));
        } else
          goto handle_unusual;
        continue;
      // .com.htsc.mdc.model.ESecurityIDSource SecurityIDSource = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_securityidsource(static_cast<::com::htsc::mdc::model::ESecurityIDSource>(val));
        } else
          goto handle_unusual;
        continue;
      // int32 MDDate = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          _impl_.mddate_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 MDTime = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          _impl_.mdtime_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int64 DataTimestamp = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 48)) {
          _impl_.datatimestamp_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string TransactTime = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 58)) {
          auto str = _internal_mutable_transacttime();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "com.htsc.mdc.insight.model.MDCfetsODMSnapshot.TransactTime"));
        } else
          goto handle_unusual;
        continue;
      // string MarketIndicator = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 66)) {
          auto str = _internal_mutable_marketindicator();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "com.htsc.mdc.insight.model.MDCfetsODMSnapshot.MarketIndicator"));
        } else
          goto handle_unusual;
        continue;
      // int32 DataMultiplePowerOf10 = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 72)) {
          _impl_.datamultiplepowerof10_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* MDCfetsODMSnapshot::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:com.htsc.mdc.insight.model.MDCfetsODMSnapshot)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string HTSCSecurityID = 1;
  if (!this->_internal_htscsecurityid().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_htscsecurityid().data(), static_cast<int>(this->_internal_htscsecurityid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "com.htsc.mdc.insight.model.MDCfetsODMSnapshot.HTSCSecurityID");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_htscsecurityid(), target);
  }

  // .com.htsc.mdc.model.ESecurityType SecurityType = 2;
  if (this->_internal_securitytype() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      2, this->_internal_securitytype(), target);
  }

  // .com.htsc.mdc.model.ESecurityIDSource SecurityIDSource = 3;
  if (this->_internal_securityidsource() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      3, this->_internal_securityidsource(), target);
  }

  // int32 MDDate = 4;
  if (this->_internal_mddate() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(4, this->_internal_mddate(), target);
  }

  // int32 MDTime = 5;
  if (this->_internal_mdtime() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(5, this->_internal_mdtime(), target);
  }

  // int64 DataTimestamp = 6;
  if (this->_internal_datatimestamp() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(6, this->_internal_datatimestamp(), target);
  }

  // string TransactTime = 7;
  if (!this->_internal_transacttime().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_transacttime().data(), static_cast<int>(this->_internal_transacttime().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "com.htsc.mdc.insight.model.MDCfetsODMSnapshot.TransactTime");
    target = stream->WriteStringMaybeAliased(
        7, this->_internal_transacttime(), target);
  }

  // string MarketIndicator = 8;
  if (!this->_internal_marketindicator().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_marketindicator().data(), static_cast<int>(this->_internal_marketindicator().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "com.htsc.mdc.insight.model.MDCfetsODMSnapshot.MarketIndicator");
    target = stream->WriteStringMaybeAliased(
        8, this->_internal_marketindicator(), target);
  }

  // int32 DataMultiplePowerOf10 = 9;
  if (this->_internal_datamultiplepowerof10() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(9, this->_internal_datamultiplepowerof10(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:com.htsc.mdc.insight.model.MDCfetsODMSnapshot)
  return target;
}

size_t MDCfetsODMSnapshot::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:com.htsc.mdc.insight.model.MDCfetsODMSnapshot)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string HTSCSecurityID = 1;
  if (!this->_internal_htscsecurityid().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_htscsecurityid());
  }

  // string TransactTime = 7;
  if (!this->_internal_transacttime().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_transacttime());
  }

  // string MarketIndicator = 8;
  if (!this->_internal_marketindicator().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_marketindicator());
  }

  // .com.htsc.mdc.model.ESecurityType SecurityType = 2;
  if (this->_internal_securitytype() != 0) {
    total_size += 1 +
      ::_pbi::WireFormatLite::EnumSize(this->_internal_securitytype());
  }

  // .com.htsc.mdc.model.ESecurityIDSource SecurityIDSource = 3;
  if (this->_internal_securityidsource() != 0) {
    total_size += 1 +
      ::_pbi::WireFormatLite::EnumSize(this->_internal_securityidsource());
  }

  // int32 MDDate = 4;
  if (this->_internal_mddate() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_mddate());
  }

  // int32 MDTime = 5;
  if (this->_internal_mdtime() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_mdtime());
  }

  // int64 DataTimestamp = 6;
  if (this->_internal_datatimestamp() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_datatimestamp());
  }

  // int32 DataMultiplePowerOf10 = 9;
  if (this->_internal_datamultiplepowerof10() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_datamultiplepowerof10());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData MDCfetsODMSnapshot::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    MDCfetsODMSnapshot::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*MDCfetsODMSnapshot::GetClassData() const { return &_class_data_; }


void MDCfetsODMSnapshot::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<MDCfetsODMSnapshot*>(&to_msg);
  auto& from = static_cast<const MDCfetsODMSnapshot&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:com.htsc.mdc.insight.model.MDCfetsODMSnapshot)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_htscsecurityid().empty()) {
    _this->_internal_set_htscsecurityid(from._internal_htscsecurityid());
  }
  if (!from._internal_transacttime().empty()) {
    _this->_internal_set_transacttime(from._internal_transacttime());
  }
  if (!from._internal_marketindicator().empty()) {
    _this->_internal_set_marketindicator(from._internal_marketindicator());
  }
  if (from._internal_securitytype() != 0) {
    _this->_internal_set_securitytype(from._internal_securitytype());
  }
  if (from._internal_securityidsource() != 0) {
    _this->_internal_set_securityidsource(from._internal_securityidsource());
  }
  if (from._internal_mddate() != 0) {
    _this->_internal_set_mddate(from._internal_mddate());
  }
  if (from._internal_mdtime() != 0) {
    _this->_internal_set_mdtime(from._internal_mdtime());
  }
  if (from._internal_datatimestamp() != 0) {
    _this->_internal_set_datatimestamp(from._internal_datatimestamp());
  }
  if (from._internal_datamultiplepowerof10() != 0) {
    _this->_internal_set_datamultiplepowerof10(from._internal_datamultiplepowerof10());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void MDCfetsODMSnapshot::CopyFrom(const MDCfetsODMSnapshot& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:com.htsc.mdc.insight.model.MDCfetsODMSnapshot)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MDCfetsODMSnapshot::IsInitialized() const {
  return true;
}

void MDCfetsODMSnapshot::InternalSwap(MDCfetsODMSnapshot* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.htscsecurityid_, lhs_arena,
      &other->_impl_.htscsecurityid_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.transacttime_, lhs_arena,
      &other->_impl_.transacttime_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.marketindicator_, lhs_arena,
      &other->_impl_.marketindicator_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(MDCfetsODMSnapshot, _impl_.datamultiplepowerof10_)
      + sizeof(MDCfetsODMSnapshot::_impl_.datamultiplepowerof10_)
      - PROTOBUF_FIELD_OFFSET(MDCfetsODMSnapshot, _impl_.securitytype_)>(
          reinterpret_cast<char*>(&_impl_.securitytype_),
          reinterpret_cast<char*>(&other->_impl_.securitytype_));
}

::PROTOBUF_NAMESPACE_ID::Metadata MDCfetsODMSnapshot::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_MDCfetsODMSnapshot_2eproto_getter, &descriptor_table_MDCfetsODMSnapshot_2eproto_once,
      file_level_metadata_MDCfetsODMSnapshot_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace model
}  // namespace insight
}  // namespace mdc
}  // namespace htsc
}  // namespace com
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::com::htsc::mdc::insight::model::MDCfetsODMSnapshot*
Arena::CreateMaybeMessage< ::com::htsc::mdc::insight::model::MDCfetsODMSnapshot >(Arena* arena) {
  return Arena::CreateMessageInternal< ::com::htsc::mdc::insight::model::MDCfetsODMSnapshot >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
