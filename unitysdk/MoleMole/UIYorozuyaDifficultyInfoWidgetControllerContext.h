#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UIYorozuyaDifficultyInfoWidgetControllerContext_NestType.h"

#define MOLEMOLE_UIYOROZUYADIFFICULTYINFOWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x9AC61F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaDifficultyInfoWidgetControllerContext_TypeDefinitionIndex = 71187;

	class UIYorozuyaDifficultyInfoWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::UIYorozuyaDifficultyInfoWidgetControllerContext_NestType nestType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYADIFFICULTYINFOWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
