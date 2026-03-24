#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/RuntimeParameterInfo.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class ParameterInfo; }
namespace System::Runtime::InteropServices { class MarshalAsAttribute; }

#define SYSTEM_REFLECTION_MONOPARAMETERINFO_METHOD_3_0C0D1EC816232808_OFFSET UNITYSDK_OFFSET(0x1900A810)
#define SYSTEM_REFLECTION_MONOPARAMETERINFO_METHOD_3_6148F4753B6872B6_OFFSET UNITYSDK_OFFSET(0x1900AA30)
#define SYSTEM_REFLECTION_MONOPARAMETERINFO_METHOD_3_ACB6C6E15D765345_OFFSET UNITYSDK_OFFSET(0x1900A840)
#define SYSTEM_REFLECTION_MONOPARAMETERINFO_METHOD_3_C0B669C1C81DA065_OFFSET UNITYSDK_OFFSET(0x1900AA40)
#define SYSTEM_REFLECTION_MONOPARAMETERINFO_METHOD_3_D0751B0BE077AEC4_OFFSET UNITYSDK_OFFSET(0x1900A7E0)
#define SYSTEM_REFLECTION_MONOPARAMETERINFO_METHOD_3_D2D7B48E5CB284C7_OFFSET UNITYSDK_OFFSET(0x1900AA50)

namespace System::Reflection
{
	inline static constexpr unsigned int MonoParameterInfo_TypeDefinitionIndex = 599;

	class MonoParameterInfo : public ::System::Reflection::RuntimeParameterInfo
	{
	public:
		::System::Void Method_3_D0751B0BE077AEC4(::System::Reflection::ParameterInfo* pinfo, ::System::Reflection::MemberInfo* member)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::ParameterInfo*, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPARAMETERINFO_METHOD_3_D0751B0BE077AEC4_OFFSET))(this, pinfo, member);
		}

		::System::Void Method_3_0C0D1EC816232808(::System::Type* type, ::System::Reflection::MemberInfo* member, ::System::Runtime::InteropServices::MarshalAsAttribute* marshalAs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Reflection::MemberInfo*, ::System::Runtime::InteropServices::MarshalAsAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPARAMETERINFO_METHOD_3_0C0D1EC816232808_OFFSET))(this, type, member, marshalAs);
		}

		::System::Object* Method_3_ACB6C6E15D765345()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPARAMETERINFO_METHOD_3_ACB6C6E15D765345_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* Method_3_C0B669C1C81DA065(::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPARAMETERINFO_METHOD_3_C0B669C1C81DA065_OFFSET))(this, inherit);
		}

		::Il2CppArray<::System::Object*>* Method_3_6148F4753B6872B6(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPARAMETERINFO_METHOD_3_6148F4753B6872B6_OFFSET))(this, attributeType, inherit);
		}

		::System::Boolean Method_3_D2D7B48E5CB284C7(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPARAMETERINFO_METHOD_3_D2D7B48E5CB284C7_OFFSET))(this, attributeType, inherit);
		}
	};
}
