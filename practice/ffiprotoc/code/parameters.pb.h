// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: parameters.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_parameters_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_parameters_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021008 < PROTOBUF_MIN_PROTOC_VERSION
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
#include "basic.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_parameters_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_parameters_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_parameters_2eproto;
namespace demo {
namespace parameters {
class SubmitResult;
struct SubmitResultDefaultTypeInternal;
extern SubmitResultDefaultTypeInternal _SubmitResult_default_instance_;
}  // namespace parameters
}  // namespace demo
PROTOBUF_NAMESPACE_OPEN
template<> ::demo::parameters::SubmitResult* Arena::CreateMaybeMessage<::demo::parameters::SubmitResult>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace demo {
namespace parameters {

// ===================================================================

class SubmitResult final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:demo.parameters.SubmitResult) */ {
 public:
  inline SubmitResult() : SubmitResult(nullptr) {}
  ~SubmitResult() override;
  explicit PROTOBUF_CONSTEXPR SubmitResult(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  SubmitResult(const SubmitResult& from);
  SubmitResult(SubmitResult&& from) noexcept
    : SubmitResult() {
    *this = ::std::move(from);
  }

  inline SubmitResult& operator=(const SubmitResult& from) {
    CopyFrom(from);
    return *this;
  }
  inline SubmitResult& operator=(SubmitResult&& from) noexcept {
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
  static const SubmitResult& default_instance() {
    return *internal_default_instance();
  }
  static inline const SubmitResult* internal_default_instance() {
    return reinterpret_cast<const SubmitResult*>(
               &_SubmitResult_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SubmitResult& a, SubmitResult& b) {
    a.Swap(&b);
  }
  inline void Swap(SubmitResult* other) {
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
  void UnsafeArenaSwap(SubmitResult* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  SubmitResult* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<SubmitResult>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const SubmitResult& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const SubmitResult& from) {
    SubmitResult::MergeImpl(*this, from);
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
  void InternalSwap(SubmitResult* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "demo.parameters.SubmitResult";
  }
  protected:
  explicit SubmitResult(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kLogsFieldNumber = 2,
    kStatusDataFieldNumber = 1,
  };
  // repeated .demo.basic.ResultLog logs = 2;
  int logs_size() const;
  private:
  int _internal_logs_size() const;
  public:
  void clear_logs();
  ::demo::basic::ResultLog* mutable_logs(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::demo::basic::ResultLog >*
      mutable_logs();
  private:
  const ::demo::basic::ResultLog& _internal_logs(int index) const;
  ::demo::basic::ResultLog* _internal_add_logs();
  public:
  const ::demo::basic::ResultLog& logs(int index) const;
  ::demo::basic::ResultLog* add_logs();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::demo::basic::ResultLog >&
      logs() const;

  // uint32 status_data = 1;
  void clear_status_data();
  uint32_t status_data() const;
  void set_status_data(uint32_t value);
  private:
  uint32_t _internal_status_data() const;
  void _internal_set_status_data(uint32_t value);
  public:

  // @@protoc_insertion_point(class_scope:demo.parameters.SubmitResult)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::demo::basic::ResultLog > logs_;
    uint32_t status_data_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_parameters_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SubmitResult

// uint32 status_data = 1;
inline void SubmitResult::clear_status_data() {
  _impl_.status_data_ = 0u;
}
inline uint32_t SubmitResult::_internal_status_data() const {
  return _impl_.status_data_;
}
inline uint32_t SubmitResult::status_data() const {
  // @@protoc_insertion_point(field_get:demo.parameters.SubmitResult.status_data)
  return _internal_status_data();
}
inline void SubmitResult::_internal_set_status_data(uint32_t value) {
  
  _impl_.status_data_ = value;
}
inline void SubmitResult::set_status_data(uint32_t value) {
  _internal_set_status_data(value);
  // @@protoc_insertion_point(field_set:demo.parameters.SubmitResult.status_data)
}

// repeated .demo.basic.ResultLog logs = 2;
inline int SubmitResult::_internal_logs_size() const {
  return _impl_.logs_.size();
}
inline int SubmitResult::logs_size() const {
  return _internal_logs_size();
}
inline ::demo::basic::ResultLog* SubmitResult::mutable_logs(int index) {
  // @@protoc_insertion_point(field_mutable:demo.parameters.SubmitResult.logs)
  return _impl_.logs_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::demo::basic::ResultLog >*
SubmitResult::mutable_logs() {
  // @@protoc_insertion_point(field_mutable_list:demo.parameters.SubmitResult.logs)
  return &_impl_.logs_;
}
inline const ::demo::basic::ResultLog& SubmitResult::_internal_logs(int index) const {
  return _impl_.logs_.Get(index);
}
inline const ::demo::basic::ResultLog& SubmitResult::logs(int index) const {
  // @@protoc_insertion_point(field_get:demo.parameters.SubmitResult.logs)
  return _internal_logs(index);
}
inline ::demo::basic::ResultLog* SubmitResult::_internal_add_logs() {
  return _impl_.logs_.Add();
}
inline ::demo::basic::ResultLog* SubmitResult::add_logs() {
  ::demo::basic::ResultLog* _add = _internal_add_logs();
  // @@protoc_insertion_point(field_add:demo.parameters.SubmitResult.logs)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::demo::basic::ResultLog >&
SubmitResult::logs() const {
  // @@protoc_insertion_point(field_list:demo.parameters.SubmitResult.logs)
  return _impl_.logs_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace parameters
}  // namespace demo

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_parameters_2eproto