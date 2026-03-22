#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBaseAnimator.h"

#define MOLEMOLE_UICAMERAANIMATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xA32D4B0)

namespace MoleMole
{
	inline static constexpr unsigned int UICameraAnimator_TypeDefinitionIndex = 73020;

	class UICameraAnimator : public ::MoleMole::UIBaseAnimator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAANIMATOR__CTOR_OFFSET))(this);
		}
	};
}
