#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace Sirenix::Serialization { class IExternalGuidReferenceResolver; }
namespace Sirenix::Serialization { class IExternalIndexReferenceResolver; }
namespace Sirenix::Serialization { class IExternalStringReferenceResolver; }
namespace Sirenix::Serialization { class SerializationConfig; }
namespace Sirenix::Serialization { class TwoWaySerializationBinder; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::Serialization { class FormatterConverter; }
namespace System::Runtime::Serialization { class IFormatterConverter; }

#define SIRENIX_SERIALIZATION_DESERIALIZATIONCONTEXT_GETEXTERNALOBJECT_1_OFFSET UNITYSDK_OFFSET(0x1ACB1410)
#define SIRENIX_SERIALIZATION_DESERIALIZATIONCONTEXT_GETEXTERNALOBJECT_2_OFFSET UNITYSDK_OFFSET(0x1ACB16F0)
#define SIRENIX_SERIALIZATION_DESERIALIZATIONCONTEXT_GETEXTERNALOBJECT_OFFSET UNITYSDK_OFFSET(0x1ACB1330)
#define SIRENIX_SERIALIZATION_DESERIALIZATIONCONTEXT_GETINTERNALREFERENCE_OFFSET UNITYSDK_OFFSET(0x1ACB12F0)
#define SIRENIX_SERIALIZATION_DESERIALIZATIONCONTEXT_GET_BINDER_OFFSET UNITYSDK_OFFSET(0x1ACAE6F0)
#define SIRENIX_SERIALIZATION_DESERIALIZATIONCONTEXT_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1ACA7FE0)
#define SIRENIX_SERIALIZATION_DESERIALIZATIONCONTEXT_GET_FORMATTERCONVERTER_OFFSET UNITYSDK_OFFSET(0x1ACB1250)
#define SIRENIX_SERIALIZATION_DESERIALIZATIONCONTEXT_GET_GUIDREFERENCERESOLVER_OFFSET UNITYSDK_OFFSET(0x1ACB1200)
#define SIRENIX_SERIALIZATION_DESERIALIZATIONCONTEXT_GET_INDEXREFERENCERESOLVER_OFFSET UNITYSDK_OFFSET(0x1ACB1220)
#define SIRENIX_SERIALIZATION_DESERIALIZATIONCONTEXT_GET_STREAMINGCONTEXT_OFFSET UNITYSDK_OFFSET(0x1ACB1240)
#define SIRENIX_SERIALIZATION_DESERIALIZATIONCONTEXT_GET_STRINGREFERENCERESOLVER_OFFSET UNITYSDK_OFFSET(0x1ACB11E0)
#define SIRENIX_SERIALIZATION_DESERIALIZATIONCONTEXT_REGISTERINTERNALREFERENCE_OFFSET UNITYSDK_OFFSET(0x1ACB1270)
#define SIRENIX_SERIALIZATION_DESERIALIZATIONCONTEXT_RESET_OFFSET UNITYSDK_OFFSET(0x1ACB1170)
#define SIRENIX_SERIALIZATION_DESERIALIZATIONCONTEXT_SET_BINDER_OFFSET UNITYSDK_OFFSET(0x1ACB11D0)
#define SIRENIX_SERIALIZATION_DESERIALIZATIONCONTEXT_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1ACB1260)
#define SIRENIX_SERIALIZATION_DESERIALIZATIONCONTEXT_SET_GUIDREFERENCERESOLVER_OFFSET UNITYSDK_OFFSET(0x1ACB1210)
#define SIRENIX_SERIALIZATION_DESERIALIZATIONCONTEXT_SET_INDEXREFERENCERESOLVER_OFFSET UNITYSDK_OFFSET(0x1ACB1230)
#define SIRENIX_SERIALIZATION_DESERIALIZATIONCONTEXT_SET_STRINGREFERENCERESOLVER_OFFSET UNITYSDK_OFFSET(0x1ACB11F0)
#define SIRENIX_SERIALIZATION_DESERIALIZATIONCONTEXT_SIRENIX_SERIALIZATION_UTILITIES_ICACHENOTIFICATIONRECEIVER_ONCLAIMED_OFFSET UNITYSDK_OFFSET(0x1ACB19F0)
#define SIRENIX_SERIALIZATION_DESERIALIZATIONCONTEXT_SIRENIX_SERIALIZATION_UTILITIES_ICACHENOTIFICATIONRECEIVER_ONFREED_OFFSET UNITYSDK_OFFSET(0x1ACB1990)
#define SIRENIX_SERIALIZATION_DESERIALIZATIONCONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ACB1110)
#define SIRENIX_SERIALIZATION_DESERIALIZATIONCONTEXT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1ACB1150)
#define SIRENIX_SERIALIZATION_DESERIALIZATIONCONTEXT__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1ACB0FE0)
#define SIRENIX_SERIALIZATION_DESERIALIZATIONCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACB0FA0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int DeserializationContext_TypeDefinitionIndex = 7370;

