#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7ECB9691B142D586;
namespace System { class Action; }

#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS302_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAA2A210)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS302_0__LOADNXTLEVELFAKELOADINGVIEW_B__0_OFFSET UNITYSDK_OFFSET(0xAA2A220)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainPageController___c__DisplayClass302_0_TypeDefinitionIndex = 52608;

	class UIHollowMainPageController___c__DisplayClass302_0 : public ::System::Object
	{
	public:
		::System::Action* onFakeVideoLoaded; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS302_0__CTOR_OFFSET))(this);
		}

		::System::Void _LoadNxtLevelFakeLoadingView_b__0(::Class_1_7ECB9691B142D586* vp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7ECB9691B142D586*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS302_0__LOADNXTLEVELFAKELOADINGVIEW_B__0_OFFSET))(this, vp);
		}
	};
}
