#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/ReadType.h"
#include "unitysdk/Newtonsoft/Json/Serialization/JsonContractType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace Newtonsoft::Json { class JsonConverter; }
namespace Newtonsoft::Json::Serialization { class ErrorContext; }
namespace Newtonsoft::Json::Serialization { class SerializationCallback; }
namespace Newtonsoft::Json::Serialization { class SerializationErrorCallback; }
namespace System { class Type; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class MethodInfo; }

#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_CREATESERIALIZATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A988DC0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_CREATESERIALIZATIONERRORCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A98A480)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_CONVERTER_OFFSET UNITYSDK_OFFSET(0x1A988520)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_CREATEDTYPE_OFFSET UNITYSDK_OFFSET(0x1A988420)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_DEFAULTCREATORNONPUBLIC_OFFSET UNITYSDK_OFFSET(0x1A98A520)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_DEFAULTCREATOR_OFFSET UNITYSDK_OFFSET(0x1A98A500)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_INTERNALCONVERTER_OFFSET UNITYSDK_OFFSET(0x1A988540)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_ISREFERENCE_OFFSET UNITYSDK_OFFSET(0x1A988500)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_ONDESERIALIZEDCALLBACKS_OFFSET UNITYSDK_OFFSET(0x1A988560)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_ONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x1A988830)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_ONDESERIALIZINGCALLBACKS_OFFSET UNITYSDK_OFFSET(0x1A9885F0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_ONDESERIALIZING_OFFSET UNITYSDK_OFFSET(0x1A988E40)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_ONERRORCALLBACKS_OFFSET UNITYSDK_OFFSET(0x1A9887A0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_ONERROR_OFFSET UNITYSDK_OFFSET(0x1A989EF0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_ONSERIALIZEDCALLBACKS_OFFSET UNITYSDK_OFFSET(0x1A988680)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_ONSERIALIZED_OFFSET UNITYSDK_OFFSET(0x1A9893D0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_ONSERIALIZINGCALLBACKS_OFFSET UNITYSDK_OFFSET(0x1A988710)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_ONSERIALIZING_OFFSET UNITYSDK_OFFSET(0x1A989960)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_UNDERLYINGTYPE_OFFSET UNITYSDK_OFFSET(0x1A988400)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_INVOKEONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x1A98B150)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_INVOKEONDESERIALIZING_OFFSET UNITYSDK_OFFSET(0x1A98AE20)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_INVOKEONERROR_OFFSET UNITYSDK_OFFSET(0x1A98B270)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_INVOKEONSERIALIZED_OFFSET UNITYSDK_OFFSET(0x1A98AAF0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_INVOKEONSERIALIZING_OFFSET UNITYSDK_OFFSET(0x1A98A7C0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_CONVERTER_OFFSET UNITYSDK_OFFSET(0x1A988530)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_CREATEDTYPE_OFFSET UNITYSDK_OFFSET(0x1A988430)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_DEFAULTCREATORNONPUBLIC_OFFSET UNITYSDK_OFFSET(0x1A98A530)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_DEFAULTCREATOR_OFFSET UNITYSDK_OFFSET(0x1A98A510)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_INTERNALCONVERTER_OFFSET UNITYSDK_OFFSET(0x1A988550)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_ISREFERENCE_OFFSET UNITYSDK_OFFSET(0x1A988510)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_ONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x1A988AC0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_ONDESERIALIZING_OFFSET UNITYSDK_OFFSET(0x1A9890D0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_ONERROR_OFFSET UNITYSDK_OFFSET(0x1A98A180)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_ONSERIALIZED_OFFSET UNITYSDK_OFFSET(0x1A989660)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_ONSERIALIZING_OFFSET UNITYSDK_OFFSET(0x1A989BF0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_UNDERLYINGTYPE_OFFSET UNITYSDK_OFFSET(0x1A988410)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A98A540)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonContract_TypeDefinitionIndex = 6989;

	class JsonContract : public ::System::Object
	{
	public:
		::Newtonsoft::Json::JsonConverter* _InternalConverter_k__BackingField; // 0x10
		::System::Type* _UnderlyingType_k__BackingField; // 0x18
		::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* _onSerializedCallbacks; // 0x20
		::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* _onSerializingCallbacks; // 0x28
		::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* _onDeserializedCallbacks; // 0x30
		::System::Func_1<::System::Object*>* _DefaultCreator_k__BackingField; // 0x38
		::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* _onDeserializingCallbacks; // 0x40
		::System::Type* _createdType; // 0x48
		::System::Type* NonNullableUnderlyingType; // 0x50
		::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationErrorCallback*>* _onErrorCallbacks; // 0x58
		::Newtonsoft::Json::JsonConverter* _Converter_k__BackingField; // 0x60
		::Newtonsoft::Json::Serialization::JsonContractType ContractType; // 0x68
		::System::Boolean IsReadOnlyOrFixedSize; // 0x6C
		::System::Boolean IsSealed; // 0x6D
		::System::Boolean _DefaultCreatorNonPublic_k__BackingField; // 0x6E
		::System::Boolean IsConvertable; // 0x6F
		::Newtonsoft::Json::ReadType InternalReadType; // 0x70
		::System::Nullable_1<::System::Boolean> _IsReference_k__BackingField; // 0x74
		::System::Boolean IsNullable; // 0x76
		::System::Boolean IsEnum; // 0x77
		::System::Boolean IsInstantiable; // 0x78

		::System::Void _ctor(::System::Type* underlyingType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT__CTOR_OFFSET))(this, underlyingType);
		}

		::System::Type* get_UnderlyingType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_UNDERLYINGTYPE_OFFSET))(this);
		}

		::System::Void set_UnderlyingType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_UNDERLYINGTYPE_OFFSET))(this, value);
		}

		::System::Type* get_CreatedType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_CREATEDTYPE_OFFSET))(this);
		}

		::System::Void set_CreatedType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_CREATEDTYPE_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::Boolean> get_IsReference()
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_ISREFERENCE_OFFSET))(this);
		}

		::System::Void set_IsReference(::System::Nullable_1<::System::Boolean> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_ISREFERENCE_OFFSET))(this, value);
		}

		::Newtonsoft::Json::JsonConverter* get_Converter()
		{
			return ((::Newtonsoft::Json::JsonConverter*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_CONVERTER_OFFSET))(this);
		}

		::System::Void set_Converter(::Newtonsoft::Json::JsonConverter* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonConverter*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_CONVERTER_OFFSET))(this, value);
		}

		::Newtonsoft::Json::JsonConverter* get_InternalConverter()
		{
			return ((::Newtonsoft::Json::JsonConverter*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_INTERNALCONVERTER_OFFSET))(this);
		}

		::System::Void set_InternalConverter(::Newtonsoft::Json::JsonConverter* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonConverter*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_INTERNALCONVERTER_OFFSET))(this, value);
		}

		::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* get_OnDeserializedCallbacks()
		{
			return ((::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_ONDESERIALIZEDCALLBACKS_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* get_OnDeserializingCallbacks()
		{
			return ((::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_ONDESERIALIZINGCALLBACKS_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* get_OnSerializedCallbacks()
		{
			return ((::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_ONSERIALIZEDCALLBACKS_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* get_OnSerializingCallbacks()
		{
			return ((::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_ONSERIALIZINGCALLBACKS_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationErrorCallback*>* get_OnErrorCallbacks()
		{
			return ((::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationErrorCallback*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_ONERRORCALLBACKS_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* get_OnDeserialized()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_ONDESERIALIZED_OFFSET))(this);
		}

		::System::Void set_OnDeserialized(::System::Reflection::MethodInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_ONDESERIALIZED_OFFSET))(this, value);
		}

		::System::Reflection::MethodInfo* get_OnDeserializing()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_ONDESERIALIZING_OFFSET))(this);
		}

		::System::Void set_OnDeserializing(::System::Reflection::MethodInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_ONDESERIALIZING_OFFSET))(this, value);
		}

		::System::Reflection::MethodInfo* get_OnSerialized()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_ONSERIALIZED_OFFSET))(this);
		}

		::System::Void set_OnSerialized(::System::Reflection::MethodInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_ONSERIALIZED_OFFSET))(this, value);
		}

		::System::Reflection::MethodInfo* get_OnSerializing()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_ONSERIALIZING_OFFSET))(this);
		}

		::System::Void set_OnSerializing(::System::Reflection::MethodInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_ONSERIALIZING_OFFSET))(this, value);
		}

		::System::Reflection::MethodInfo* get_OnError()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_ONERROR_OFFSET))(this);
		}

		::System::Void set_OnError(::System::Reflection::MethodInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_ONERROR_OFFSET))(this, value);
		}

		::System::Func_1<::System::Object*>* get_DefaultCreator()
		{
			return ((::System::Func_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_DEFAULTCREATOR_OFFSET))(this);
		}

		::System::Void set_DefaultCreator(::System::Func_1<::System::Object*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_DEFAULTCREATOR_OFFSET))(this, value);
		}

		::System::Boolean get_DefaultCreatorNonPublic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_GET_DEFAULTCREATORNONPUBLIC_OFFSET))(this);
		}

		::System::Void set_DefaultCreatorNonPublic(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_SET_DEFAULTCREATORNONPUBLIC_OFFSET))(this, value);
		}

		::System::Void InvokeOnSerializing(::System::Object* o, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_INVOKEONSERIALIZING_OFFSET))(this, o, context);
		}

		::System::Void InvokeOnSerialized(::System::Object* o, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_INVOKEONSERIALIZED_OFFSET))(this, o, context);
		}

		::System::Void InvokeOnDeserializing(::System::Object* o, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_INVOKEONDESERIALIZING_OFFSET))(this, o, context);
		}

		::System::Void InvokeOnDeserialized(::System::Object* o, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_INVOKEONDESERIALIZED_OFFSET))(this, o, context);
		}

		::System::Void InvokeOnError(::System::Object* o, ::System::Runtime::Serialization::StreamingContext context, ::Newtonsoft::Json::Serialization::ErrorContext* errorContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::StreamingContext, ::Newtonsoft::Json::Serialization::ErrorContext*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_INVOKEONERROR_OFFSET))(this, o, context, errorContext);
		}

		static ::Newtonsoft::Json::Serialization::SerializationCallback* CreateSerializationCallback(::System::Reflection::MethodInfo* callbackMethodInfo)
		{
			return ((::Newtonsoft::Json::Serialization::SerializationCallback*(*)(::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_CREATESERIALIZATIONCALLBACK_OFFSET))(callbackMethodInfo);
		}

		static ::Newtonsoft::Json::Serialization::SerializationErrorCallback* CreateSerializationErrorCallback(::System::Reflection::MethodInfo* callbackMethodInfo)
		{
			return ((::Newtonsoft::Json::Serialization::SerializationErrorCallback*(*)(::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTRACT_CREATESERIALIZATIONERRORCALLBACK_OFFSET))(callbackMethodInfo);
		}
	};
}
