#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ButtonQTETaskEntryBase.h"

class Class_1_D47998EF092D4845;

#define MOLEMOLE_CONFIG_BUTTONQTETASKSINGLEPRESSACCURATEENTRY_CREATEREALTIMEQTETASK_OFFSET UNITYSDK_OFFSET(0x9703410)
#define MOLEMOLE_CONFIG_BUTTONQTETASKSINGLEPRESSACCURATEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x97034B0)
#define MOLEMOLE_CONFIG_BUTTONQTETASKSINGLEPRESSACCURATEENTRY___BASE_CREATEREALTIMEQTETASK_OFFSET UNITYSDK_OFFSET(0x9703520)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ButtonQTETaskSinglePressAccurateEntry_TypeDefinitionIndex = 60897;

	class ButtonQTETaskSinglePressAccurateEntry : public ::MoleMole::Config::ButtonQTETaskEntryBase
	{
	public:
		::System::Single AccurateInputStartTime; // 0x98
		::System::Boolean InaccurateInputFail; // 0x9C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BUTTONQTETASKSINGLEPRESSACCURATEENTRY__CTOR_OFFSET))(this);
		}

		::Class_1_D47998EF092D4845* CreateRealtimeQTETask()
		{
			return ((::Class_1_D47998EF092D4845*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BUTTONQTETASKSINGLEPRESSACCURATEENTRY_CREATEREALTIMEQTETASK_OFFSET))(this);
		}

		::Class_1_D47998EF092D4845* __base_CreateRealtimeQTETask()
		{
			return ((::Class_1_D47998EF092D4845*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BUTTONQTETASKSINGLEPRESSACCURATEENTRY___BASE_CREATEREALTIMEQTETASK_OFFSET))(this);
		}
	};
}
