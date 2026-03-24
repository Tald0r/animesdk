#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_A76F1E7974674667;

#define MOLEMOLE_YOROZUYARALLYQUESTITEMCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x9F104B0)

namespace MoleMole
{
	inline static constexpr unsigned int YorozuyaRallyQuestItemContext_TypeDefinitionIndex = 59542;

	class YorozuyaRallyQuestItemContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_A76F1E7974674667* RallyQuest; // 0x28
		::System::Int32 Index; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_YOROZUYARALLYQUESTITEMCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
