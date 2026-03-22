#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_NPCIDGENERATORINT_GENID_OFFSET UNITYSDK_OFFSET(0x9EC0740)
#define NPCCROWD_NPCIDGENERATORINT_SETIDSTART_OFFSET UNITYSDK_OFFSET(0x9EC07B0)
#define NPCCROWD_NPCIDGENERATORINT__CTOR_OFFSET UNITYSDK_OFFSET(0x9EC0820)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCIDGeneratorInt_TypeDefinitionIndex = 55676;

	class NPCIDGeneratorInt : public ::System::Object
	{
	public:
		::System::Int32 IDGen; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCIDGENERATORINT__CTOR_OFFSET))(this);
		}

		::System::Int32 GenID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCIDGENERATORINT_GENID_OFFSET))(this);
		}

		::System::Void SetIDStart(::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCIDGENERATORINT_SETIDSTART_OFFSET))(this, id);
		}
	};
}
