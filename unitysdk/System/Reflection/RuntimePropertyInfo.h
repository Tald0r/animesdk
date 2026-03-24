#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/PropertyInfo.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class RuntimeType; }
namespace System { class String; }
namespace System::Reflection { class Module; }
namespace System::Reflection { class RuntimeModule; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_METHOD_3_29BD07D5A434EB62_OFFSET UNITYSDK_OFFSET(0x195AE330)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x195AE460)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_METHOD_3_8A994390C9B757B3_1_OFFSET UNITYSDK_OFFSET(0x195AE180)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_METHOD_3_8A994390C9B757B3_OFFSET UNITYSDK_OFFSET(0x195AE130)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_METHOD_3_A859940E05B94091_OFFSET UNITYSDK_OFFSET(0x195AE070)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_METHOD_3_C8EB1E28CB82693D_1_OFFSET UNITYSDK_OFFSET(0x195AE450)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_METHOD_3_C8EB1E28CB82693D_OFFSET UNITYSDK_OFFSET(0x195AE1D0)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_METHOD_3_CF9893EBF01B2754_OFFSET UNITYSDK_OFFSET(0x195AE0D0)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_METHOD_3_F8D72C4A2FD5DC9A_OFFSET UNITYSDK_OFFSET(0x195AE1E0)

namespace System::Reflection
{
	inline static constexpr unsigned int RuntimePropertyInfo_TypeDefinitionIndex = 602;

	class RuntimePropertyInfo : public ::System::Reflection::PropertyInfo
	{
	public:
		::System::Void Method_3_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_METHOD_3_832295EC279E5994_OFFSET))(this);
		}

		::System::Reflection::Module* Method_3_A859940E05B94091()
		{
			return ((::System::Reflection::Module*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_METHOD_3_A859940E05B94091_OFFSET))(this);
		}

		::System::RuntimeType* Method_3_8A994390C9B757B3()
		{
			return ((::System::RuntimeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_METHOD_3_8A994390C9B757B3_OFFSET))(this);
		}

		::System::RuntimeType* Method_3_8A994390C9B757B3_1()
		{
			return ((::System::RuntimeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_METHOD_3_8A994390C9B757B3_1_OFFSET))(this);
		}

		::System::Reflection::RuntimeModule* Method_3_CF9893EBF01B2754()
		{
			return ((::System::Reflection::RuntimeModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_METHOD_3_CF9893EBF01B2754_OFFSET))(this);
		}

		::System::String* Method_3_C8EB1E28CB82693D()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_METHOD_3_C8EB1E28CB82693D_OFFSET))(this);
		}

		::System::String* Method_3_F8D72C4A2FD5DC9A(::System::Boolean serialization)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_METHOD_3_F8D72C4A2FD5DC9A_OFFSET))(this, serialization);
		}

		::System::Void Method_3_29BD07D5A434EB62(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_METHOD_3_29BD07D5A434EB62_OFFSET))(this, info, context);
		}

		::System::String* Method_3_C8EB1E28CB82693D_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_METHOD_3_C8EB1E28CB82693D_1_OFFSET))(this);
		}
	};
}
