#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_A1E11F94C1500ACE;

#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xC29C6B0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaDatePlayWidgetContext_TypeDefinitionIndex = 45780;

	class UICinemaDatePlayWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_A1E11F94C1500ACE* datePlayController; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
