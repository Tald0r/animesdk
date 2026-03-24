#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/MethodInfo.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Delegate; }
namespace System { class Object; }
namespace System { class RuntimeType; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class Module; }
namespace System::Reflection { class RuntimeModule; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x19DD1C10)
#define SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_4_8A994390C9B757B3_OFFSET UNITYSDK_OFFSET(0x19DD17C0)
#define SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_4_90193073F6F9E578_1_OFFSET UNITYSDK_OFFSET(0x19DD1BB0)
#define SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_4_90193073F6F9E578_OFFSET UNITYSDK_OFFSET(0x19DD1970)
#define SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_4_971AEAC482F76A67_OFFSET UNITYSDK_OFFSET(0x19DD19D0)
#define SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_4_A859940E05B94091_OFFSET UNITYSDK_OFFSET(0x19DD1700)
#define SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_4_CF9893EBF01B2754_OFFSET UNITYSDK_OFFSET(0x19DD1760)
#define SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_4_D8261B12A3259C12_OFFSET UNITYSDK_OFFSET(0x19DD1940)
#define SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_4_DBAE1F6BD594D6F1_OFFSET UNITYSDK_OFFSET(0x19DD1810)
#define SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_4_F463834B57D971BE_OFFSET UNITYSDK_OFFSET(0x19DD1920)

namespace System::Reflection
{
	inline static constexpr unsigned int RuntimeMethodInfo_TypeDefinitionIndex = 592;

	class RuntimeMethodInfo : public ::System::Reflection::MethodInfo
	{
	public:
		::System::Void Method_4_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_4_832295EC279E5994_OFFSET))(this);
		}

		::System::Reflection::Module* Method_4_A859940E05B94091()
		{
			return ((::System::Reflection::Module*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_4_A859940E05B94091_OFFSET))(this);
		}

		::System::RuntimeType* Method_4_8A994390C9B757B3()
		{
			return ((::System::RuntimeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_4_8A994390C9B757B3_OFFSET))(this);
		}

		::System::String* Method_4_DBAE1F6BD594D6F1(::System::Boolean serialization)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_4_DBAE1F6BD594D6F1_OFFSET))(this, serialization);
		}

		::System::Delegate* Method_4_F463834B57D971BE(::System::Type* delegateType)
		{
			return ((::System::Delegate*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_4_F463834B57D971BE_OFFSET))(this, delegateType);
		}

		::System::Delegate* Method_4_D8261B12A3259C12(::System::Type* delegateType, ::System::Object* target)
		{
			return ((::System::Delegate*(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_4_D8261B12A3259C12_OFFSET))(this, delegateType, target);
		}

		::System::String* Method_4_90193073F6F9E578()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_4_90193073F6F9E578_OFFSET))(this);
		}

		::System::Reflection::RuntimeModule* Method_4_CF9893EBF01B2754()
		{
			return ((::System::Reflection::RuntimeModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_4_CF9893EBF01B2754_OFFSET))(this);
		}

		::System::Void Method_4_971AEAC482F76A67(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_4_971AEAC482F76A67_OFFSET))(this, info, context);
		}

		::System::String* Method_4_90193073F6F9E578_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_4_90193073F6F9E578_1_OFFSET))(this);
		}
	};
}
