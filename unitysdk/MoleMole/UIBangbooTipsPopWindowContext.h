#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_CD990C643F5F60DD;

#define MOLEMOLE_UIBANGBOOTIPSPOPWINDOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xCB2A650)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooTipsPopWindowContext_TypeDefinitionIndex = 79002;

	class UIBangbooTipsPopWindowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_CD990C643F5F60DD* skill; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOTIPSPOPWINDOWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
