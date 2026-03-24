#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define DG_TWEENING_DOTWEENPRO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B63D830)
#define DG_TWEENING_DOTWEENPRO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B63D820)

namespace DG::Tweening
{
	inline static constexpr unsigned int DOTweenPro_TypeDefinitionIndex = 32397;

	class DOTweenPro : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_Version()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DOTweenPro_TypeDefinitionIndex)->GetStaticField(0x25480);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENPRO__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENPRO__CCTOR_OFFSET))();
		}
	};
}
