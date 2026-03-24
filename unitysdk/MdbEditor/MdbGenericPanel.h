#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MDBEDITOR_MDBGENERICPANEL__CTOR_OFFSET UNITYSDK_OFFSET(0x11B206D0)

namespace MdbEditor
{
	inline static constexpr unsigned int MdbGenericPanel_TypeDefinitionIndex = 84236;

	class MdbGenericPanel : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBEDITOR_MDBGENERICPANEL__CTOR_OFFSET))(this);
		}
	};
}
