#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/RuntimeEventInfo.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Reflection { class CustomAttributeData; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_REFLECTION_MONOEVENT_METHOD_4_060E9816B24B7874_OFFSET UNITYSDK_OFFSET(0x19AD3330)
#define SYSTEM_REFLECTION_MONOEVENT_METHOD_4_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x19AD3300)
#define SYSTEM_REFLECTION_MONOEVENT_METHOD_4_1E8748D7A5EEF968_1_OFFSET UNITYSDK_OFFSET(0x19AD3230)
#define SYSTEM_REFLECTION_MONOEVENT_METHOD_4_1E8748D7A5EEF968_2_OFFSET UNITYSDK_OFFSET(0x19AD2E80)
#define SYSTEM_REFLECTION_MONOEVENT_METHOD_4_1E8748D7A5EEF968_OFFSET UNITYSDK_OFFSET(0x19AD2B50)
#define SYSTEM_REFLECTION_MONOEVENT_METHOD_4_6148F4753B6872B6_OFFSET UNITYSDK_OFFSET(0x19AD33B0)
#define SYSTEM_REFLECTION_MONOEVENT_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x19AD3440)
#define SYSTEM_REFLECTION_MONOEVENT_METHOD_4_A3C117624446E448_OFFSET UNITYSDK_OFFSET(0x19AD33C0)
#define SYSTEM_REFLECTION_MONOEVENT_METHOD_4_A99467CE9479C990_1_OFFSET UNITYSDK_OFFSET(0x19AD32D0)
#define SYSTEM_REFLECTION_MONOEVENT_METHOD_4_A99467CE9479C990_OFFSET UNITYSDK_OFFSET(0x19AD32A0)
#define SYSTEM_REFLECTION_MONOEVENT_METHOD_4_C0B669C1C81DA065_OFFSET UNITYSDK_OFFSET(0x19AD33A0)
#define SYSTEM_REFLECTION_MONOEVENT_METHOD_4_D2D7B48E5CB284C7_OFFSET UNITYSDK_OFFSET(0x19AD3390)

namespace System::Reflection
{
	inline static constexpr unsigned int MonoEvent_TypeDefinitionIndex = 587;

	class MonoEvent : public ::System::Reflection::RuntimeEventInfo
	{
	public:
		::System::IntPtr Field_4_0; // 0x18
		::System::IntPtr Field_4_1; // 0x20

		::System::Void Method_4_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOEVENT_METHOD_4_832295EC279E5994_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* Method_4_1E8748D7A5EEF968(::System::Boolean nonPublic)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOEVENT_METHOD_4_1E8748D7A5EEF968_OFFSET))(this, nonPublic);
		}

		::System::Reflection::MethodInfo* Method_4_1E8748D7A5EEF968_1(::System::Boolean nonPublic)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOEVENT_METHOD_4_1E8748D7A5EEF968_1_OFFSET))(this, nonPublic);
		}

		::System::Reflection::MethodInfo* Method_4_1E8748D7A5EEF968_2(::System::Boolean nonPublic)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOEVENT_METHOD_4_1E8748D7A5EEF968_2_OFFSET))(this, nonPublic);
		}

		::System::Type* Method_4_A99467CE9479C990()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOEVENT_METHOD_4_A99467CE9479C990_OFFSET))(this);
		}

		::System::Type* Method_4_A99467CE9479C990_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOEVENT_METHOD_4_A99467CE9479C990_1_OFFSET))(this);
		}

		::System::String* Method_4_126AB3935214AA22()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOEVENT_METHOD_4_126AB3935214AA22_OFFSET))(this);
		}

		::System::String* Method_4_060E9816B24B7874()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOEVENT_METHOD_4_060E9816B24B7874_OFFSET))(this);
		}

		::System::Boolean Method_4_D2D7B48E5CB284C7(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOEVENT_METHOD_4_D2D7B48E5CB284C7_OFFSET))(this, attributeType, inherit);
		}

		::Il2CppArray<::System::Object*>* Method_4_C0B669C1C81DA065(::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOEVENT_METHOD_4_C0B669C1C81DA065_OFFSET))(this, inherit);
		}

		::Il2CppArray<::System::Object*>* Method_4_6148F4753B6872B6(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOEVENT_METHOD_4_6148F4753B6872B6_OFFSET))(this, attributeType, inherit);
		}

		::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* Method_4_A3C117624446E448()
		{
			return ((::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOEVENT_METHOD_4_A3C117624446E448_OFFSET))(this);
		}
	};
}
