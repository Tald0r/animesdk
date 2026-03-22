#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController___c__DisplayClass75_1; }

#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS75_2__CTOR_OFFSET UNITYSDK_OFFSET(0xA29ECD0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS75_2__UPDATETEXTCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0xA29ECE0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS75_2__UPDATETEXTCALLBACK_B__1_OFFSET UNITYSDK_OFFSET(0xA29ECF0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS75_2__UPDATETEXTCALLBACK_B__2_OFFSET UNITYSDK_OFFSET(0xA29ED00)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS75_2__UPDATETEXTCALLBACK_B__3_OFFSET UNITYSDK_OFFSET(0xA29F130)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS75_2__UPDATETEXTCALLBACK_G__DOANIMUPDATE_4_OFFSET UNITYSDK_OFFSET(0xA29F140)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleRowWidgetController___c__DisplayClass75_2_TypeDefinitionIndex = 60669;

	class UIGeneralNewsBubbleRowWidgetController___c__DisplayClass75_2 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralNewsBubbleRowWidgetController___c__DisplayClass75_1* CS___8__locals2; // 0x10
		::System::Single curWidth; // 0x18
		::System::Boolean isLongger; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS75_2__CTOR_OFFSET))(this);
		}

		::System::Single _UpdateTextCallback_b__0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS75_2__UPDATETEXTCALLBACK_B__0_OFFSET))(this);
		}

		::System::Void _UpdateTextCallback_b__1(::System::Single v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS75_2__UPDATETEXTCALLBACK_B__1_OFFSET))(this, v);
		}

		::System::Void _UpdateTextCallback_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS75_2__UPDATETEXTCALLBACK_B__2_OFFSET))(this);
		}

		::System::Void _UpdateTextCallback_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS75_2__UPDATETEXTCALLBACK_B__3_OFFSET))(this);
		}

		::System::Void _UpdateTextCallback_g__DoAnimUpdate_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS75_2__UPDATETEXTCALLBACK_G__DOANIMUPDATE_4_OFFSET))(this);
		}
	};
}
