#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.7.1 (swiftlang-5.7.1.135.3 clang-1400.0.29.51)
#ifndef REALMSWIFT_SWIFT_H
#define REALMSWIFT_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wduplicate-method-match"
#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT noexcept
#endif
#else
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT 
#endif
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_CXX_INT_DEFINED)
#define SWIFT_CXX_INT_DEFINED
namespace swift {
using Int = ptrdiff_t;
using UInt = size_t;
}
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
@import Realm;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="RealmSwift",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
@class NSString;

/// A type which has a custom representation in Realm events.
/// By default, objects are serialized to JSON using built-in rules which
/// include every property. If you wish to customize how a class is serialized
/// in events, you can declare it as conforming to this protocol and
/// define <code>customEventRepresentation()</code>.
SWIFT_PROTOCOL_NAMED("CustomEventRepresentable")
@protocol RLMCustomEventRepresentable
/// Get the custom event serialization for this object.
/// This function must return a valid JSON String, as this is included in a
/// larger JSON document. Implementations of this function should be “pure”
/// and access no data other than that which is obtainable from the Object
/// it is called on, and it should not mutate the object which it is called
/// on. This function is called on a background thread in a somewhat
/// unusual context, and attempting to access other data is likely to cause
/// problems.
- (NSString * _Nonnull)customEventRepresentation SWIFT_WARN_UNUSED_RESULT;
@end

@class NSNumber;

/// A 128-bit IEEE 754-2008 decimal floating point number.
/// This type is similar to Swift’s built-in Decimal type, but allocates bits differently, resulting in a different representable range. (NS)Decimal stores a significand of up to 38 digits long and an exponent from -128 to 127, while this type stores up to 34 digits of significand and an exponent from -6143 to 6144.
SWIFT_CLASS_NAMED("Decimal128")
@interface RealmSwiftDecimal128 : RLMDecimal128
/// Creates a new zero-initialized Decimal128.
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
/// Converts the given value to a Decimal128.
/// The following types can be converted to Decimal128:
/// <ul>
///   <li>
///     Int (of any size)
///   </li>
///   <li>
///     Float
///   </li>
///   <li>
///     Double
///   </li>
///   <li>
///     String
///   </li>
///   <li>
///     NSNumber
///   </li>
///   <li>
///     Decimal
///   </li>
/// </ul>
/// Passing a value with a type not in this list is a fatal error. Passing a string which cannot be parsed as a valid Decimal128 is a fatal error.
/// \param value The value to convert to a Decimal128.
///
- (nonnull instancetype)initWithValue:(id _Nonnull)value OBJC_DESIGNATED_INITIALIZER;
/// Converts the given number to a Decimal128.
/// This initializer cannot fail and is never lossy.
/// \param number The number to convert to a Decimal128.
///
- (nonnull instancetype)initWithNumber:(NSNumber * _Nonnull)number OBJC_DESIGNATED_INITIALIZER;
/// Parse the given string as a Decimal128.
/// This initializer never throws and is marked as <code>throws</code> only because removing it is a breaking
/// change. Strings which cannot be parsed as a Decimal128 return a value where <code>isNaN</code> is <code>true</code>.
/// \param string The string to parse.
///
- (nullable instancetype)initWithString:(NSString * _Nonnull)string error:(NSError * _Nullable * _Nullable)error OBJC_DESIGNATED_INITIALIZER;
@end


















@class RLMObjectSchema;

/// Object interface which allows untyped getters and setters for Objects.
/// :nodoc:
SWIFT_CLASS_NAMED("DynamicObject")
@interface RealmSwiftDynamicObject : RealmSwiftObject
- (id _Nullable)objectForKeyedSubscript:(NSString * _Nonnull)key SWIFT_WARN_UNUSED_RESULT;
- (void)setObject:(id _Nullable)value forKeyedSubscript:(NSString * _Nonnull)key;
/// :nodoc:
- (id _Nullable)valueForUndefinedKey:(NSString * _Nonnull)key SWIFT_WARN_UNUSED_RESULT;
/// :nodoc:
- (void)setValue:(id _Nullable)value forUndefinedKey:(NSString * _Nonnull)key;
/// :nodoc:
+ (BOOL)shouldIncludeInDefaultSchema SWIFT_WARN_UNUSED_RESULT;
+ (RLMObjectSchema * _Nullable)sharedSchema SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end















