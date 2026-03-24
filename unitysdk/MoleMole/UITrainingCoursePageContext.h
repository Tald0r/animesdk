#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_340DE32BA097F66C.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UITRAININGCOURSEPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x9EE8E20)

namespace MoleMole
{
	inline static constexpr unsigned int UITrainingCoursePageContext_TypeDefinitionIndex = 79906;

	class UITrainingCoursePageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 LastSpecialID; // 0x28
		::Enum_3_340DE32BA097F66C FromCtrl; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRAININGCOURSEPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
