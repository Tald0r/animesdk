#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B90C1A15EA6E3C2B.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UITRAININGCOURSEPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xAE97B10)

namespace MoleMole
{
	inline static constexpr unsigned int UITrainingCoursePageContext_TypeDefinitionIndex = 46095;

	class UITrainingCoursePageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Enum_3_B90C1A15EA6E3C2B FromCtrl; // 0x28
		::System::Int32 LastSpecialID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRAININGCOURSEPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
