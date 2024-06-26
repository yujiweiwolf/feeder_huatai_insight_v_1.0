// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MDSLTransaction.proto

#include "MDSLTransaction.pb.h"

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
PROTOBUF_CONSTEXPR MDSLTransaction::MDSLTransaction(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.htscsecurityid_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.tradenum_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.mddate_)*/0
  , /*decltype(_impl_.mdtime_)*/0
  , /*decltype(_impl_.datatimestamp_)*/int64_t{0}
  , /*decltype(_impl_.securityidsource_)*/0
  , /*decltype(_impl_.securitytype_)*/0
  , /*decltype(_impl_.exchangedate_)*/0
  , /*decltype(_impl_.exchangetime_)*/0
  , /*decltype(_impl_.tradeindex_)*/int64_t{0}
  , /*decltype(_impl_.tradebuyno_)*/int64_t{0}
  , /*decltype(_impl_.tradesellno_)*/int64_t{0}
  , /*decltype(_impl_.tradetype_)*/0
  , /*decltype(_impl_.tradebsflag_)*/0
  , /*decltype(_impl_.tradeprice_)*/int64_t{0}
  , /*decltype(_impl_.tradeqty_)*/int64_t{0}
  , /*decltype(_impl_.trademoney_)*/int64_t{0}
  , /*decltype(_impl_.numtrades_)*/int64_t{0}
  , /*decltype(_impl_.tradeterm_)*/0
  , /*decltype(_impl_.datamultiplepowerof10_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct MDSLTransactionDefaultTypeInternal {
  PROTOBUF_CONSTEXPR MDSLTransactionDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~MDSLTransactionDefaultTypeInternal() {}
  union {
    MDSLTransaction _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 MDSLTransactionDefaultTypeInternal _MDSLTransaction_default_instance_;
}  // namespace model
}  // namespace insight
}  // namespace mdc
}  // namespace htsc
}  // namespace com
static ::_pb::Metadata file_level_metadata_MDSLTransaction_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_MDSLTransaction_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_MDSLTransaction_2eproto = nullptr;

const uint32_t TableStruct_MDSLTransaction_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::MDSLTransaction, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::MDSLTransaction, _impl_.htscsecurityid_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::MDSLTransaction, _impl_.mddate_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::MDSLTransaction, _impl_.mdtime_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::MDSLTransaction, _impl_.datatimestamp_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::MDSLTransaction, _impl_.securityidsource_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::MDSLTransaction, _impl_.securitytype_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::MDSLTransaction, _impl_.exchangedate_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::MDSLTransaction, _impl_.exchangetime_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::MDSLTransaction, _impl_.tradeindex_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::MDSLTransaction, _impl_.tradebuyno_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::MDSLTransaction, _impl_.tradesellno_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::MDSLTransaction, _impl_.tradetype_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::MDSLTransaction, _impl_.tradebsflag_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::MDSLTransaction, _impl_.tradeprice_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::MDSLTransaction, _impl_.tradeqty_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::MDSLTransaction, _impl_.trademoney_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::MDSLTransaction, _impl_.numtrades_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::MDSLTransaction, _impl_.tradeterm_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::MDSLTransaction, _impl_.tradenum_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::MDSLTransaction, _impl_.datamultiplepowerof10_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::com::htsc::mdc::insight::model::MDSLTransaction)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::com::htsc::mdc::insight::model::_MDSLTransaction_default_instance_._instance,
};

const char descriptor_table_protodef_MDSLTransaction_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\025MDSLTransaction.proto\022\032com.htsc.mdc.in"
  "sight.model\032\027ESecurityIDSource.proto\032\023ES"
  "ecurityType.proto\"\374\003\n\017MDSLTransaction\022\026\n"
  "\016HTSCSecurityID\030\001 \001(\t\022\016\n\006MDDate\030\002 \001(\005\022\016\n"
  "\006MDTime\030\003 \001(\005\022\025\n\rDataTimestamp\030\004 \001(\003\022\?\n\020"
  "securityIDSource\030\005 \001(\0162%.com.htsc.mdc.mo"
  "del.ESecurityIDSource\0227\n\014securityType\030\006 "
  "\001(\0162!.com.htsc.mdc.model.ESecurityType\022\024"
  "\n\014ExchangeDate\030\007 \001(\005\022\024\n\014ExchangeTime\030\010 \001"
  "(\005\022\022\n\nTradeIndex\030\t \001(\003\022\022\n\nTradeBuyNo\030\n \001"
  "(\003\022\023\n\013TradeSellNo\030\013 \001(\003\022\021\n\tTradeType\030\014 \001"
  "(\005\022\023\n\013TradeBSFlag\030\r \001(\005\022\022\n\nTradePrice\030\016 "
  "\001(\003\022\020\n\010TradeQty\030\017 \001(\003\022\022\n\nTradeMoney\030\020 \001("
  "\003\022\021\n\tNumTrades\030\021 \001(\003\022\021\n\tTradeTerm\030\022 \001(\005\022"
  "\020\n\010TradeNum\030\023 \001(\t\022\035\n\025DataMultiplePowerOf"
  "10\030\024 \001(\005B8\n\032com.htsc.mdc.insight.modelB\025"
  "MDSLTransactionProtosH\001\240\001\001b\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_MDSLTransaction_2eproto_deps[2] = {
  &::descriptor_table_ESecurityIDSource_2eproto,
  &::descriptor_table_ESecurityType_2eproto,
};
static ::_pbi::once_flag descriptor_table_MDSLTransaction_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_MDSLTransaction_2eproto = {
    false, false, 674, descriptor_table_protodef_MDSLTransaction_2eproto,
    "MDSLTransaction.proto",
    &descriptor_table_MDSLTransaction_2eproto_once, descriptor_table_MDSLTransaction_2eproto_deps, 2, 1,
    schemas, file_default_instances, TableStruct_MDSLTransaction_2eproto::offsets,
    file_level_metadata_MDSLTransaction_2eproto, file_level_enum_descriptors_MDSLTransaction_2eproto,
    file_level_service_descriptors_MDSLTransaction_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_MDSLTransaction_2eproto_getter() {
  return &descriptor_table_MDSLTransaction_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_MDSLTransaction_2eproto(&descriptor_table_MDSLTransaction_2eproto);
namespace com {
namespace htsc {
namespace mdc {
namespace insight {
namespace model {

// ===================================================================

class MDSLTransaction::_Internal {
 public:
};

MDSLTransaction::MDSLTransaction(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:com.htsc.mdc.insight.model.MDSLTransaction)
}
MDSLTransaction::MDSLTransaction(const MDSLTransaction& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  MDSLTransaction* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.htscsecurityid_){}
    , decltype(_impl_.tradenum_){}
    , decltype(_impl_.mddate_){}
    , decltype(_impl_.mdtime_){}
    , decltype(_impl_.datatimestamp_){}
    , decltype(_impl_.securityidsource_){}
    , decltype(_impl_.securitytype_){}
    , decltype(_impl_.exchangedate_){}
    , decltype(_impl_.exchangetime_){}
    , decltype(_impl_.tradeindex_){}
    , decltype(_impl_.tradebuyno_){}
    , decltype(_impl_.tradesellno_){}
    , decltype(_impl_.tradetype_){}
    , decltype(_impl_.tradebsflag_){}
    , decltype(_impl_.tradeprice_){}
    , decltype(_impl_.tradeqty_){}
    , decltype(_impl_.trademoney_){}
    , decltype(_impl_.numtrades_){}
    , decltype(_impl_.tradeterm_){}
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
  _impl_.tradenum_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.tradenum_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_tradenum().empty()) {
    _this->_impl_.tradenum_.Set(from._internal_tradenum(), 
      _this->GetArenaForAllocation());
  }
  ::memcpy(&_impl_.mddate_, &from._impl_.mddate_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.datamultiplepowerof10_) -
    reinterpret_cast<char*>(&_impl_.mddate_)) + sizeof(_impl_.datamultiplepowerof10_));
  // @@protoc_insertion_point(copy_constructor:com.htsc.mdc.insight.model.MDSLTransaction)
}

inline void MDSLTransaction::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.htscsecurityid_){}
    , decltype(_impl_.tradenum_){}
    , decltype(_impl_.mddate_){0}
    , decltype(_impl_.mdtime_){0}
    , decltype(_impl_.datatimestamp_){int64_t{0}}
    , decltype(_impl_.securityidsource_){0}
    , decltype(_impl_.securitytype_){0}
    , decltype(_impl_.exchangedate_){0}
    , decltype(_impl_.exchangetime_){0}
    , decltype(_impl_.tradeindex_){int64_t{0}}
    , decltype(_impl_.tradebuyno_){int64_t{0}}
    , decltype(_impl_.tradesellno_){int64_t{0}}
    , decltype(_impl_.tradetype_){0}
    , decltype(_impl_.tradebsflag_){0}
    , decltype(_impl_.tradeprice_){int64_t{0}}
    , decltype(_impl_.tradeqty_){int64_t{0}}
    , decltype(_impl_.trademoney_){int64_t{0}}
    , decltype(_impl_.numtrades_){int64_t{0}}
    , decltype(_impl_.tradeterm_){0}
    , decltype(_impl_.datamultiplepowerof10_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.htscsecurityid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.htscsecurityid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.tradenum_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.tradenum_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

MDSLTransaction::~MDSLTransaction() {
  // @@protoc_insertion_point(destructor:com.htsc.mdc.insight.model.MDSLTransaction)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void MDSLTransaction::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.htscsecurityid_.Destroy();
  _impl_.tradenum_.Destroy();
}

void MDSLTransaction::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void MDSLTransaction::Clear() {
// @@protoc_insertion_point(message_clear_start:com.htsc.mdc.insight.model.MDSLTransaction)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.htscsecurityid_.ClearToEmpty();
  _impl_.tradenum_.ClearToEmpty();
  ::memset(&_impl_.mddate_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.datamultiplepowerof10_) -
      reinterpret_cast<char*>(&_impl_.mddate_)) + sizeof(_impl_.datamultiplepowerof10_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* MDSLTransaction::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
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
          CHK_(::_pbi::VerifyUTF8(str, "com.htsc.mdc.insight.model.MDSLTransaction.HTSCSecurityID"));
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
      // int64 TradeIndex = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 72)) {
          _impl_.tradeindex_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int64 TradeBuyNo = 10;
      case 10:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 80)) {
          _impl_.tradebuyno_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int64 TradeSellNo = 11;
      case 11:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 88)) {
          _impl_.tradesellno_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 TradeType = 12;
      case 12:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 96)) {
          _impl_.tradetype_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 TradeBSFlag = 13;
      case 13:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 104)) {
          _impl_.tradebsflag_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int64 TradePrice = 14;
      case 14:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 112)) {
          _impl_.tradeprice_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int64 TradeQty = 15;
      case 15:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 120)) {
          _impl_.tradeqty_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int64 TradeMoney = 16;
      case 16:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 128)) {
          _impl_.trademoney_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int64 NumTrades = 17;
      case 17:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 136)) {
          _impl_.numtrades_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 TradeTerm = 18;
      case 18:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 144)) {
          _impl_.tradeterm_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string TradeNum = 19;
      case 19:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 154)) {
          auto str = _internal_mutable_tradenum();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "com.htsc.mdc.insight.model.MDSLTransaction.TradeNum"));
        } else
          goto handle_unusual;
        continue;
      // int32 DataMultiplePowerOf10 = 20;
      case 20:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 160)) {
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

uint8_t* MDSLTransaction::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:com.htsc.mdc.insight.model.MDSLTransaction)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string HTSCSecurityID = 1;
  if (!this->_internal_htscsecurityid().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_htscsecurityid().data(), static_cast<int>(this->_internal_htscsecurityid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "com.htsc.mdc.insight.model.MDSLTransaction.HTSCSecurityID");
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

  // int64 TradeIndex = 9;
  if (this->_internal_tradeindex() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(9, this->_internal_tradeindex(), target);
  }

  // int64 TradeBuyNo = 10;
  if (this->_internal_tradebuyno() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(10, this->_internal_tradebuyno(), target);
  }

  // int64 TradeSellNo = 11;
  if (this->_internal_tradesellno() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(11, this->_internal_tradesellno(), target);
  }

  // int32 TradeType = 12;
  if (this->_internal_tradetype() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(12, this->_internal_tradetype(), target);
  }

  // int32 TradeBSFlag = 13;
  if (this->_internal_tradebsflag() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(13, this->_internal_tradebsflag(), target);
  }

  // int64 TradePrice = 14;
  if (this->_internal_tradeprice() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(14, this->_internal_tradeprice(), target);
  }

  // int64 TradeQty = 15;
  if (this->_internal_tradeqty() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(15, this->_internal_tradeqty(), target);
  }

  // int64 TradeMoney = 16;
  if (this->_internal_trademoney() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(16, this->_internal_trademoney(), target);
  }

  // int64 NumTrades = 17;
  if (this->_internal_numtrades() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(17, this->_internal_numtrades(), target);
  }

  // int32 TradeTerm = 18;
  if (this->_internal_tradeterm() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(18, this->_internal_tradeterm(), target);
  }

  // string TradeNum = 19;
  if (!this->_internal_tradenum().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_tradenum().data(), static_cast<int>(this->_internal_tradenum().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "com.htsc.mdc.insight.model.MDSLTransaction.TradeNum");
    target = stream->WriteStringMaybeAliased(
        19, this->_internal_tradenum(), target);
  }

  // int32 DataMultiplePowerOf10 = 20;
  if (this->_internal_datamultiplepowerof10() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(20, this->_internal_datamultiplepowerof10(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:com.htsc.mdc.insight.model.MDSLTransaction)
  return target;
}

size_t MDSLTransaction::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:com.htsc.mdc.insight.model.MDSLTransaction)
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

  // string TradeNum = 19;
  if (!this->_internal_tradenum().empty()) {
    total_size += 2 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_tradenum());
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

  // int64 TradeIndex = 9;
  if (this->_internal_tradeindex() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_tradeindex());
  }

  // int64 TradeBuyNo = 10;
  if (this->_internal_tradebuyno() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_tradebuyno());
  }

  // int64 TradeSellNo = 11;
  if (this->_internal_tradesellno() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_tradesellno());
  }

  // int32 TradeType = 12;
  if (this->_internal_tradetype() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_tradetype());
  }

  // int32 TradeBSFlag = 13;
  if (this->_internal_tradebsflag() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_tradebsflag());
  }

  // int64 TradePrice = 14;
  if (this->_internal_tradeprice() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_tradeprice());
  }

  // int64 TradeQty = 15;
  if (this->_internal_tradeqty() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_tradeqty());
  }

  // int64 TradeMoney = 16;
  if (this->_internal_trademoney() != 0) {
    total_size += 2 +
      ::_pbi::WireFormatLite::Int64Size(
        this->_internal_trademoney());
  }

  // int64 NumTrades = 17;
  if (this->_internal_numtrades() != 0) {
    total_size += 2 +
      ::_pbi::WireFormatLite::Int64Size(
        this->_internal_numtrades());
  }

  // int32 TradeTerm = 18;
  if (this->_internal_tradeterm() != 0) {
    total_size += 2 +
      ::_pbi::WireFormatLite::Int32Size(
        this->_internal_tradeterm());
  }

  // int32 DataMultiplePowerOf10 = 20;
  if (this->_internal_datamultiplepowerof10() != 0) {
    total_size += 2 +
      ::_pbi::WireFormatLite::Int32Size(
        this->_internal_datamultiplepowerof10());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData MDSLTransaction::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    MDSLTransaction::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*MDSLTransaction::GetClassData() const { return &_class_data_; }


void MDSLTransaction::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<MDSLTransaction*>(&to_msg);
  auto& from = static_cast<const MDSLTransaction&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:com.htsc.mdc.insight.model.MDSLTransaction)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_htscsecurityid().empty()) {
    _this->_internal_set_htscsecurityid(from._internal_htscsecurityid());
  }
  if (!from._internal_tradenum().empty()) {
    _this->_internal_set_tradenum(from._internal_tradenum());
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
  if (from._internal_tradeindex() != 0) {
    _this->_internal_set_tradeindex(from._internal_tradeindex());
  }
  if (from._internal_tradebuyno() != 0) {
    _this->_internal_set_tradebuyno(from._internal_tradebuyno());
  }
  if (from._internal_tradesellno() != 0) {
    _this->_internal_set_tradesellno(from._internal_tradesellno());
  }
  if (from._internal_tradetype() != 0) {
    _this->_internal_set_tradetype(from._internal_tradetype());
  }
  if (from._internal_tradebsflag() != 0) {
    _this->_internal_set_tradebsflag(from._internal_tradebsflag());
  }
  if (from._internal_tradeprice() != 0) {
    _this->_internal_set_tradeprice(from._internal_tradeprice());
  }
  if (from._internal_tradeqty() != 0) {
    _this->_internal_set_tradeqty(from._internal_tradeqty());
  }
  if (from._internal_trademoney() != 0) {
    _this->_internal_set_trademoney(from._internal_trademoney());
  }
  if (from._internal_numtrades() != 0) {
    _this->_internal_set_numtrades(from._internal_numtrades());
  }
  if (from._internal_tradeterm() != 0) {
    _this->_internal_set_tradeterm(from._internal_tradeterm());
  }
  if (from._internal_datamultiplepowerof10() != 0) {
    _this->_internal_set_datamultiplepowerof10(from._internal_datamultiplepowerof10());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void MDSLTransaction::CopyFrom(const MDSLTransaction& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:com.htsc.mdc.insight.model.MDSLTransaction)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MDSLTransaction::IsInitialized() const {
  return true;
}

void MDSLTransaction::InternalSwap(MDSLTransaction* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.htscsecurityid_, lhs_arena,
      &other->_impl_.htscsecurityid_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.tradenum_, lhs_arena,
      &other->_impl_.tradenum_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(MDSLTransaction, _impl_.datamultiplepowerof10_)
      + sizeof(MDSLTransaction::_impl_.datamultiplepowerof10_)
      - PROTOBUF_FIELD_OFFSET(MDSLTransaction, _impl_.mddate_)>(
          reinterpret_cast<char*>(&_impl_.mddate_),
          reinterpret_cast<char*>(&other->_impl_.mddate_));
}

::PROTOBUF_NAMESPACE_ID::Metadata MDSLTransaction::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_MDSLTransaction_2eproto_getter, &descriptor_table_MDSLTransaction_2eproto_once,
      file_level_metadata_MDSLTransaction_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace model
}  // namespace insight
}  // namespace mdc
}  // namespace htsc
}  // namespace com
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::com::htsc::mdc::insight::model::MDSLTransaction*
Arena::CreateMaybeMessage< ::com::htsc::mdc::insight::model::MDSLTransaction >(Arena* arena) {
  return Arena::CreateMessageInternal< ::com::htsc::mdc::insight::model::MDSLTransaction >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
