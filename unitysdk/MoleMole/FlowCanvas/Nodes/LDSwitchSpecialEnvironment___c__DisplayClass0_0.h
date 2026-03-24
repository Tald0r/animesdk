#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_A18F3B252E440C5B;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSPECIALENVIRONMENT___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA38AC90)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSwitchSpecialEnvironment___c__DisplayClass0_0_TypeDefinitionIndex = 79144;

	class LDSwitchSpecialEnvironment___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::Class_3_A18F3B252E440C5B* stageBehaviorDataComponent; // 0x10
		::MoleMole::Battle::Entity* stageEntity; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSPECIALENVIRONMENT___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}
	};
}
