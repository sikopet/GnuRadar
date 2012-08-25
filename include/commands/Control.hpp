// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Control.proto

#ifndef PROTOBUF_Control_2eproto__INCLUDED
#define PROTOBUF_Control_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
// @@protoc_insertion_point(includes)

namespace gnuradar {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_Control_2eproto();
void protobuf_AssignDesc_Control_2eproto();
void protobuf_ShutdownFile_Control_2eproto();

class ControlMessage;

// ===================================================================

class ControlMessage : public ::google::protobuf::Message {
 public:
  ControlMessage();
  virtual ~ControlMessage();
  
  ControlMessage(const ControlMessage& from);
  
  inline ControlMessage& operator=(const ControlMessage& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const ControlMessage& default_instance();
  
  void Swap(ControlMessage* other);
  
  // implements Message ----------------------------------------------
  
  ControlMessage* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ControlMessage& from);
  void MergeFrom(const ControlMessage& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required string name = 1;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 1;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  
  // required string source = 2;
  inline bool has_source() const;
  inline void clear_source();
  static const int kSourceFieldNumber = 2;
  inline const ::std::string& source() const;
  inline void set_source(const ::std::string& value);
  inline void set_source(const char* value);
  inline void set_source(const char* value, size_t size);
  inline ::std::string* mutable_source();
  inline ::std::string* release_source();
  
  // required string destination = 3;
  inline bool has_destination() const;
  inline void clear_destination();
  static const int kDestinationFieldNumber = 3;
  inline const ::std::string& destination() const;
  inline void set_destination(const ::std::string& value);
  inline void set_destination(const char* value);
  inline void set_destination(const char* value, size_t size);
  inline ::std::string* mutable_destination();
  inline ::std::string* release_destination();
  
  // @@protoc_insertion_point(class_scope:gnuradar.ControlMessage)
 private:
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_source();
  inline void clear_has_source();
  inline void set_has_destination();
  inline void clear_has_destination();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* name_;
  ::std::string* source_;
  ::std::string* destination_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];
  
  friend void  protobuf_AddDesc_Control_2eproto();
  friend void protobuf_AssignDesc_Control_2eproto();
  friend void protobuf_ShutdownFile_Control_2eproto();
  
  void InitAsDefaultInstance();
  static ControlMessage* default_instance_;
};
// ===================================================================


// ===================================================================

// ControlMessage

// required string name = 1;
inline bool ControlMessage::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ControlMessage::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ControlMessage::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ControlMessage::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& ControlMessage::name() const {
  return *name_;
}
inline void ControlMessage::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void ControlMessage::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void ControlMessage::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ControlMessage::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* ControlMessage::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required string source = 2;
inline bool ControlMessage::has_source() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ControlMessage::set_has_source() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ControlMessage::clear_has_source() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ControlMessage::clear_source() {
  if (source_ != &::google::protobuf::internal::kEmptyString) {
    source_->clear();
  }
  clear_has_source();
}
inline const ::std::string& ControlMessage::source() const {
  return *source_;
}
inline void ControlMessage::set_source(const ::std::string& value) {
  set_has_source();
  if (source_ == &::google::protobuf::internal::kEmptyString) {
    source_ = new ::std::string;
  }
  source_->assign(value);
}
inline void ControlMessage::set_source(const char* value) {
  set_has_source();
  if (source_ == &::google::protobuf::internal::kEmptyString) {
    source_ = new ::std::string;
  }
  source_->assign(value);
}
inline void ControlMessage::set_source(const char* value, size_t size) {
  set_has_source();
  if (source_ == &::google::protobuf::internal::kEmptyString) {
    source_ = new ::std::string;
  }
  source_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ControlMessage::mutable_source() {
  set_has_source();
  if (source_ == &::google::protobuf::internal::kEmptyString) {
    source_ = new ::std::string;
  }
  return source_;
}
inline ::std::string* ControlMessage::release_source() {
  clear_has_source();
  if (source_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = source_;
    source_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required string destination = 3;
inline bool ControlMessage::has_destination() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ControlMessage::set_has_destination() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ControlMessage::clear_has_destination() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ControlMessage::clear_destination() {
  if (destination_ != &::google::protobuf::internal::kEmptyString) {
    destination_->clear();
  }
  clear_has_destination();
}
inline const ::std::string& ControlMessage::destination() const {
  return *destination_;
}
inline void ControlMessage::set_destination(const ::std::string& value) {
  set_has_destination();
  if (destination_ == &::google::protobuf::internal::kEmptyString) {
    destination_ = new ::std::string;
  }
  destination_->assign(value);
}
inline void ControlMessage::set_destination(const char* value) {
  set_has_destination();
  if (destination_ == &::google::protobuf::internal::kEmptyString) {
    destination_ = new ::std::string;
  }
  destination_->assign(value);
}
inline void ControlMessage::set_destination(const char* value, size_t size) {
  set_has_destination();
  if (destination_ == &::google::protobuf::internal::kEmptyString) {
    destination_ = new ::std::string;
  }
  destination_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ControlMessage::mutable_destination() {
  set_has_destination();
  if (destination_ == &::google::protobuf::internal::kEmptyString) {
    destination_ = new ::std::string;
  }
  return destination_;
}
inline ::std::string* ControlMessage::release_destination() {
  clear_has_destination();
  if (destination_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = destination_;
    destination_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace gnuradar

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Control_2eproto__INCLUDED
