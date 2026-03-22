#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf::Reflection { class EnumDescriptorProto; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B10D860)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B10D8A0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO___C___CCTOR_B__34_0_OFFSET UNITYSDK_OFFSET(0x1B10D8B0)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int EnumDescriptorProto___c_TypeDefinitionIndex = 24681;

	class EnumDescriptorProto___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::Reflection::EnumDescriptorProto___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Protobuf::Reflection::EnumDescriptorProto___c**)Il2CppClass::FromTypeDefinitionIndex(EnumDescriptorProto___c_TypeDefinitionIndex)->GetStaticField(0x1DB60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO___C__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::EnumDescriptorProto* __cctor_b__34_0()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::EnumDescriptorProto*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO___C___CCTOR_B__34_0_OFFSET))(this);
		}
	};
}
