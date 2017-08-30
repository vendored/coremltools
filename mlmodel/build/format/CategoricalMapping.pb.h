// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CategoricalMapping.proto

#ifndef PROTOBUF_CategoricalMapping_2eproto__INCLUDED
#define PROTOBUF_CategoricalMapping_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3003000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include "DataStructures.pb.h"  // IWYU pragma: export
// @@protoc_insertion_point(includes)
namespace CoreML {
namespace Specification {
class ArrayFeatureType;
class ArrayFeatureTypeDefaultTypeInternal;
extern ArrayFeatureTypeDefaultTypeInternal _ArrayFeatureType_default_instance_;
class CategoricalMapping;
class CategoricalMappingDefaultTypeInternal;
extern CategoricalMappingDefaultTypeInternal _CategoricalMapping_default_instance_;
class DictionaryFeatureType;
class DictionaryFeatureTypeDefaultTypeInternal;
extern DictionaryFeatureTypeDefaultTypeInternal _DictionaryFeatureType_default_instance_;
class DoubleFeatureType;
class DoubleFeatureTypeDefaultTypeInternal;
extern DoubleFeatureTypeDefaultTypeInternal _DoubleFeatureType_default_instance_;
class DoubleVector;
class DoubleVectorDefaultTypeInternal;
extern DoubleVectorDefaultTypeInternal _DoubleVector_default_instance_;
class FeatureType;
class FeatureTypeDefaultTypeInternal;
extern FeatureTypeDefaultTypeInternal _FeatureType_default_instance_;
class ImageFeatureType;
class ImageFeatureTypeDefaultTypeInternal;
extern ImageFeatureTypeDefaultTypeInternal _ImageFeatureType_default_instance_;
class Int64FeatureType;
class Int64FeatureTypeDefaultTypeInternal;
extern Int64FeatureTypeDefaultTypeInternal _Int64FeatureType_default_instance_;
class Int64ToDoubleMap;
class Int64ToDoubleMapDefaultTypeInternal;
extern Int64ToDoubleMapDefaultTypeInternal _Int64ToDoubleMap_default_instance_;
class Int64ToDoubleMap_MapEntry;
class Int64ToDoubleMap_MapEntryDefaultTypeInternal;
extern Int64ToDoubleMap_MapEntryDefaultTypeInternal _Int64ToDoubleMap_MapEntry_default_instance_;
class Int64ToStringMap;
class Int64ToStringMapDefaultTypeInternal;
extern Int64ToStringMapDefaultTypeInternal _Int64ToStringMap_default_instance_;
class Int64ToStringMap_MapEntry;
class Int64ToStringMap_MapEntryDefaultTypeInternal;
extern Int64ToStringMap_MapEntryDefaultTypeInternal _Int64ToStringMap_MapEntry_default_instance_;
class Int64Vector;
class Int64VectorDefaultTypeInternal;
extern Int64VectorDefaultTypeInternal _Int64Vector_default_instance_;
class StringFeatureType;
class StringFeatureTypeDefaultTypeInternal;
extern StringFeatureTypeDefaultTypeInternal _StringFeatureType_default_instance_;
class StringToDoubleMap;
class StringToDoubleMapDefaultTypeInternal;
extern StringToDoubleMapDefaultTypeInternal _StringToDoubleMap_default_instance_;
class StringToDoubleMap_MapEntry;
class StringToDoubleMap_MapEntryDefaultTypeInternal;
extern StringToDoubleMap_MapEntryDefaultTypeInternal _StringToDoubleMap_MapEntry_default_instance_;
class StringToInt64Map;
class StringToInt64MapDefaultTypeInternal;
extern StringToInt64MapDefaultTypeInternal _StringToInt64Map_default_instance_;
class StringToInt64Map_MapEntry;
class StringToInt64Map_MapEntryDefaultTypeInternal;
extern StringToInt64Map_MapEntryDefaultTypeInternal _StringToInt64Map_MapEntry_default_instance_;
class StringVector;
class StringVectorDefaultTypeInternal;
extern StringVectorDefaultTypeInternal _StringVector_default_instance_;
}  // namespace Specification
}  // namespace CoreML

namespace CoreML {
namespace Specification {

namespace protobuf_CategoricalMapping_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_CategoricalMapping_2eproto

// ===================================================================

class CategoricalMapping : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:CoreML.Specification.CategoricalMapping) */ {
 public:
  CategoricalMapping();
  virtual ~CategoricalMapping();

  CategoricalMapping(const CategoricalMapping& from);

  inline CategoricalMapping& operator=(const CategoricalMapping& from) {
    CopyFrom(from);
    return *this;
  }

  static const CategoricalMapping& default_instance();

  enum MappingTypeCase {
    kStringToInt64Map = 1,
    kInt64ToStringMap = 2,
    MAPPINGTYPE_NOT_SET = 0,
  };

