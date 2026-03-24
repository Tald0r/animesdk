#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/EventInfo.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class RuntimeType; }
namespace System::Reflection { class Module; }
namespace System::Reflection { class RuntimeModule; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_REFLECTION_RUNTIMEEVENTINFO_METHOD_3_561D63ABCD99BE10_OFFSET UNITYSDK_OFFSET(0x19DD15D0)
#define SYSTEM_REFLECTION_RUNTIMEEVENTINFO_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x19DD16F0)
#define SYSTEM_REFLECTION_RUNTIMEEVENTINFO_METHOD_3_8A994390C9B757B3_1_OFFSET UNITYSDK_OFFSET(0x19DD1580)
#define SYSTEM_REFLECTION_RUNTIMEEVENTINFO_METHOD_3_8A994390C9B757B3_OFFSET UNITYSDK_OFFSET(0x19DD1530)
#define SYSTEM_REFLECTION_RUNTIMEEVENTINFO_METHOD_3_A859940E05B94091_OFFSET UNITYSDK_OFFSET(0x19DD1470)
#define SYSTEM_REFLECTION_RUNTIMEEVENTINFO_METHOD_3_CF9893EBF01B2754_OFFSET UNITYSDK_OFFSET(0x19DD14D0)

namespace System::Reflection
{
	inline static constexpr unsigned int RuntimeEventInfo_TypeDefinitionIndex = 586;

	class RuntimeEventInfo : public ::System::Reflection::EventInfo
	{
	public:
		::System::Void Method_3_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEEVENTINFO_METHOD_3_832295EC279E5994_OFFSET))(this);
		}

		::System::Reflection::Module* Method_3_A859940E05B94091()
		{
			return ((::System::Reflection::Module*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEEVENTINFO_METHOD_3_A859940E05B94091_OFFSET))(this);
		}

		::System::RuntimeType* Method_3_8A994390C9B757B3()
		{
			return ((::System::RuntimeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEEVENTINFO_METHOD_3_8A994390C9B757B3_OFFSET))(this);
		}

		::System::RuntimeType* Method_3_8A994390C9B757B3_1()
		{
			return ((::System::RuntimeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEEVENTINFO_METHOD_3_8A994390C9B757B3_1_OFFSET))(this);
		}

		::System::Reflection::RuntimeModule* Method_3_CF9893EBF01B2754()
		{
			return ((::System::Reflection::RuntimeModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEEVENTINFO_METHOD_3_CF9893EBF01B2754_OFFSET))(this);
		}

		::System::Void Method_3_561D63ABCD99BE10(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEEVENTINFO_METHOD_3_561D63ABCD99BE10_OFFSET))(this, info, context);
		}
	};
}
