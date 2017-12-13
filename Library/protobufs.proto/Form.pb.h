// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Form.proto

#ifndef PROTOBUF_Form_2eproto__INCLUDED
#define PROTOBUF_Form_2eproto__INCLUDED

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
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
namespace tutorial {
class Person;
class PersonDefaultTypeInternal;
extern PersonDefaultTypeInternal _Person_default_instance_;
}  // namespace tutorial

namespace tutorial {

namespace protobuf_Form_2eproto {
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
}  // namespace protobuf_Form_2eproto

// ===================================================================

class Person : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tutorial.Person) */ {
 public:
  Person();
  virtual ~Person();

  Person(const Person& from);

  inline Person& operator=(const Person& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Person& default_instance();

  static inline const Person* internal_default_instance() {
    return reinterpret_cast<const Person*>(
               &_Person_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Person* other);

  // implements Message ----------------------------------------------

  inline Person* New() const PROTOBUF_FINAL { return New(NULL); }

  Person* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Person& from);
  void MergeFrom(const Person& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Person* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string speed = 1;
  bool has_speed() const;
  void clear_speed();
  static const int kSpeedFieldNumber = 1;
  const ::std::string& speed() const;
  void set_speed(const ::std::string& value);
  #if LANG_CXX11
  void set_speed(::std::string&& value);
  #endif
  void set_speed(const char* value);
  void set_speed(const char* value, size_t size);
  ::std::string* mutable_speed();
  ::std::string* release_speed();
  void set_allocated_speed(::std::string* speed);

  // @@protoc_insertion_point(class_scope:tutorial.Person)
 private:
  void set_has_speed();
  void clear_has_speed();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr speed_;
  friend struct protobuf_Form_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Person

// required string speed = 1;
inline bool Person::has_speed() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Person::set_has_speed() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Person::clear_has_speed() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Person::clear_speed() {
  speed_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_speed();
}
inline const ::std::string& Person::speed() const {
  // @@protoc_insertion_point(field_get:tutorial.Person.speed)
  return speed_.GetNoArena();
}
inline void Person::set_speed(const ::std::string& value) {
  set_has_speed();
  speed_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tutorial.Person.speed)
}
#if LANG_CXX11
inline void Person::set_speed(::std::string&& value) {
  set_has_speed();
  speed_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:tutorial.Person.speed)
}
#endif
inline void Person::set_speed(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_speed();
  speed_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tutorial.Person.speed)
}
inline void Person::set_speed(const char* value, size_t size) {
  set_has_speed();
  speed_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tutorial.Person.speed)
}
inline ::std::string* Person::mutable_speed() {
  set_has_speed();
  // @@protoc_insertion_point(field_mutable:tutorial.Person.speed)
  return speed_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Person::release_speed() {
  // @@protoc_insertion_point(field_release:tutorial.Person.speed)
  clear_has_speed();
  return speed_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Person::set_allocated_speed(::std::string* speed) {
  if (speed != NULL) {
    set_has_speed();
  } else {
    clear_has_speed();
  }
  speed_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), speed);
  // @@protoc_insertion_point(field_set_allocated:tutorial.Person.speed)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace tutorial

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Form_2eproto__INCLUDED