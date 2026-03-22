#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_205E43D40B9E7AEA.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class Class_1_EDBF989FCD2F91A5_Class_1_9E89B2D44593C915;
namespace System { class Action; }

#define MOLEMOLE_UITUTORIALDIALOG_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xA0883A0)
#define MOLEMOLE_UITUTORIALDIALOG_ONPROCESS_OFFSET UNITYSDK_OFFSET(0xA088480)
#define MOLEMOLE_UITUTORIALDIALOG__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA088400)
#define MOLEMOLE_UITUTORIALDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0xA0883B0)

namespace MoleMole
{
	inline static constexpr unsigned int UITutorialDialog_TypeDefinitionIndex = 36455;

	class UITutorialDialog : public ::MoleMole::DisplayMessageBase
	{
	public:
		::Class_1_EDBF989FCD2F91A5_Class_1_9E89B2D44593C915* popupGroupData; // 0x28
		::System::Action* callback; // 0x30
		::System::Boolean isPreload; // 0x38
		::System::Boolean _isLoaded; // 0x39
		::System::Boolean CanCloseOnlyReachEnd; // 0x3A

		::System::Void _ctor(::Class_1_EDBF989FCD2F91A5_Class_1_9E89B2D44593C915* popupGroupData, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EDBF989FCD2F91A5_Class_1_9E89B2D44593C915*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALDIALOG__CTOR_OFFSET))(this, popupGroupData, callback);
		}

		::System::Void _ctor_1(::System::Int32 id, ::System::Action* callback, ::Enum_3_205E43D40B9E7AEA page)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*, ::Enum_3_205E43D40B9E7AEA))((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALDIALOG__CTOR_1_OFFSET))(this, id, callback, page);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALDIALOG_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALDIALOG_ONPROCESS_OFFSET))(this);
		}
	};
}
