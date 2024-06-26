// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ADStaringResult.proto

#include "ADStaringResult.pb.h"

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
PROTOBUF_CONSTEXPR ADStaringResult::ADStaringResult(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.htscsecurityid_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.staringresultid_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.strategyid_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.algorithmid_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.algorithmname_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.customerid_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.systemid_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.mddate_)*/0
  , /*decltype(_impl_.mdtime_)*/0
  , /*decltype(_impl_.datatimestamp_)*/int64_t{0}
  , /*decltype(_impl_.securityidsource_)*/0
  , /*decltype(_impl_.securitytype_)*/0
  , /*decltype(_impl_.exchangedate_)*/0
  , /*decltype(_impl_.exchangetime_)*/0
  , /*decltype(_impl_.rmindvalue_)*/int64_t{0}
  , /*decltype(_impl_.realcalvalue_)*/int64_t{0}
  , /*decltype(_impl_.datamultiplepowerof10_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct ADStaringResultDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ADStaringResultDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ADStaringResultDefaultTypeInternal() {}
  union {
    ADStaringResult _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ADStaringResultDefaultTypeInternal _ADStaringResult_default_instance_;
}  // namespace model
}  // namespace insight
}  // namespace mdc
}  // namespace htsc
}  // namespace com
static ::_pb::Metadata file_level_metadata_ADStaringResult_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_ADStaringResult_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_ADStaringResult_2eproto = nullptr;

const uint32_t TableStruct_ADStaringResult_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::ADStaringResult, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::ADStaringResult, _impl_.htscsecurityid_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::ADStaringResult, _impl_.mddate_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::ADStaringResult, _impl_.mdtime_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::ADStaringResult, _impl_.datatimestamp_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::ADStaringResult, _impl_.securityidsource_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::ADStaringResult, _impl_.securitytype_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::ADStaringResult, _impl_.exchangedate_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::ADStaringResult, _impl_.exchangetime_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::ADStaringResult, _impl_.staringresultid_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::ADStaringResult, _impl_.strategyid_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::ADStaringResult, _impl_.algorithmid_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::ADStaringResult, _impl_.algorithmname_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::ADStaringResult, _impl_.customerid_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::ADStaringResult, _impl_.systemid_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::ADStaringResult, _impl_.rmindvalue_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::ADStaringResult, _impl_.realcalvalue_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::ADStaringResult, _impl_.datamultiplepowerof10_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::com::htsc::mdc::insight::model::ADStaringResult)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::com::htsc::mdc::insight::model::_ADStaringResult_default_instance_._instance,
};

const char descriptor_table_protodef_ADStaringResult_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\025ADStaringResult.proto\022\032com.htsc.mdc.in"
  "sight.model\032\023ESecurityType.proto\032\027ESecur"
  "ityIDSource.proto\"\316\003\n\017ADStaringResult\022\026\n"
  "\016HTSCSecurityID\030\001 \001(\t\022\016\n\006MDDate\030\002 \001(\005\022\016\n"
  "\006MDTime\030\003 \001(\005\022\025\n\rDataTimestamp\030\004 \001(\003\022\?\n\020"
  "securityIDSource\030\005 \001(\0162%.com.htsc.mdc.mo"
  "del.ESecurityIDSource\0227\n\014securityType\030\006 "
  "\001(\0162!.com.htsc.mdc.model.ESecurityType\022\024"
  "\n\014ExchangeDate\030\007 \001(\005\022\024\n\014ExchangeTime\030\010 \001"
  "(\005\022\027\n\017StaringResultID\030\t \001(\t\022\022\n\nStrategyI"
  "D\030\n \001(\t\022\023\n\013AlgorithmID\030\013 \001(\t\022\025\n\rAlgorith"
  "mName\030\014 \001(\t\022\022\n\nCustomerID\030\r \001(\t\022\020\n\010Syste"
  "mID\030\016 \001(\t\022\022\n\nRmindValue\030\017 \001(\003\022\024\n\014RealCal"
  "Value\030\020 \001(\003\022\035\n\025DataMultiplePowerOf10\030\021 \001"
  "(\005B8\n\032com.htsc.mdc.insight.modelB\025ADStar"
  "ingResultProtosH\001\240\001\001b\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_ADStaringResult_2eproto_deps[2] = {
  &::descriptor_table_ESecurityIDSource_2eproto,
  &::descriptor_table_ESecurityType_2eproto,
};
static ::_pbi::once_flag descriptor_table_ADStaringResult_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_ADStaringResult_2eproto = {
    false, false, 628, descriptor_table_protodef_ADStaringResult_2eproto,
    "ADStaringResult.proto",
    &descriptor_table_ADStaringResult_2eproto_once, descriptor_table_ADStaringResult_2eproto_deps, 2, 1,
    schemas, file_default_instances, TableStruct_ADStaringResult_2eproto::offsets,
    file_level_metadata_ADStaringResult_2eproto, file_level_enum_descriptors_ADStaringResult_2eproto,
    file_level_service_descriptors_ADStaringResult_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_ADStaringResult_2eproto_getter() {
  return &descriptor_table_ADStaringResult_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_ADStaringResult_2eproto(&descriptor_table_ADStaringResult_2eproto);
namespace com {
namespace htsc {
namespace mdc {
namespace insight {
namespace model {

// ===================================================================

class ADStaringResult::_Internal {
 public:
};

ADStaringResult::ADStaringResult(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:com.htsc.mdc.insight.model.ADStaringResult)
}
ADStaringResult::ADStaringResult(const ADStaringResult& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  ADStaringResult* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.htscsecurityid_){}
    , decltype(_impl_.staringresultid_){}
    , decltype(_impl_.strategyid_){}
    , decltype(_impl_.algorithmid_){}
    , decltype(_impl_.algorithmname_){}
    , decltype(_impl_.customerid_){}
    , decltype(_impl_.systemid_){}
    , decltype(_impl_.mddate_){}
    , decltype(_impl_.mdtime_){}
    , decltype(_impl_.datatimestamp_){}
    , decltype(_impl_.securityidsource_){}
    , decltype(_impl_.securitytype_){}
    , decltype(_impl_.exchangedate_){}
    , decltype(_impl_.exchangetime_){}
    , decltype(_impl_.rmindvalue_){}
    , decltype(_impl_.realcalvalue_){}
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
  _impl_.staringresultid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.staringresultid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_staringresultid().empty()) {
    _this->_impl_.staringresultid_.Set(from._internal_staringresultid(), 
      _this->GetArenaForAllocation());
  }
  _impl_.strategyid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.strategyid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_strategyid().empty()) {
    _this->_impl_.strategyid_.Set(from._internal_strategyid(), 
      _this->GetArenaForAllocation());
  }
  _impl_.algorithmid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.algorithmid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_algorithmid().empty()) {
    _this->_impl_.algorithmid_.Set(from._internal_algorithmid(), 
      _this->GetArenaForAllocation());
  }
  _impl_.algorithmname_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.algorithmname_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_algorithmname().empty()) {
    _this->_impl_.algorithmname_.Set(from._internal_algorithmname(), 
      _this->GetArenaForAllocation());
  }
  _impl_.customerid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.customerid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_customerid().empty()) {
    _this->_impl_.customerid_.Set(from._internal_customerid(), 
      _this->GetArenaForAllocation());
  }
  _impl_.systemid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.systemid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_systemid().empty()) {
    _this->_impl_.systemid_.Set(from._internal_systemid(), 
      _this->GetArenaForAllocation());
  }
  ::memcpy(&_impl_.mddate_, &from._impl_.mddate_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.datamultiplepowerof10_) -
    reinterpret_cast<char*>(&_impl_.mddate_)) + sizeof(_impl_.datamultiplepowerof10_));
  // @@protoc_insertion_point(copy_constructor:com.htsc.mdc.insight.model.ADStaringResult)
}

inline void ADStaringResult::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.htscsecurityid_){}
    , decltype(_impl_.staringresultid_){}
    , decltype(_impl_.strategyid_){}
    , decltype(_impl_.algorithmid_){}
    , decltype(_impl_.algorithmname_){}
    , decltype(_impl_.customerid_){}
    , decltype(_impl_.systemid_){}
    , decltype(_impl_.mddate_){0}
    , decltype(_impl_.mdtime_){0}
    , decltype(_impl_.datatimestamp_){int64_t{0}}
    , decltype(_impl_.securityidsource_){0}
    , decltype(_impl_.securitytype_){0}
    , decltype(_impl_.exchangedate_){0}
    , decltype(_impl_.exchangetime_){0}
    , decltype(_impl_.rmindvalue_){int64_t{0}}
    , decltype(_impl_.realcalvalue_){int64_t{0}}
    , decltype(_impl_.datamultiplepowerof10_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.htscsecurityid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.htscsecurityid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.staringresultid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.staringresultid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.strategyid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.strategyid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.algorithmid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.algorithmid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.algorithmname_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.algorithmname_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.customerid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.customerid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.systemid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.systemid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

ADStaringResult::~ADStaringResult() {
  // @@protoc_insertion_point(destructor:com.htsc.mdc.insight.model.ADStaringResult)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ADStaringResult::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.htscsecurityid_.Destroy();
  _impl_.staringresultid_.Destroy();
  _impl_.strategyid_.Destroy();
  _impl_.algorithmid_.Destroy();
  _impl_.algorithmname_.Destroy();
  _impl_.customerid_.Destroy();
  _impl_.systemid_.Destroy();
}

void ADStaringResult::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void ADStaringResult::Clear() {
// @@protoc_insertion_point(message_clear_start:com.htsc.mdc.insight.model.ADStaringResult)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.htscsecurityid_.ClearToEmpty();
  _impl_.staringresultid_.ClearToEmpty();
  _impl_.strategyid_.ClearToEmpty();
  _impl_.algorithmid_.ClearToEmpty();
  _impl_.algorithmname_.ClearToEmpty();
  _impl_.customerid_.ClearToEmpty();
  _impl_.systemid_.ClearToEmpty();
  ::memset(&_impl_.mddate_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.datamultiplepowerof10_) -
      reinterpret_cast<char*>(&_impl_.mddate_)) + sizeof(_impl_.datamultiplepowerof10_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ADStaringResult::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
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
          CHK_(::_pbi::VerifyUTF8(str, "com.htsc.mdc.insight.model.ADStaringResult.HTSCSecurityID"));
        } else
          goto handle_unusual;
        continue;
      // int32 MDDate = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _impl_.mddate_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 MDTime = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _impl_.mdtime_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int64 DataTimestamp = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          _impl_.datatimestamp_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .com.htsc.mdc.model.ESecurityIDSource securityIDSource = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_securityidsource(static_cast<::com::htsc::mdc::model::ESecurityIDSource>(val));
        } else
          goto handle_unusual;
        continue;
      // .com.htsc.mdc.model.ESecurityType securityType = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 48)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_securitytype(static_cast<::com::htsc::mdc::model::ESecurityType>(val));
        } else
          goto handle_unusual;
        continue;
      // int32 ExchangeDate = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 56)) {
          _impl_.exchangedate_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 ExchangeTime = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 64)) {
          _impl_.exchangetime_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string StaringResultID = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 74)) {
          auto str = _internal_mutable_staringresultid();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "com.htsc.mdc.insight.model.ADStaringResult.StaringResultID"));
        } else
          goto handle_unusual;
        continue;
      // string StrategyID = 10;
      case 10:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 82)) {
          auto str = _internal_mutable_strategyid();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "com.htsc.mdc.insight.model.ADStaringResult.StrategyID"));
        } else
          goto handle_unusual;
        continue;
      // string AlgorithmID = 11;
      case 11:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 90)) {
          auto str = _internal_mutable_algorithmid();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "com.htsc.mdc.insight.model.ADStaringResult.AlgorithmID"));
        } else
          goto handle_unusual;
        continue;
      // string AlgorithmName = 12;
      case 12:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 98)) {
          auto str = _internal_mutable_algorithmname();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "com.htsc.mdc.insight.model.ADStaringResult.AlgorithmName"));
        } else
          goto handle_unusual;
        continue;
      // string CustomerID = 13;
      case 13:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 106)) {
          auto str = _internal_mutable_customerid();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "com.htsc.mdc.insight.model.ADStaringResult.CustomerID"));
        } else
          goto handle_unusual;
        continue;
      // string SystemID = 14;
      case 14:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 114)) {
          auto str = _internal_mutable_systemid();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "com.htsc.mdc.insight.model.ADStaringResult.SystemID"));
        } else
          goto handle_unusual;
        continue;
      // int64 RmindValue = 15;
      case 15:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 120)) {
          _impl_.rmindvalue_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int64 RealCalValue = 16;
      case 16:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 128)) {
          _impl_.realcalvalue_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 DataMultiplePowerOf10 = 17;
      case 17:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 136)) {
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

uint8_t* ADStaringResult::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:com.htsc.mdc.insight.model.ADStaringResult)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string HTSCSecurityID = 1;
  if (!this->_internal_htscsecurityid().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_htscsecurityid().data(), static_cast<int>(this->_internal_htscsecurityid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "com.htsc.mdc.insight.model.ADStaringResult.HTSCSecurityID");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_htscsecurityid(), target);
  }

  // int32 MDDate = 2;
  if (this->_internal_mddate() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(2, this->_internal_mddate(), target);
  }

  // int32 MDTime = 3;
  if (this->_internal_mdtime() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(3, this->_internal_mdtime(), target);
  }

  // int64 DataTimestamp = 4;
  if (this->_internal_datatimestamp() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(4, this->_internal_datatimestamp(), target);
  }

  // .com.htsc.mdc.model.ESecurityIDSource securityIDSource = 5;
  if (this->_internal_securityidsource() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      5, this->_internal_securityidsource(), target);
  }

  // .com.htsc.mdc.model.ESecurityType securityType = 6;
  if (this->_internal_securitytype() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      6, this->_internal_securitytype(), target);
  }

  // int32 ExchangeDate = 7;
  if (this->_internal_exchangedate() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(7, this->_internal_exchangedate(), target);
  }

  // int32 ExchangeTime = 8;
  if (this->_internal_exchangetime() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(8, this->_internal_exchangetime(), target);
  }

  // string StaringResultID = 9;
  if (!this->_internal_staringresultid().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_staringresultid().data(), static_cast<int>(this->_internal_staringresultid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "com.htsc.mdc.insight.model.ADStaringResult.StaringResultID");
    target = stream->WriteStringMaybeAliased(
        9, this->_internal_staringresultid(), target);
  }

  // string StrategyID = 10;
  if (!this->_internal_strategyid().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_strategyid().data(), static_cast<int>(this->_internal_strategyid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "com.htsc.mdc.insight.model.ADStaringResult.StrategyID");
    target = stream->WriteStringMaybeAliased(
        10, this->_internal_strategyid(), target);
  }

  // string AlgorithmID = 11;
  if (!this->_internal_algorithmid().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_algorithmid().data(), static_cast<int>(this->_internal_algorithmid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "com.htsc.mdc.insight.model.ADStaringResult.AlgorithmID");
    target = stream->WriteStringMaybeAliased(
        11, this->_internal_algorithmid(), target);
  }

  // string AlgorithmName = 12;
  if (!this->_internal_algorithmname().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_algorithmname().data(), static_cast<int>(this->_internal_algorithmname().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "com.htsc.mdc.insight.model.ADStaringResult.AlgorithmName");
    target = stream->WriteStringMaybeAliased(
        12, this->_internal_algorithmname(), target);
  }

  // string CustomerID = 13;
  if (!this->_internal_customerid().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_customerid().data(), static_cast<int>(this->_internal_customerid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "com.htsc.mdc.insight.model.ADStaringResult.CustomerID");
    target = stream->WriteStringMaybeAliased(
        13, this->_internal_customerid(), target);
  }

  // string SystemID = 14;
  if (!this->_internal_systemid().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_systemid().data(), static_cast<int>(this->_internal_systemid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "com.htsc.mdc.insight.model.ADStaringResult.SystemID");
    target = stream->WriteStringMaybeAliased(
        14, this->_internal_systemid(), target);
  }

  // int64 RmindValue = 15;
  if (this->_internal_rmindvalue() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(15, this->_internal_rmindvalue(), target);
  }

  // int64 RealCalValue = 16;
  if (this->_internal_realcalvalue() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(16, this->_internal_realcalvalue(), target);
  }

  // int32 DataMultiplePowerOf10 = 17;
  if (this->_internal_datamultiplepowerof10() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(17, this->_internal_datamultiplepowerof10(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:com.htsc.mdc.insight.model.ADStaringResult)
  return target;
}

size_t ADStaringResult::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:com.htsc.mdc.insight.model.ADStaringResult)
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

  // string StaringResultID = 9;
  if (!this->_internal_staringresultid().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_staringresultid());
  }

  // string StrategyID = 10;
  if (!this->_internal_strategyid().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_strategyid());
  }

  // string AlgorithmID = 11;
  if (!this->_internal_algorithmid().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_algorithmid());
  }

  // string AlgorithmName = 12;
  if (!this->_internal_algorithmname().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_algorithmname());
  }

  // string CustomerID = 13;
  if (!this->_internal_customerid().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_customerid());
  }

  // string SystemID = 14;
  if (!this->_internal_systemid().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_systemid());
  }

  // int32 MDDate = 2;
  if (this->_internal_mddate() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_mddate());
  }

  // int32 MDTime = 3;
  if (this->_internal_mdtime() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_mdtime());
  }

  // int64 DataTimestamp = 4;
  if (this->_internal_datatimestamp() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_datatimestamp());
  }

  // .com.htsc.mdc.model.ESecurityIDSource securityIDSource = 5;
  if (this->_internal_securityidsource() != 0) {
    total_size += 1 +
      ::_pbi::WireFormatLite::EnumSize(this->_internal_securityidsource());
  }

  // .com.htsc.mdc.model.ESecurityType securityType = 6;
  if (this->_internal_securitytype() != 0) {
    total_size += 1 +
      ::_pbi::WireFormatLite::EnumSize(this->_internal_securitytype());
  }

  // int32 ExchangeDate = 7;
  if (this->_internal_exchangedate() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_exchangedate());
  }

  // int32 ExchangeTime = 8;
  if (this->_internal_exchangetime() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_exchangetime());
  }

  // int64 RmindValue = 15;
  if (this->_internal_rmindvalue() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_rmindvalue());
  }

  // int64 RealCalValue = 16;
  if (this->_internal_realcalvalue() != 0) {
    total_size += 2 +
      ::_pbi::WireFormatLite::Int64Size(
        this->_internal_realcalvalue());
  }

  // int32 DataMultiplePowerOf10 = 17;
  if (this->_internal_datamultiplepowerof10() != 0) {
    total_size += 2 +
      ::_pbi::WireFormatLite::Int32Size(
        this->_internal_datamultiplepowerof10());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ADStaringResult::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    ADStaringResult::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ADStaringResult::GetClassData() const { return &_class_data_; }


void ADStaringResult::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<ADStaringResult*>(&to_msg);
  auto& from = static_cast<const ADStaringResult&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:com.htsc.mdc.insight.model.ADStaringResult)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_htscsecurityid().empty()) {
    _this->_internal_set_htscsecurityid(from._internal_htscsecurityid());
  }
  if (!from._internal_staringresultid().empty()) {
    _this->_internal_set_staringresultid(from._internal_staringresultid());
  }
  if (!from._internal_strategyid().empty()) {
    _this->_internal_set_strategyid(from._internal_strategyid());
  }
  if (!from._internal_algorithmid().empty()) {
    _this->_internal_set_algorithmid(from._internal_algorithmid());
  }
  if (!from._internal_algorithmname().empty()) {
    _this->_internal_set_algorithmname(from._internal_algorithmname());
  }
  if (!from._internal_customerid().empty()) {
    _this->_internal_set_customerid(from._internal_customerid());
  }
  if (!from._internal_systemid().empty()) {
    _this->_internal_set_systemid(from._internal_systemid());
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
  if (from._internal_securityidsource() != 0) {
    _this->_internal_set_securityidsource(from._internal_securityidsource());
  }
  if (from._internal_securitytype() != 0) {
    _this->_internal_set_securitytype(from._internal_securitytype());
  }
  if (from._internal_exchangedate() != 0) {
    _this->_internal_set_exchangedate(from._internal_exchangedate());
  }
  if (from._internal_exchangetime() != 0) {
    _this->_internal_set_exchangetime(from._internal_exchangetime());
  }
  if (from._internal_rmindvalue() != 0) {
    _this->_internal_set_rmindvalue(from._internal_rmindvalue());
  }
  if (from._internal_realcalvalue() != 0) {
    _this->_internal_set_realcalvalue(from._internal_realcalvalue());
  }
  if (from._internal_datamultiplepowerof10() != 0) {
    _this->_internal_set_datamultiplepowerof10(from._internal_datamultiplepowerof10());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ADStaringResult::CopyFrom(const ADStaringResult& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:com.htsc.mdc.insight.model.ADStaringResult)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ADStaringResult::IsInitialized() const {
  return true;
}

void ADStaringResult::InternalSwap(ADStaringResult* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.htscsecurityid_, lhs_arena,
      &other->_impl_.htscsecurityid_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.staringresultid_, lhs_arena,
      &other->_impl_.staringresultid_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.strategyid_, lhs_arena,
      &other->_impl_.strategyid_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.algorithmid_, lhs_arena,
      &other->_impl_.algorithmid_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.algorithmname_, lhs_arena,
      &other->_impl_.algorithmname_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.customerid_, lhs_arena,
      &other->_impl_.customerid_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.systemid_, lhs_arena,
      &other->_impl_.systemid_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ADStaringResult, _impl_.datamultiplepowerof10_)
      + sizeof(ADStaringResult::_impl_.datamultiplepowerof10_)
      - PROTOBUF_FIELD_OFFSET(ADStaringResult, _impl_.mddate_)>(
          reinterpret_cast<char*>(&_impl_.mddate_),
          reinterpret_cast<char*>(&other->_impl_.mddate_));
}

::PROTOBUF_NAMESPACE_ID::Metadata ADStaringResult::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_ADStaringResult_2eproto_getter, &descriptor_table_ADStaringResult_2eproto_once,
      file_level_metadata_ADStaringResult_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace model
}  // namespace insight
}  // namespace mdc
}  // namespace htsc
}  // namespace com
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::com::htsc::mdc::insight::model::ADStaringResult*
Arena::CreateMaybeMessage< ::com::htsc::mdc::insight::model::ADStaringResult >(Arena* arena) {
  return Arena::CreateMessageInternal< ::com::htsc::mdc::insight::model::ADStaringResult >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
