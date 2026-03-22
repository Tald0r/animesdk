#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"

class Class_2_BC6EAC72521F25DD;
class Class_2_C98CD2116E71F5C1;
namespace MoleMole { class UIQuestionsAnswerWidgetController; }
namespace System { class String; }

#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS57_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD00FCC0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS57_0__TRYNEXTNPC_B__3_OFFSET UNITYSDK_OFFSET(0xD00FE00)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS57_0__TRYNEXTNPC_G__BOTTOMFADEIN_2_OFFSET UNITYSDK_OFFSET(0xD00FDA0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS57_0__TRYNEXTNPC_G__BOTTOMFADEOUT_5_OFFSET UNITYSDK_OFFSET(0xD00FE90)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS57_0__TRYNEXTNPC_G__CHANGETONPC_0_OFFSET UNITYSDK_OFFSET(0xD00FCD0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS57_0__TRYNEXTNPC_G__CHATFADEANDSHOW_1_OFFSET UNITYSDK_OFFSET(0xD00FD30)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS57_0__TRYNEXTNPC_G__CHATTASK_4_OFFSET UNITYSDK_OFFSET(0xD00FE30)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswerWidgetController___c__DisplayClass57_0_TypeDefinitionIndex = 70209;

	class UIQuestionsAnswerWidgetController___c__DisplayClass57_0 : public ::System::Object
	{
	public:
		::System::String* reply; // 0x10
		::System::String* replyEx; // 0x18
		::System::String* replyOption; // 0x20
		::Class_2_C98CD2116E71F5C1* npcConfig; // 0x28
		::Class_2_BC6EAC72521F25DD* eventConfig; // 0x30
		::MoleMole::UIQuestionsAnswerWidgetController* __4__this; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS57_0__CTOR_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask _TryNextNpc_g__ChangeToNpc_0()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS57_0__TRYNEXTNPC_G__CHANGETONPC_0_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask _TryNextNpc_g__ChatFadeAndShow_1()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS57_0__TRYNEXTNPC_G__CHATFADEANDSHOW_1_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask _TryNextNpc_g__BottomFadeIn_2()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS57_0__TRYNEXTNPC_G__BOTTOMFADEIN_2_OFFSET))(this);
		}

		::System::Void _TryNextNpc_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS57_0__TRYNEXTNPC_B__3_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask _TryNextNpc_g__ChatTask_4()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS57_0__TRYNEXTNPC_G__CHATTASK_4_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask _TryNextNpc_g__BottomFadeOut_5()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS57_0__TRYNEXTNPC_G__BOTTOMFADEOUT_5_OFFSET))(this);
		}
	};
}