@class NSDate;

/// A 12-byte (probably) unique object identifier.
/// ObjectIds are similar to a GUID or a UUID, and can be used to uniquely identify objects without a centralized ID generator. An ObjectID consists of:
/// <ol>
///   <li>
///     A 4 byte timestamp measuring the creation time of the ObjectId in seconds since the Unix epoch.
///   </li>
///   <li>
///     A 5 byte random value
///   </li>
///   <li>
///     A 3 byte counter, initialized to a random value.
///   </li>
/// </ol>
/// ObjectIds are intended to be fast to generate. Sorting by an ObjectId field will typically result in the objects being sorted in creation order.
SWIFT_CLASS_NAMED("ObjectId")
@interface RealmSwiftObjectId : RLMObjectId
/// Creates a new zero-initialized ObjectId.
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
/// Creates a new randomly-initialized ObjectId.
+ (RealmSwiftObjectId * _Nonnull)objectId SWIFT_WARN_UNUSED_RESULT;
/// Creates a new ObjectId from the given 24-byte hexadecimal string.
/// Throws if the string is not 24 characters or contains any characters other than 0-9a-fA-F.
/// \param string The string to parse.
///
- (nullable instancetype)initWithString:(NSString * _Nonnull)string error:(NSError * _Nullable * _Nullable)error OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithTimestamp:(NSDate * _Nonnull)timestamp machineIdentifier:(int32_t)machineIdentifier processIdentifier:(int32_t)processIdentifier SWIFT_UNAVAILABLE;
@end






















































@class RLMProperty;

@interface RealmSwiftAsymmetricObject (SWIFT_EXTENSION(RealmSwift))
/// A human-readable description of the object.
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
/// WARNING: This is an internal helper method not intended for public use.
/// It is not considered part of the public API.
/// :nodoc:
+ (NSArray<RLMProperty *> * _Nonnull)_getProperties SWIFT_WARN_UNUSED_RESULT;
- (id _Nullable)objectForKeyedSubscript:(NSString * _Nonnull)key SWIFT_WARN_UNUSED_RESULT;
- (void)setObject:(id _Nullable)newValue forKeyedSubscript:(NSString * _Nonnull)key;
@end





@interface RealmSwiftEmbeddedObject (SWIFT_EXTENSION(RealmSwift))
/// :nodoc:
+ (BOOL)isEmbedded SWIFT_WARN_UNUSED_RESULT;
/// Indicates if the object can no longer be accessed because it is now invalid.
/// An object can no longer be accessed if the object has been deleted from the Realm that manages it, or if
/// <code>invalidate()</code> is called on that Realm.
@property (nonatomic, readonly, getter=isInvalidated) BOOL invalidated;
/// A human-readable description of the object.
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
/// WARNING: This is an internal helper method not intended for public use.
/// It is not considered part of the public API.
/// :nodoc:
+ (NSArray<RLMProperty *> * _Nonnull)_getProperties SWIFT_WARN_UNUSED_RESULT;
/// Override this method to specify the names of properties to ignore. These properties will not be managed by
/// the Realm that manages the object.
/// warning:
/// This function is only applicable to legacy property declarations
/// using <code>@objc</code>. When using <code>@Persisted</code>, any properties not
/// marked with <code>@Persisted</code> are automatically ignored.
///
/// returns:
/// An array of property names to ignore.
+ (NSArray<NSString *> * _Nonnull)ignoredProperties SWIFT_WARN_UNUSED_RESULT;
- (id _Nullable)objectForKeyedSubscript:(NSString * _Nonnull)key SWIFT_WARN_UNUSED_RESULT;
- (void)setObject:(id _Nullable)newValue forKeyedSubscript:(NSString * _Nonnull)key;
@end







