#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E0210A789FE5DC9A.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_TITLENMEDALTABCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x8FA70B0)

namespace MoleMole
{
	inline static constexpr unsigned int TitleNMedalTabContext_TypeDefinitionIndex = 56322;

	class TitleNMedalTabContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 OverrideMedalGroupID; // 0x28
		::Enum_3_E0210A789FE5DC9A tabType; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TITLENMEDALTABCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
