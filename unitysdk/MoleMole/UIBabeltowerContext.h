#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_EFA6AA5AA832852E;

#define MOLEMOLE_UIBABELTOWERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xC09A940)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerContext_TypeDefinitionIndex = 46376;

	class UIBabeltowerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_EFA6AA5AA832852E* DataLogic; // 0x28
		::System::Int32 towerid; // 0x30
		::System::Boolean DirectOpenFightInfo; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
