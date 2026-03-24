#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/MonsterPositionDuty.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/MonsterCreateData.h"

#define MOLEMOLE_FLOWCANVAS_LEVELZEROMONSTERCREATEDATABASE__CTOR_OFFSET UNITYSDK_OFFSET(0xA7C8B50)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int LevelZeroMonsterCreateDataBase_TypeDefinitionIndex = 78290;

	class LevelZeroMonsterCreateDataBase : public ::MoleMole::FlowCanvas::Nodes::MonsterCreateData
	{
	public:
		::MoleMole::FlowCanvas::MonsterPositionDuty MonsterPosition; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_LEVELZEROMONSTERCREATEDATABASE__CTOR_OFFSET))(this);
		}
	};
}
