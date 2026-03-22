#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS73_0__CTOR_OFFSET UNITYSDK_OFFSET(0x808E2B0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS73_0__SETTEXTFUNC_B__0_OFFSET UNITYSDK_OFFSET(0x808E2C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleRowWidgetController___c__DisplayClass73_0_TypeDefinitionIndex = 60658;

	class UIGeneralNewsBubbleRowWidgetController___c__DisplayClass73_0 : public ::System::Object
	{
	public:
		::System::Func_1<::System::String*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS73_0__CTOR_OFFSET))(this);
		}

		::System::String* _SetTextFunc_b__0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS73_0__SETTEXTFUNC_B__0_OFFSET))(this);
		}
	};
}
