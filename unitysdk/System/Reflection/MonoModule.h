#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Reflection/RuntimeModule.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class Assembly; }
namespace System::Reflection { class RuntimeAssembly; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_REFLECTION_MONOMODULE_METHOD_3_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x1860AFA0)
#define SYSTEM_REFLECTION_MONOMODULE_METHOD_3_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1860AF50)
#define SYSTEM_REFLECTION_MONOMODULE_METHOD_3_6148F4753B6872B6_OFFSET UNITYSDK_OFFSET(0x1860AFD0)
#define SYSTEM_REFLECTION_MONOMODULE_METHOD_3_A27AD73ED4EC8EA1_OFFSET UNITYSDK_OFFSET(0x1860AFF0)
#define SYSTEM_REFLECTION_MONOMODULE_METHOD_3_C0B669C1C81DA065_OFFSET UNITYSDK_OFFSET(0x1860AFC0)
#define SYSTEM_REFLECTION_MONOMODULE_METHOD_3_C4956DB9C5EDE438_OFFSET UNITYSDK_OFFSET(0x1860AF40)
#define SYSTEM_REFLECTION_MONOMODULE_METHOD_3_D2D7B48E5CB284C7_OFFSET UNITYSDK_OFFSET(0x1860AFE0)
#define SYSTEM_REFLECTION_MONOMODULE_METHOD_3_EFDFDE54D3FC00B2_OFFSET UNITYSDK_OFFSET(0x1860B0B0)
#define SYSTEM_REFLECTION_MONOMODULE_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1860AFB0)
#define SYSTEM_REFLECTION_MONOMODULE_METHOD_3_F4779E52B1AE4857_OFFSET UNITYSDK_OFFSET(0x1860AF60)
#define SYSTEM_REFLECTION_MONOMODULE_METHOD_3_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x1860B100)

namespace System::Reflection
{
	inline static constexpr unsigned int MonoModule_TypeDefinitionIndex = 597;

	class MonoModule : public ::System::Reflection::RuntimeModule
	{
	public:
		::System::Void Method_3_F8C7231308CD2C82()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMODULE_METHOD_3_F8C7231308CD2C82_OFFSET))(this);
		}

		::System::Reflection::Assembly* Method_3_C4956DB9C5EDE438()
		{
			return ((::System::Reflection::Assembly*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMODULE_METHOD_3_C4956DB9C5EDE438_OFFSET))(this);
		}

		::System::String* Method_3_126AB3935214AA22()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMODULE_METHOD_3_126AB3935214AA22_OFFSET))(this);
		}

		::System::Guid Method_3_F4779E52B1AE4857()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMODULE_METHOD_3_F4779E52B1AE4857_OFFSET))(this);
		}

		::System::String* Method_3_126AB3935214AA22_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMODULE_METHOD_3_126AB3935214AA22_1_OFFSET))(this);
		}

		::System::Boolean Method_3_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMODULE_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* Method_3_C0B669C1C81DA065(::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMODULE_METHOD_3_C0B669C1C81DA065_OFFSET))(this, inherit);
		}

		::Il2CppArray<::System::Object*>* Method_3_6148F4753B6872B6(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMODULE_METHOD_3_6148F4753B6872B6_OFFSET))(this, attributeType, inherit);
		}

		::System::Boolean Method_3_D2D7B48E5CB284C7(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMODULE_METHOD_3_D2D7B48E5CB284C7_OFFSET))(this, attributeType, inherit);
		}

		::System::Void Method_3_A27AD73ED4EC8EA1(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMODULE_METHOD_3_A27AD73ED4EC8EA1_OFFSET))(this, info, context);
		}

		::System::Reflection::RuntimeAssembly* Method_3_EFDFDE54D3FC00B2()
		{
			return ((::System::Reflection::RuntimeAssembly*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMODULE_METHOD_3_EFDFDE54D3FC00B2_OFFSET))(this);
		}
	};
}
