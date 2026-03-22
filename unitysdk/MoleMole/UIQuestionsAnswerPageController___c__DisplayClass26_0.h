#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIQuestionsAnswerPageController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__DISPLAYCLASS26_0__BACKTOSELECT_B__0_OFFSET UNITYSDK_OFFSET(0xC83A950)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__DISPLAYCLASS26_0__BACKTOSELECT_B__1_OFFSET UNITYSDK_OFFSET(0xC83B670)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC83A940)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswerPageController___c__DisplayClass26_0_TypeDefinitionIndex = 56220;

	class UIQuestionsAnswerPageController___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::MoleMole::UIQuestionsAnswerPageController* __4__this; // 0x10
		::System::Action_1<::Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF>* __9__1; // 0x18
		::System::Boolean isFinish; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Void _BackToSelect_b__0(::Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF reason)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__DISPLAYCLASS26_0__BACKTOSELECT_B__0_OFFSET))(this, reason);
		}

		::System::Void _BackToSelect_b__1(::Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF hidereason)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__DISPLAYCLASS26_0__BACKTOSELECT_B__1_OFFSET))(this, hidereason);
		}
	};
}
