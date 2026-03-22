#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NPCCROWD_NPCATTACHPOINTNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x7585B60)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCAttachPointName_TypeDefinitionIndex = 63506;

	class NPCAttachPointName : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::System::Int32 HashID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCATTACHPOINTNAME__CTOR_OFFSET))(this);
		}
	};
}
