#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DataStructures/Lists/EasySerializeDictionaryEntry_2.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_LIVEHOUSESCENEGAMEOBJECTDATADICENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x7F13640)

namespace MoleMole
{
	inline static constexpr unsigned int LiveHouseSceneGameObjectDataDicEntry_TypeDefinitionIndex = 76224;

	class LiveHouseSceneGameObjectDataDicEntry : public ::MoleMole::DataStructures::Lists::EasySerializeDictionaryEntry_2<::System::String*, ::UnityEngine::GameObject*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LIVEHOUSESCENEGAMEOBJECTDATADICENTRY__CTOR_OFFSET))(this);
		}
	};
}