	class DeserializationContext : public ::System::Object
	{
	public:
		::System::Runtime::Serialization::StreamingContext streamingContext; // 0x10
		::System::Runtime::Serialization::IFormatterConverter* formatterConverter; // 0x20
		::Sirenix::Serialization::IExternalStringReferenceResolver* _StringReferenceResolver_k__BackingField; // 0x28
		::Sirenix::Serialization::TwoWaySerializationBinder* binder; // 0x30
		::Sirenix::Serialization::IExternalGuidReferenceResolver* _GuidReferenceResolver_k__BackingField; // 0x38
		::Sirenix::Serialization::IExternalIndexReferenceResolver* _IndexReferenceResolver_k__BackingField; // 0x40
		::System::Collections::Generic::List_1<::System::Object*>* internalIdReferenceMap; // 0x48
		::Sirenix::Serialization::SerializationConfig* config; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DESERIALIZATIONCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DESERIALIZATIONCONTEXT__CTOR_1_OFFSET))(this, context);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::FormatterConverter* formatterConverter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::FormatterConverter*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DESERIALIZATIONCONTEXT__CTOR_2_OFFSET))(this, formatterConverter);
		}

		::System::Void _ctor_3(::System::Runtime::Serialization::StreamingContext context, ::System::Runtime::Serialization::FormatterConverter* formatterConverter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext, ::System::Runtime::Serialization::FormatterConverter*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DESERIALIZATIONCONTEXT__CTOR_3_OFFSET))(this, context, formatterConverter);
		}

		::Sirenix::Serialization::TwoWaySerializationBinder* get_Binder()
		{
			return ((::Sirenix::Serialization::TwoWaySerializationBinder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DESERIALIZATIONCONTEXT_GET_BINDER_OFFSET))(this);
		}

		::System::Void set_Binder(::Sirenix::Serialization::TwoWaySerializationBinder* value)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::Serialization::TwoWaySerializationBinder*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DESERIALIZATIONCONTEXT_SET_BINDER_OFFSET))(this, value);
		}

		::Sirenix::Serialization::IExternalStringReferenceResolver* get_StringReferenceResolver()
		{
			return ((::Sirenix::Serialization::IExternalStringReferenceResolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DESERIALIZATIONCONTEXT_GET_STRINGREFERENCERESOLVER_OFFSET))(this);
		}

		::System::Void set_StringReferenceResolver(::Sirenix::Serialization::IExternalStringReferenceResolver* value)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::Serialization::IExternalStringReferenceResolver*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DESERIALIZATIONCONTEXT_SET_STRINGREFERENCERESOLVER_OFFSET))(this, value);
		}

		::Sirenix::Serialization::IExternalGuidReferenceResolver* get_GuidReferenceResolver()
		{
			return ((::Sirenix::Serialization::IExternalGuidReferenceResolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DESERIALIZATIONCONTEXT_GET_GUIDREFERENCERESOLVER_OFFSET))(this);
		}

		::System::Void set_GuidReferenceResolver(::Sirenix::Serialization::IExternalGuidReferenceResolver* value)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::Serialization::IExternalGuidReferenceResolver*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DESERIALIZATIONCONTEXT_SET_GUIDREFERENCERESOLVER_OFFSET))(this, value);
		}

		::Sirenix::Serialization::IExternalIndexReferenceResolver* get_IndexReferenceResolver()
		{
			return ((::Sirenix::Serialization::IExternalIndexReferenceResolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DESERIALIZATIONCONTEXT_GET_INDEXREFERENCERESOLVER_OFFSET))(this);
		}

		::System::Void set_IndexReferenceResolver(::Sirenix::Serialization::IExternalIndexReferenceResolver* value)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::Serialization::IExternalIndexReferenceResolver*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DESERIALIZATIONCONTEXT_SET_INDEXREFERENCERESOLVER_OFFSET))(this, value);
		}

		::System::Runtime::Serialization::StreamingContext get_StreamingContext()
		{
			return ((::System::Runtime::Serialization::StreamingContext(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DESERIALIZATIONCONTEXT_GET_STREAMINGCONTEXT_OFFSET))(this);
		}

		::System::Runtime::Serialization::IFormatterConverter* get_FormatterConverter()
		{
			return ((::System::Runtime::Serialization::IFormatterConverter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DESERIALIZATIONCONTEXT_GET_FORMATTERCONVERTER_OFFSET))(this);
		}

		::Sirenix::Serialization::SerializationConfig* get_Config()
		{
			return ((::Sirenix::Serialization::SerializationConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DESERIALIZATIONCONTEXT_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::Sirenix::Serialization::SerializationConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::Serialization::SerializationConfig*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DESERIALIZATIONCONTEXT_SET_CONFIG_OFFSET))(this, value);
		}

		::System::Void RegisterInternalReference(::System::Int32 id, ::System::Object* reference)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DESERIALIZATIONCONTEXT_REGISTERINTERNALREFERENCE_OFFSET))(this, id, reference);
		}

		::System::Object* GetInternalReference(::System::Int32 id)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DESERIALIZATIONCONTEXT_GETINTERNALREFERENCE_OFFSET))(this, id);
		}

		::System::Object* GetExternalObject(::System::Int32 index)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DESERIALIZATIONCONTEXT_GETEXTERNALOBJECT_OFFSET))(this, index);
		}

		::System::Object* GetExternalObject_1(::System::Guid guid)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DESERIALIZATIONCONTEXT_GETEXTERNALOBJECT_1_OFFSET))(this, guid);
		}

		::System::Object* GetExternalObject_2(::System::String* id)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DESERIALIZATIONCONTEXT_GETEXTERNALOBJECT_2_OFFSET))(this, id);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DESERIALIZATIONCONTEXT_RESET_OFFSET))(this);
		}

		::System::Void Sirenix_Serialization_Utilities_ICacheNotificationReceiver_OnFreed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DESERIALIZATIONCONTEXT_SIRENIX_SERIALIZATION_UTILITIES_ICACHENOTIFICATIONRECEIVER_ONFREED_OFFSET))(this);
		}

		::System::Void Sirenix_Serialization_Utilities_ICacheNotificationReceiver_OnClaimed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DESERIALIZATIONCONTEXT_SIRENIX_SERIALIZATION_UTILITIES_ICACHENOTIFICATIONRECEIVER_ONCLAIMED_OFFSET))(this);
		}
	};
}
