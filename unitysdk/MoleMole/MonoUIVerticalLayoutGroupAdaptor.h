#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/AdaptorShowType.h"
#include "unitysdk/MoleMole/MonoUILayoutAdaptorBase.h"

namespace MoleMole { class UIVerticalLayoutGroup; }
namespace MoleMole { class VerticalLayoutGroupAdaptor; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::UI { class VerticalLayoutGroup; }

#define MOLEMOLE_MONOUIVERTICALLAYOUTGROUPADAPTOR_DOINITLAYOUT_OFFSET UNITYSDK_OFFSET(0x6B16670)
#define MOLEMOLE_MONOUIVERTICALLAYOUTGROUPADAPTOR_INITLAYOUTELEMENT_OFFSET UNITYSDK_OFFSET(0x6B16850)
#define MOLEMOLE_MONOUIVERTICALLAYOUTGROUPADAPTOR_ISCONTAINPLATFORMUIPARAMS_OFFSET UNITYSDK_OFFSET(0x6B16560)
#define MOLEMOLE_MONOUIVERTICALLAYOUTGROUPADAPTOR_ISPLATFORMUIPARAMSEMPTY_OFFSET UNITYSDK_OFFSET(0x6B164A0)
#define MOLEMOLE_MONOUIVERTICALLAYOUTGROUPADAPTOR_RELOADDATAFROMJSON_OFFSET UNITYSDK_OFFSET(0x6B16E00)
#define MOLEMOLE_MONOUIVERTICALLAYOUTGROUPADAPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x6B17100)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIVerticalLayoutGroupAdaptor_TypeDefinitionIndex = 58609;

	class MonoUIVerticalLayoutGroupAdaptor : public ::MoleMole::MonoUILayoutAdaptorBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::AdaptorShowType, ::MoleMole::VerticalLayoutGroupAdaptor*>* PlatformUIParams; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIVERTICALLAYOUTGROUPADAPTOR__CTOR_OFFSET))(this);
		}

		::System::Boolean IsPlatformUIParamsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIVERTICALLAYOUTGROUPADAPTOR_ISPLATFORMUIPARAMSEMPTY_OFFSET))(this);
		}

		::System::Boolean IsContainPlatformUIParams(::MoleMole::AdaptorShowType adaptorShowType)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AdaptorShowType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIVERTICALLAYOUTGROUPADAPTOR_ISCONTAINPLATFORMUIPARAMS_OFFSET))(this, adaptorShowType);
		}

		::System::Boolean DoInitLayout(::MoleMole::AdaptorShowType adaptorShowType)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AdaptorShowType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIVERTICALLAYOUTGROUPADAPTOR_DOINITLAYOUT_OFFSET))(this, adaptorShowType);
		}

		::System::Boolean InitLayoutElement(::UnityEngine::UI::VerticalLayoutGroup* verticalLayout, ::MoleMole::UIVerticalLayoutGroup* layoutElement)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::VerticalLayoutGroup*, ::MoleMole::UIVerticalLayoutGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIVERTICALLAYOUTGROUPADAPTOR_INITLAYOUTELEMENT_OFFSET))(this, verticalLayout, layoutElement);
		}

		::System::Void ReloadDataFromJson(::MoleMole::AdaptorShowType type, ::System::String*& adaptorInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::AdaptorShowType, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIVERTICALLAYOUTGROUPADAPTOR_RELOADDATAFROMJSON_OFFSET))(this, type, adaptorInfo);
		}
	};
}
