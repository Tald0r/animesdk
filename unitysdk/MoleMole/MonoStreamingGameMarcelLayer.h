#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoPartySceneObject.h"

#define MOLEMOLE_MONOSTREAMINGGAMEMARCELLAYER_AWAKE_OFFSET UNITYSDK_OFFSET(0xA7ECE50)
#define MOLEMOLE_MONOSTREAMINGGAMEMARCELLAYER_ONASSOCIATEDENTITYREMOVED_OFFSET UNITYSDK_OFFSET(0xA7ED340)
#define MOLEMOLE_MONOSTREAMINGGAMEMARCELLAYER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA7ECF80)
#define MOLEMOLE_MONOSTREAMINGGAMEMARCELLAYER_RESETBLOCKS_OFFSET UNITYSDK_OFFSET(0xA7ED170)
#define MOLEMOLE_MONOSTREAMINGGAMEMARCELLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0xA7ED3E0)
#define MOLEMOLE_MONOSTREAMINGGAMEMARCELLAYER___BASE_ONASSOCIATEDENTITYREMOVED_OFFSET UNITYSDK_OFFSET(0xA7ED430)

namespace MoleMole
{
	inline static constexpr unsigned int MonoStreamingGameMarcelLayer_TypeDefinitionIndex = 42088;

	class MonoStreamingGameMarcelLayer : public ::MoleMole::MonoPartySceneObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTREAMINGGAMEMARCELLAYER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTREAMINGGAMEMARCELLAYER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTREAMINGGAMEMARCELLAYER_ONDESTROY_OFFSET))(this);
		}

		::System::Void ResetBlocks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTREAMINGGAMEMARCELLAYER_RESETBLOCKS_OFFSET))(this);
		}

		::System::Void OnAssociatedEntityRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTREAMINGGAMEMARCELLAYER_ONASSOCIATEDENTITYREMOVED_OFFSET))(this);
		}

		::System::Void __base_OnAssociatedEntityRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTREAMINGGAMEMARCELLAYER___BASE_ONASSOCIATEDENTITYREMOVED_OFFSET))(this);
		}
	};
}
