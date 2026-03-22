#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainStoryPersonalRowWidgetController; }
namespace MoleMole { class UIMainStorySubitemRowChildWindowControllerV2; }

#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_SELECTIMAGE_DOALPHAOFFSET_OFFSET UNITYSDK_OFFSET(0xC1350C0)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_SELECTIMAGE_SELECT_OFFSET UNITYSDK_OFFSET(0xC135290)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_SELECTIMAGE_SETALPHAOFFSET_OFFSET UNITYSDK_OFFSET(0xC134F10)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_SELECTIMAGE_SETITEM_1_OFFSET UNITYSDK_OFFSET(0xC134D40)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_SELECTIMAGE_SETITEM_OFFSET UNITYSDK_OFFSET(0xC136360)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_SELECTIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0xC135E30)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainStoryPersonalRowWidgetController_SelectImage_TypeDefinitionIndex = 70888;

	class UIMainStoryPersonalRowWidgetController_SelectImage : public ::System::Object
	{
	public:
		::MoleMole::UIMainStorySubitemRowChildWindowControllerV2* _subItem; // 0x10
		::MoleMole::UIMainStoryPersonalRowWidgetController* _mainItem; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_SELECTIMAGE__CTOR_OFFSET))(this);
		}

		::System::Void SetItem(::MoleMole::UIMainStorySubitemRowChildWindowControllerV2* subItem)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMainStorySubitemRowChildWindowControllerV2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_SELECTIMAGE_SETITEM_OFFSET))(this, subItem);
		}

		::System::Void SetItem_1(::MoleMole::UIMainStoryPersonalRowWidgetController* mainItem)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMainStoryPersonalRowWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_SELECTIMAGE_SETITEM_1_OFFSET))(this, mainItem);
		}

		::System::Void SetAlphaOffset(::System::Single alphaTiling)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_SELECTIMAGE_SETALPHAOFFSET_OFFSET))(this, alphaTiling);
		}

		::System::Void DOAlphaOffset(::System::Single alphaTiling, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_SELECTIMAGE_DOALPHAOFFSET_OFFSET))(this, alphaTiling, duration);
		}

		::System::Void Select(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_SELECTIMAGE_SELECT_OFFSET))(this, isSelect);
		}
	};
}
