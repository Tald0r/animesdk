#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_2271A294FCCB3EAE.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIMINIUIGAME3DCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x9E82DA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMiniUIGame3DContext_TypeDefinitionIndex = 42510;

	class UIMiniUIGame3DContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Enum_3_2271A294FCCB3EAE GameType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINIUIGAME3DCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
