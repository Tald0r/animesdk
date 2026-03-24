#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_D8BC314706DCBAD3;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_REPELPREPBUFFSELECTCONTEXT_GET_LEVELDATA_OFFSET UNITYSDK_OFFSET(0xB9AF960)
#define MOLEMOLE_REPELPREPBUFFSELECTCONTEXT_SET_LEVELDATA_OFFSET UNITYSDK_OFFSET(0xB9AF970)
#define MOLEMOLE_REPELPREPBUFFSELECTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xB9AF980)

namespace MoleMole
{
	inline static constexpr unsigned int RepelPrepBuffSelectContext_TypeDefinitionIndex = 65221;

	class RepelPrepBuffSelectContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_D8BC314706DCBAD3* _LevelData_k__BackingField; // 0x28
		::System::Action_1<::System::Int32>* OnSelectCallback; // 0x30
		::System::Int32 MaxEquipedCount; // 0x38
		::System::Int32 CurrentEquipedCount; // 0x3C
		::System::Int32 SlotIndex; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REPELPREPBUFFSELECTCONTEXT__CTOR_OFFSET))(this);
		}

		::Class_2_D8BC314706DCBAD3* get_LevelData()
		{
			return ((::Class_2_D8BC314706DCBAD3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REPELPREPBUFFSELECTCONTEXT_GET_LEVELDATA_OFFSET))(this);
		}

		::System::Void set_LevelData(::Class_2_D8BC314706DCBAD3* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_D8BC314706DCBAD3*))((::PBYTE)hIl2Cpp + MOLEMOLE_REPELPREPBUFFSELECTCONTEXT_SET_LEVELDATA_OFFSET))(this, value);
		}
	};
}
