#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_BE9E890626A0960B;
class Class_2_CE905445948732C1_Class_1_A6660CA21D7C1066_Class_1_C277D6FBDA93149D;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIVHSStoreLimitBtnsWidgetController; }
namespace MoleMole { class UIVHSStoreLimitRoleInfoWidgetController; }
namespace MoleMole { class UIVHSStoreLimitWidgetController_Context; }
namespace MoleMole { class UIVHSStoreLimitWidgetController_TagScrollViewHelper; }
namespace MoleMole { class UIVHSStoreRecommandWidgetController; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_CHECKVALID_OFFSET UNITYSDK_OFFSET(0xACDD1F0)
#define MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_GET_SELECTEDVHS_OFFSET UNITYSDK_OFFSET(0xACDD340)
#define MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_GET__CONTEXT_OFFSET UNITYSDK_OFFSET(0xACDD330)
#define MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_INITBYCONTEXT_OFFSET UNITYSDK_OFFSET(0xACDD090)
#define MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_ONCONTEXTCHANGE_OFFSET UNITYSDK_OFFSET(0xACDD260)
#define MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xACDCEA0)
#define MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xACDCF40)
#define MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xACDCC90)
#define MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_SET__CONTEXT_OFFSET UNITYSDK_OFFSET(0xACDD160)
#define MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xACDD020)
#define MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xACDD3D0)
#define MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xACDD400)
#define MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xACDD470)
#define MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xACDD4F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSStoreLimitWidgetController_TypeDefinitionIndex = 42284;

	class UIVHSStoreLimitWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_BE9E890626A0960B* _view; // 0x2A0
		::MoleMole::UIVHSStoreLimitRoleInfoWidgetController* _roleInfoWidget; // 0x2A8
		::MoleMole::UIVHSStoreLimitBtnsWidgetController* _btnsWidget; // 0x2B0
		::MoleMole::UIVHSStoreRecommandWidgetController* _recommandWidget; // 0x2B8
		::MoleMole::UIVHSStoreLimitWidgetController_Context* __context; // 0x2C0
		::MoleMole::UIVHSStoreLimitWidgetController_TagScrollViewHelper* tagHelper; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void InitByContext(::MoleMole::UIVHSStoreLimitWidgetController_Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIVHSStoreLimitWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_INITBYCONTEXT_OFFSET))(this, context);
		}

		::System::Boolean CheckValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_CHECKVALID_OFFSET))(this);
		}

		::System::Void OnContextChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_ONCONTEXTCHANGE_OFFSET))(this);
		}

		::MoleMole::UIVHSStoreLimitWidgetController_Context* get__context()
		{
			return ((::MoleMole::UIVHSStoreLimitWidgetController_Context*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_GET__CONTEXT_OFFSET))(this);
		}

		::System::Void set__context(::MoleMole::UIVHSStoreLimitWidgetController_Context* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIVHSStoreLimitWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_SET__CONTEXT_OFFSET))(this, value);
		}

		::System::Collections::Generic::IReadOnlyList_1<::Class_2_CE905445948732C1_Class_1_A6660CA21D7C1066_Class_1_C277D6FBDA93149D*>* get_SelectedVhs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::Class_2_CE905445948732C1_Class_1_A6660CA21D7C1066_Class_1_C277D6FBDA93149D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_GET_SELECTEDVHS_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
