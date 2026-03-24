#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DataStructures/Lists/EasySerializeDictionaryEntry_2.h"

namespace System { class String; }
namespace UnityEngine { class Animator; }

#define MOLEMOLE_LIVEHOUSESCENEANIMATORDATADICENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x6E9FA90)

namespace MoleMole
{
	inline static constexpr unsigned int LiveHouseSceneAnimatorDataDicEntry_TypeDefinitionIndex = 71002;

	class LiveHouseSceneAnimatorDataDicEntry : public ::MoleMole::DataStructures::Lists::EasySerializeDictionaryEntry_2<::System::String*, ::UnityEngine::Animator*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LIVEHOUSESCENEANIMATORDATADICENTRY__CTOR_OFFSET))(this);
		}
	};
}
