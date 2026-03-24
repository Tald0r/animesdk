#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }
namespace System { class Type; }

#define NAP_NAPECS_ECSSYSTEMATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18D8B7B0)
#define NAP_NAPECS_ECSSYSTEMATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x18D8B7D0)
#define NAP_NAPECS_ECSSYSTEMATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x18D8B790)

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsSystemAttribute_TypeDefinitionIndex = 35138;

	class EcsSystemAttribute : public ::System::Attribute
	{
	public:
		::System::String* Scope; // 0x10
		::System::Type* RunAfter; // 0x18
		::System::Boolean EnableSingleplayer; // 0x20
		::System::Boolean EnableMultiplayer; // 0x21
		::System::Boolean Enable; // 0x22

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEMATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEMATTRIBUTE__CTOR_1_OFFSET))(this, enable);
		}

		::System::Void _ctor_2(::System::Boolean enable, ::System::Boolean singleplayer, ::System::Boolean multiplayer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEMATTRIBUTE__CTOR_2_OFFSET))(this, enable, singleplayer, multiplayer);
		}
	};
}
