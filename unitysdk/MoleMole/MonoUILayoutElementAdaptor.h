#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/AdaptorShowType.h"
#include "unitysdk/MoleMole/MonoUILayoutAdaptorBase.h"

namespace MoleMole { class LayoutElementAdaptor; }
namespace MoleMole { class MonoUILayoutElement; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::UI { class LayoutElement; }

#define MOLEMOLE_MONOUILAYOUTELEMENTADAPTOR_DOINITLAYOUT_OFFSET UNITYSDK_OFFSET(0x6B14B40)
#define MOLEMOLE_MONOUILAYOUTELEMENTADAPTOR_INITLAYOUTELEMENT_OFFSET UNITYSDK_OFFSET(0x6B14D20)
#define MOLEMOLE_MONOUILAYOUTELEMENTADAPTOR_ISCONTAINPLATFORMUIPARAMS_OFFSET UNITYSDK_OFFSET(0x6B14A30)
#define MOLEMOLE_MONOUILAYOUTELEMENTADAPTOR_ISPLATFORMUIPARAMSEMPTY_OFFSET UNITYSDK_OFFSET(0x6B14970)
#define MOLEMOLE_MONOUILAYOUTELEMENTADAPTOR_RELOADDATAFROMJSON_OFFSET UNITYSDK_OFFSET(0x6B14F00)
#define MOLEMOLE_MONOUILAYOUTELEMENTADAPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x6B15230)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUILayoutElementAdaptor_TypeDefinitionIndex = 43425;

	class MonoUILayoutElementAdaptor : public ::MoleMole::MonoUILayoutAdaptorBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::AdaptorShowType, ::MoleMole::LayoutElementAdaptor*>* PlatformUIParams; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTELEMENTADAPTOR__CTOR_OFFSET))(this);
		}

		::System::Boolean IsPlatformUIParamsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTELEMENTADAPTOR_ISPLATFORMUIPARAMSEMPTY_OFFSET))(this);
		}

		::System::Boolean IsContainPlatformUIParams(::MoleMole::AdaptorShowType adaptorShowType)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AdaptorShowType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTELEMENTADAPTOR_ISCONTAINPLATFORMUIPARAMS_OFFSET))(this, adaptorShowType);
		}

		::System::Boolean DoInitLayout(::MoleMole::AdaptorShowType adaptorShowType)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AdaptorShowType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTELEMENTADAPTOR_DOINITLAYOUT_OFFSET))(this, adaptorShowType);
		}

		::System::Void ReloadDataFromJson(::MoleMole::AdaptorShowType type, ::System::String*& adaptorInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::AdaptorShowType, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTELEMENTADAPTOR_RELOADDATAFROMJSON_OFFSET))(this, type, adaptorInfo);
		}

		::System::Boolean InitLayoutElement(::UnityEngine::UI::LayoutElement* uiLayoutElement, ::MoleMole::MonoUILayoutElement* layoutElement)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::LayoutElement*, ::MoleMole::MonoUILayoutElement*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTELEMENTADAPTOR_INITLAYOUTELEMENT_OFFSET))(this, uiLayoutElement, layoutElement);
		}
	};
}
