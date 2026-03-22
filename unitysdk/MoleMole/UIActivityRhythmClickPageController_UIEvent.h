#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIActivityRhythmClickPageController_UIEvent_UIEventInnerEvent.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER_UIEVENT_ADDEVENT_OFFSET UNITYSDK_OFFSET(0xBD8E340)
#define MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER_UIEVENT_CLEAR_OFFSET UNITYSDK_OFFSET(0xBD8E290)
#define MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER_UIEVENT_FINISH_OFFSET UNITYSDK_OFFSET(0xBD8E620)
#define MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER_UIEVENT_START_OFFSET UNITYSDK_OFFSET(0xBD8E460)
#define MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER_UIEVENT_UPDATE_OFFSET UNITYSDK_OFFSET(0xBD8E4D0)
#define MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER_UIEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xBD8E1E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityRhythmClickPageController_UIEvent_TypeDefinitionIndex = 41469;

	class UIActivityRhythmClickPageController_UIEvent : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::UIActivityRhythmClickPageController_UIEvent_UIEventInnerEvent>* _innerEvents; // 0x10
		::System::Single TotalTime; // 0x18
		::System::Int32 nextEventIdx; // 0x1C
		::System::Boolean isFinish; // 0x20
		::System::Boolean isStart; // 0x21
		::System::Single currTime; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER_UIEVENT__CTOR_OFFSET))(this);
		}

		::System::Void AddEvent(::System::Single timeStamp, ::System::Single timeDuration, ::System::Action* startCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER_UIEVENT_ADDEVENT_OFFSET))(this, timeStamp, timeDuration, startCallback);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER_UIEVENT_START_OFFSET))(this);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER_UIEVENT_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER_UIEVENT_FINISH_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER_UIEVENT_CLEAR_OFFSET))(this);
		}
	};
}