  enum ValueOnUnknownCase {
    kStrValue = 101,
    kInt64Value = 102,
    VALUEONUNKNOWN_NOT_SET = 0,
  };

  static inline const CategoricalMapping* internal_default_instance() {
    return reinterpret_cast<const CategoricalMapping*>(
               &_CategoricalMapping_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(CategoricalMapping* other);

  // implements Message ----------------------------------------------

  inline CategoricalMapping* New() const PROTOBUF_FINAL { return New(NULL); }

  CategoricalMapping* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const CategoricalMapping& from);
  void MergeFrom(const CategoricalMapping& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(CategoricalMapping* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .CoreML.Specification.StringToInt64Map stringToInt64Map = 1;
  bool has_stringtoint64map() const;
  void clear_stringtoint64map();
  static const int kStringToInt64MapFieldNumber = 1;
  const ::CoreML::Specification::StringToInt64Map& stringtoint64map() const;
  ::CoreML::Specification::StringToInt64Map* mutable_stringtoint64map();
  ::CoreML::Specification::StringToInt64Map* release_stringtoint64map();
  void set_allocated_stringtoint64map(::CoreML::Specification::StringToInt64Map* stringtoint64map);

  // .CoreML.Specification.Int64ToStringMap int64ToStringMap = 2;
  bool has_int64tostringmap() const;
  void clear_int64tostringmap();
  static const int kInt64ToStringMapFieldNumber = 2;
  const ::CoreML::Specification::Int64ToStringMap& int64tostringmap() const;
  ::CoreML::Specification::Int64ToStringMap* mutable_int64tostringmap();
  ::CoreML::Specification::Int64ToStringMap* release_int64tostringmap();
  void set_allocated_int64tostringmap(::CoreML::Specification::Int64ToStringMap* int64tostringmap);

  // string strValue = 101;
  private:
  bool has_strvalue() const;
  public:
  void clear_strvalue();
  static const int kStrValueFieldNumber = 101;
  const ::std::string& strvalue() const;
  void set_strvalue(const ::std::string& value);
  #if LANG_CXX11
  void set_strvalue(::std::string&& value);
  #endif
  void set_strvalue(const char* value);
  void set_strvalue(const char* value, size_t size);
  ::std::string* mutable_strvalue();
  ::std::string* release_strvalue();
  void set_allocated_strvalue(::std::string* strvalue);

  // int64 int64Value = 102;
  private:
  bool has_int64value() const;
  public:
  void clear_int64value();
  static const int kInt64ValueFieldNumber = 102;
  ::google::protobuf::int64 int64value() const;
  void set_int64value(::google::protobuf::int64 value);

  MappingTypeCase MappingType_case() const;
  ValueOnUnknownCase ValueOnUnknown_case() const;
  // @@protoc_insertion_point(class_scope:CoreML.Specification.CategoricalMapping)
 private:
  void set_has_stringtoint64map();
  void set_has_int64tostringmap();
  void set_has_strvalue();
  void set_has_int64value();

  inline bool has_MappingType() const;
  void clear_MappingType();
  inline void clear_has_MappingType();

  inline bool has_ValueOnUnknown() const;
  void clear_ValueOnUnknown();
  inline void clear_has_ValueOnUnknown();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  union MappingTypeUnion {
    MappingTypeUnion() {}
    ::CoreML::Specification::StringToInt64Map* stringtoint64map_;
    ::CoreML::Specification::Int64ToStringMap* int64tostringmap_;
  } MappingType_;
  union ValueOnUnknownUnion {
    ValueOnUnknownUnion() {}
    ::google::protobuf::internal::ArenaStringPtr strvalue_;
    ::google::protobuf::int64 int64value_;
  } ValueOnUnknown_;
  mutable int _cached_size_;
  ::google::protobuf::uint32 _oneof_case_[2];

  friend struct protobuf_CategoricalMapping_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// CategoricalMapping

// .CoreML.Specification.StringToInt64Map stringToInt64Map = 1;
inline bool CategoricalMapping::has_stringtoint64map() const {
  return MappingType_case() == kStringToInt64Map;
}
inline void CategoricalMapping::set_has_stringtoint64map() {
  _oneof_case_[0] = kStringToInt64Map;
}
inline void CategoricalMapping::clear_stringtoint64map() {
  if (has_stringtoint64map()) {
    delete MappingType_.stringtoint64map_;
    clear_has_MappingType();
  }
}
inline  const ::CoreML::Specification::StringToInt64Map& CategoricalMapping::stringtoint64map() const {
  // @@protoc_insertion_point(field_get:CoreML.Specification.CategoricalMapping.stringToInt64Map)
  return has_stringtoint64map()
      ? *MappingType_.stringtoint64map_
      : ::CoreML::Specification::StringToInt64Map::default_instance();
}
inline ::CoreML::Specification::StringToInt64Map* CategoricalMapping::mutable_stringtoint64map() {
  if (!has_stringtoint64map()) {
    clear_MappingType();
    set_has_stringtoint64map();
    MappingType_.stringtoint64map_ = new ::CoreML::Specification::StringToInt64Map;
  }
  // @@protoc_insertion_point(field_mutable:CoreML.Specification.CategoricalMapping.stringToInt64Map)
  return MappingType_.stringtoint64map_;
}
inline ::CoreML::Specification::StringToInt64Map* CategoricalMapping::release_stringtoint64map() {
  // @@protoc_insertion_point(field_release:CoreML.Specification.CategoricalMapping.stringToInt64Map)
  if (has_stringtoint64map()) {
    clear_has_MappingType();
    ::CoreML::Specification::StringToInt64Map* temp = MappingType_.stringtoint64map_;
    MappingType_.stringtoint64map_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void CategoricalMapping::set_allocated_stringtoint64map(::CoreML::Specification::StringToInt64Map* stringtoint64map) {
  clear_MappingType();
  if (stringtoint64map) {
    set_has_stringtoint64map();
    MappingType_.stringtoint64map_ = stringtoint64map;
  }
  // @@protoc_insertion_point(field_set_allocated:CoreML.Specification.CategoricalMapping.stringToInt64Map)
}

// .CoreML.Specification.Int64ToStringMap int64ToStringMap = 2;
inline bool CategoricalMapping::has_int64tostringmap() const {
  return MappingType_case() == kInt64ToStringMap;
}
inline void CategoricalMapping::set_has_int64tostringmap() {
  _oneof_case_[0] = kInt64ToStringMap;
}
inline void CategoricalMapping::clear_int64tostringmap() {
  if (has_int64tostringmap()) {
    delete MappingType_.int64tostringmap_;
    clear_has_MappingType();
  }
}
inline  const ::CoreML::Specification::Int64ToStringMap& CategoricalMapping::int64tostringmap() const {
  // @@protoc_insertion_point(field_get:CoreML.Specification.CategoricalMapping.int64ToStringMap)
  return has_int64tostringmap()
      ? *MappingType_.int64tostringmap_
      : ::CoreML::Specification::Int64ToStringMap::default_instance();
}
inline ::CoreML::Specification::Int64ToStringMap* CategoricalMapping::mutable_int64tostringmap() {
  if (!has_int64tostringmap()) {
    clear_MappingType();
    set_has_int64tostringmap();
    MappingType_.int64tostringmap_ = new ::CoreML::Specification::Int64ToStringMap;
  }
  // @@protoc_insertion_point(field_mutable:CoreML.Specification.CategoricalMapping.int64ToStringMap)
  return MappingType_.int64tostringmap_;
}
inline ::CoreML::Specification::Int64ToStringMap* CategoricalMapping::release_int64tostringmap() {
  // @@protoc_insertion_point(field_release:CoreML.Specification.CategoricalMapping.int64ToStringMap)
  if (has_int64tostringmap()) {
    clear_has_MappingType();
    ::CoreML::Specification::Int64ToStringMap* temp = MappingType_.int64tostringmap_;
    MappingType_.int64tostringmap_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void CategoricalMapping::set_allocated_int64tostringmap(::CoreML::Specification::Int64ToStringMap* int64tostringmap) {
  clear_MappingType();
  if (int64tostringmap) {
    set_has_int64tostringmap();
    MappingType_.int64tostringmap_ = int64tostringmap;
  }
  // @@protoc_insertion_point(field_set_allocated:CoreML.Specification.CategoricalMapping.int64ToStringMap)
}

// string strValue = 101;
inline bool CategoricalMapping::has_strvalue() const {
  return ValueOnUnknown_case() == kStrValue;
}
inline void CategoricalMapping::set_has_strvalue() {
  _oneof_case_[1] = kStrValue;
}
inline void CategoricalMapping::clear_strvalue() {
  if (has_strvalue()) {
    ValueOnUnknown_.strvalue_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    clear_has_ValueOnUnknown();
  }
}
inline const ::std::string& CategoricalMapping::strvalue() const {
  // @@protoc_insertion_point(field_get:CoreML.Specification.CategoricalMapping.strValue)
  if (has_strvalue()) {
    return ValueOnUnknown_.strvalue_.GetNoArena();
  }
  return *&::google::protobuf::internal::GetEmptyStringAlreadyInited();
}
inline void CategoricalMapping::set_strvalue(const ::std::string& value) {
  // @@protoc_insertion_point(field_set:CoreML.Specification.CategoricalMapping.strValue)
  if (!has_strvalue()) {
    clear_ValueOnUnknown();
    set_has_strvalue();
    ValueOnUnknown_.strvalue_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  ValueOnUnknown_.strvalue_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:CoreML.Specification.CategoricalMapping.strValue)
}
#if LANG_CXX11
inline void CategoricalMapping::set_strvalue(::std::string&& value) {
  // @@protoc_insertion_point(field_set:CoreML.Specification.CategoricalMapping.strValue)
  if (!has_strvalue()) {
    clear_ValueOnUnknown();
    set_has_strvalue();
    ValueOnUnknown_.strvalue_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  ValueOnUnknown_.strvalue_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:CoreML.Specification.CategoricalMapping.strValue)
}
#endif
inline void CategoricalMapping::set_strvalue(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  if (!has_strvalue()) {
    clear_ValueOnUnknown();
    set_has_strvalue();
    ValueOnUnknown_.strvalue_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  ValueOnUnknown_.strvalue_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(value));
  // @@protoc_insertion_point(field_set_char:CoreML.Specification.CategoricalMapping.strValue)
}
inline void CategoricalMapping::set_strvalue(const char* value, size_t size) {
  if (!has_strvalue()) {
    clear_ValueOnUnknown();
    set_has_strvalue();
    ValueOnUnknown_.strvalue_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  ValueOnUnknown_.strvalue_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:CoreML.Specification.CategoricalMapping.strValue)
}
inline ::std::string* CategoricalMapping::mutable_strvalue() {
  if (!has_strvalue()) {
    clear_ValueOnUnknown();
    set_has_strvalue();
    ValueOnUnknown_.strvalue_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_mutable:CoreML.Specification.CategoricalMapping.strValue)
  return ValueOnUnknown_.strvalue_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CategoricalMapping::release_strvalue() {
  // @@protoc_insertion_point(field_release:CoreML.Specification.CategoricalMapping.strValue)
  if (has_strvalue()) {
    clear_has_ValueOnUnknown();
    return ValueOnUnknown_.strvalue_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  } else {
    return NULL;
  }
}
inline void CategoricalMapping::set_allocated_strvalue(::std::string* strvalue) {
  if (!has_strvalue()) {
    ValueOnUnknown_.strvalue_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  clear_ValueOnUnknown();
  if (strvalue != NULL) {
    set_has_strvalue();
    ValueOnUnknown_.strvalue_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
        strvalue);
  }
  // @@protoc_insertion_point(field_set_allocated:CoreML.Specification.CategoricalMapping.strValue)
}

// int64 int64Value = 102;
inline bool CategoricalMapping::has_int64value() const {
  return ValueOnUnknown_case() == kInt64Value;
}
inline void CategoricalMapping::set_has_int64value() {
  _oneof_case_[1] = kInt64Value;
}
inline void CategoricalMapping::clear_int64value() {
  if (has_int64value()) {
    ValueOnUnknown_.int64value_ = GOOGLE_LONGLONG(0);
    clear_has_ValueOnUnknown();
  }
}
inline ::google::protobuf::int64 CategoricalMapping::int64value() const {
  // @@protoc_insertion_point(field_get:CoreML.Specification.CategoricalMapping.int64Value)
  if (has_int64value()) {
    return ValueOnUnknown_.int64value_;
  }
  return GOOGLE_LONGLONG(0);
}
inline void CategoricalMapping::set_int64value(::google::protobuf::int64 value) {
  if (!has_int64value()) {
    clear_ValueOnUnknown();
    set_has_int64value();
  }
  ValueOnUnknown_.int64value_ = value;
  // @@protoc_insertion_point(field_set:CoreML.Specification.CategoricalMapping.int64Value)
}

inline bool CategoricalMapping::has_MappingType() const {
  return MappingType_case() != MAPPINGTYPE_NOT_SET;
}
inline void CategoricalMapping::clear_has_MappingType() {
  _oneof_case_[0] = MAPPINGTYPE_NOT_SET;
}
inline bool CategoricalMapping::has_ValueOnUnknown() const {
  return ValueOnUnknown_case() != VALUEONUNKNOWN_NOT_SET;
}
inline void CategoricalMapping::clear_has_ValueOnUnknown() {
  _oneof_case_[1] = VALUEONUNKNOWN_NOT_SET;
}
inline CategoricalMapping::MappingTypeCase CategoricalMapping::MappingType_case() const {
  return CategoricalMapping::MappingTypeCase(_oneof_case_[0]);
}
inline CategoricalMapping::ValueOnUnknownCase CategoricalMapping::ValueOnUnknown_case() const {
  return CategoricalMapping::ValueOnUnknownCase(_oneof_case_[1]);
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace Specification
}  // namespace CoreML

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_CategoricalMapping_2eproto__INCLUDED