@interface RealmSwiftObject (SWIFT_EXTENSION(RealmSwift))
/// Indicates if the object can no longer be accessed because it is now invalid.
/// An object can no longer be accessed if the object has been deleted from the Realm that manages it, or if
/// <code>invalidate()</code> is called on that Realm. This property is key-value observable.
@property (nonatomic, readonly, getter=isInvalidated) BOOL invalidated;
/// A human-readable description of the object.
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
/// WARNING: This is an internal helper method not intended for public use.
/// It is not considered part of the public API.
/// :nodoc:
+ (NSArray<RLMProperty *> * _Nonnull)_getProperties SWIFT_WARN_UNUSED_RESULT;
/// Override this method to specify the name of a property to be used as the primary key.
/// Only properties of types <code>String</code>, <code>Int</code>, <code>ObjectId</code> and <code>UUID</code> can be
/// designated as the primary key. Primary key properties enforce uniqueness
/// for each value whenever the property is set, which incurs minor overhead.
/// Indexes are created automatically for primary key properties.
/// warning:
/// This function is only applicable to legacy property declarations
/// using <code>@objc</code>. When using <code>@Persisted</code>, use
/// <code>@Persisted(primaryKey: true)</code> instead.
///
/// returns:
/// The name of the property designated as the primary key, or
/// <code>nil</code> if the model has no primary key.
+ (NSString * _Nullable)primaryKey SWIFT_WARN_UNUSED_RESULT;
/// Override this method to specify the names of properties to ignore. These
/// properties will not be managed by the Realm that manages the object.
/// warning:
/// This function is only applicable to legacy property declarations
/// using <code>@objc</code>. When using <code>@Persisted</code>, any properties not
/// marked with <code>@Persisted</code> are automatically ignored.
///
/// returns:
/// An array of property names to ignore.
+ (NSArray<NSString *> * _Nonnull)ignoredProperties SWIFT_WARN_UNUSED_RESULT;
/// Returns an array of property names for properties which should be indexed.
/// Only string, integer, boolean, <code>Date</code>, and <code>NSDate</code> properties are supported.
/// warning:
/// This function is only applicable to legacy property declarations
/// using <code>@objc</code>. When using <code>@Persisted</code>, use
/// <code>@Persisted(indexed: true)</code> instead.
///
/// returns:
/// An array of property names.
+ (NSArray<NSString *> * _Nonnull)indexedProperties SWIFT_WARN_UNUSED_RESULT;
- (id _Nullable)objectForKeyedSubscript:(NSString * _Nonnull)key SWIFT_WARN_UNUSED_RESULT;
- (void)setObject:(id _Nullable)newValue forKeyedSubscript:(NSString * _Nonnull)key;
@end


SWIFT_CLASS_NAMED("SwiftUIKVO") SWIFT_AVAILABILITY(watchos,introduced=6.0) SWIFT_AVAILABILITY(tvos,introduced=13.0) SWIFT_AVAILABILITY(macos,introduced=10.15) SWIFT_AVAILABILITY(ios,introduced=13.0)
@interface RLMSwiftUIKVO : NSObject
- (void)observeValueForKeyPath:(NSString * _Nullable)keyPath ofObject:(id _Nullable)object change:(NSDictionary<NSKeyValueChangeKey, id> * _Nullable)change context:(void * _Nullable)context;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_AVAILABILITY(watchos,introduced=6.0) SWIFT_AVAILABILITY(tvos,introduced=13.0) SWIFT_AVAILABILITY(macos,introduced=10.15) SWIFT_AVAILABILITY(ios,introduced=13.0)
@interface RLMSwiftUIKVO (SWIFT_EXTENSION(RealmSwift))
+ (BOOL)removeObserversFromObject:(NSObject * _Nonnull)object SWIFT_WARN_UNUSED_RESULT;
+ (void)addObserversToObject:(NSObject * _Nonnull)object;
@end

#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
