#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Reflection/ConstructorInfo.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Object; }
namespace System { class RuntimeType; }
namespace System { class String; }
namespace System::Reflection { class Module; }
namespace System::Reflection { class RuntimeModule; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_METHOD_4_03C552B0B1441536_OFFSET UNITYSDK_OFFSET(0x19B02360)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_METHOD_4_1ADF6331E3555071_OFFSET UNITYSDK_OFFSET(0x19B021D0)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_METHOD_4_1EF4E65F6B2A1E1A_OFFSET UNITYSDK_OFFSET(0x19B020D0)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_METHOD_4_22F30986E4857A10_OFFSET UNITYSDK_OFFSET(0x19B02370)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_METHOD_4_29BD07D5A434EB62_OFFSET UNITYSDK_OFFSET(0x19B02230)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x19B024D0)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_METHOD_4_8A994390C9B757B3_OFFSET UNITYSDK_OFFSET(0x19B021E0)
#define SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_METHOD_4_C1E3936BB7D482DF_OFFSET UNITYSDK_OFFSET(0x19B02140)

namespace System::Reflection
{
	inline static constexpr unsigned int RuntimeConstructorInfo_TypeDefinitionIndex = 594;

	class RuntimeConstructorInfo : public ::System::Reflection::ConstructorInfo
	{
	public:
		::System::Void Method_4_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_METHOD_4_832295EC279E5994_OFFSET))(this);
		}

		::System::Reflection::Module* Method_4_1EF4E65F6B2A1E1A()
		{
			return ((::System::Reflection::Module*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_METHOD_4_1EF4E65F6B2A1E1A_OFFSET))(this);
		}

		::System::Reflection::RuntimeModule* Method_4_C1E3936BB7D482DF()
		{
			return ((::System::Reflection::RuntimeModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_METHOD_4_C1E3936BB7D482DF_OFFSET))(this);
		}

		::System::Reflection::BindingFlags Method_4_1ADF6331E3555071()
		{
			return ((::System::Reflection::BindingFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_METHOD_4_1ADF6331E3555071_OFFSET))(this);
		}

		::System::RuntimeType* Method_4_8A994390C9B757B3()
		{
			return ((::System::RuntimeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_METHOD_4_8A994390C9B757B3_OFFSET))(this);
		}

		::System::Void Method_4_29BD07D5A434EB62(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_METHOD_4_29BD07D5A434EB62_OFFSET))(this, info, context);
		}

		::System::String* Method_4_03C552B0B1441536()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_METHOD_4_03C552B0B1441536_OFFSET))(this);
		}

		::System::Void Method_4_22F30986E4857A10(::System::Object* target, ::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMECONSTRUCTORINFO_METHOD_4_22F30986E4857A10_OFFSET))(this, target, info, context);
		}
	};
}
