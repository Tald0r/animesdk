#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_6B13270EB20C5C7E;

#define MOLEMOLE_UIREPELFIGHTINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xCFD7E10)

namespace MoleMole
{
	inline static constexpr unsigned int UIRepelFightingContext_TypeDefinitionIndex = 58156;

	class UIRepelFightingContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_6B13270EB20C5C7E* groupData; // 0x28
		::System::Int32 focusLevelIndex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELFIGHTINGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
