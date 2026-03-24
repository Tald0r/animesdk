#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER_SYNCBOOLTRIGGER_ACQUIREDIRTY_OFFSET UNITYSDK_OFFSET(0x99F6440)
#define MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER_SYNCBOOLTRIGGER_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x99F6430)
#define MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER_SYNCBOOLTRIGGER_MARKINITDIRTY_OFFSET UNITYSDK_OFFSET(0x99F63C0)
#define MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER_SYNCBOOLTRIGGER_SETBOOL_OFFSET UNITYSDK_OFFSET(0x99F6340)
#define MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER_SYNCBOOLTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x99F6330)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelNPCNameWidgetController_SyncBoolTrigger_TypeDefinitionIndex = 43671;

	class UIInLevelNPCNameWidgetController_SyncBoolTrigger : public ::System::Object
	{
	public:
		::System::Boolean _isDirty; // 0x10
		::System::Boolean isInit; // 0x11
		::System::Boolean _currentValue; // 0x12

		::System::Void _ctor(::System::Boolean defaultV)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER_SYNCBOOLTRIGGER__CTOR_OFFSET))(this, defaultV);
		}

		::System::Void SetBool(::System::Boolean v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER_SYNCBOOLTRIGGER_SETBOOL_OFFSET))(this, v);
		}

		::System::Void MarkInitDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER_SYNCBOOLTRIGGER_MARKINITDIRTY_OFFSET))(this);
		}

		::System::Boolean get_Current()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER_SYNCBOOLTRIGGER_GET_CURRENT_OFFSET))(this);
		}

		::System::Boolean AcquireDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER_SYNCBOOLTRIGGER_ACQUIREDIRTY_OFFSET))(this);
		}
	};
}
