#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIPerformPageController___c__DisplayClass46_0; }
namespace System { class String; }

#define MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS46_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA8521B0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS46_1__ONPLAYCGEND_B__1_OFFSET UNITYSDK_OFFSET(0xA853160)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS46_1__ONPLAYCGEND_B__2_OFFSET UNITYSDK_OFFSET(0xA8531F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPerformPageController___c__DisplayClass46_1_TypeDefinitionIndex = 63754;

	class UIPerformPageController___c__DisplayClass46_1 : public ::System::Object
	{
	public:
		::System::String* fadeout; // 0x10
		::MoleMole::UIPerformPageController___c__DisplayClass46_0* CS___8__locals1; // 0x18
		::System::Boolean nextComic; // 0x20
		::System::Boolean nextGalgame; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS46_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnPlayCGEnd_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS46_1__ONPLAYCGEND_B__1_OFFSET))(this);
		}

		::System::Void _OnPlayCGEnd_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS46_1__ONPLAYCGEND_B__2_OFFSET))(this);
		}
	};
}
