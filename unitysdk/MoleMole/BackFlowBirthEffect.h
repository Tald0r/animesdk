#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_BACKFLOWBIRTHEFFECT_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xC309ED0)
#define MOLEMOLE_BACKFLOWBIRTHEFFECT_ONPROCESS_OFFSET UNITYSDK_OFFSET(0xC309EE0)
#define MOLEMOLE_BACKFLOWBIRTHEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xC30A060)

namespace MoleMole
{
	inline static constexpr unsigned int BackFlowBirthEffect_TypeDefinitionIndex = 50758;

	class BackFlowBirthEffect : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BACKFLOWBIRTHEFFECT__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BACKFLOWBIRTHEFFECT_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BACKFLOWBIRTHEFFECT_ONPROCESS_OFFSET))(this);
		}
	};
}
