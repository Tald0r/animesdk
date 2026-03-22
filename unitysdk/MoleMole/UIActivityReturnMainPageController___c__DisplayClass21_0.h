#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7ECB9691B142D586;
namespace MoleMole { class UIActivityReturnMainPageController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIACTIVITYRETURNMAINPAGECONTROLLER___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD1D5AE0)
#define MOLEMOLE_UIACTIVITYRETURNMAINPAGECONTROLLER___C__DISPLAYCLASS21_0__PLAYVIDEO_B__0_OFFSET UNITYSDK_OFFSET(0xD1D5AF0)
#define MOLEMOLE_UIACTIVITYRETURNMAINPAGECONTROLLER___C__DISPLAYCLASS21_0__PLAYVIDEO_B__1_OFFSET UNITYSDK_OFFSET(0xD1D5B40)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityReturnMainPageController___c__DisplayClass21_0_TypeDefinitionIndex = 41819;

	class UIActivityReturnMainPageController___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::MoleMole::UIActivityReturnMainPageController* __4__this; // 0x10
		::System::Action_1<::Class_1_7ECB9691B142D586*>* OnVideoFinished; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNMAINPAGECONTROLLER___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayVideo_b__0(::Class_1_7ECB9691B142D586* vp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7ECB9691B142D586*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNMAINPAGECONTROLLER___C__DISPLAYCLASS21_0__PLAYVIDEO_B__0_OFFSET))(this, vp);
		}

		::System::Void _PlayVideo_b__1(::Class_1_7ECB9691B142D586* vp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7ECB9691B142D586*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNMAINPAGECONTROLLER___C__DISPLAYCLASS21_0__PLAYVIDEO_B__1_OFFSET))(this, vp);
		}
	};
}
