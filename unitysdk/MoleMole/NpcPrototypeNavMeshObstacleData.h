#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_NPCPROTOTYPENAVMESHOBSTACLEDATA_METHOD_1_D1F554D2FB230BD0_OFFSET UNITYSDK_OFFSET(0xA531D40)
#define MOLEMOLE_NPCPROTOTYPENAVMESHOBSTACLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA531D30)

namespace MoleMole
{
	inline static constexpr unsigned int NpcPrototypeNavMeshObstacleData_TypeDefinitionIndex = 59294;

	class NpcPrototypeNavMeshObstacleData : public ::System::Object
	{
	public:
		::System::Boolean Enable; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NPCPROTOTYPENAVMESHOBSTACLEDATA__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_D1F554D2FB230BD0(::MoleMole::Battle::Entity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_NPCPROTOTYPENAVMESHOBSTACLEDATA_METHOD_1_D1F554D2FB230BD0_OFFSET))(this, a1);
		}
	};
}
