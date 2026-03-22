#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/UnityEngine/TextAnchor.h"

class Class_1_777EB91B86430809_1;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIGENERALACTIONPANELCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA9165D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralActionPanelContext_TypeDefinitionIndex = 53644;

	class UIGeneralActionPanelContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::UnityEngine::Transform* LocateLT; // 0x28
		::System::Collections::Generic::List_1<::Class_1_777EB91B86430809_1*>* ButtonContexts; // 0x30
		::UnityEngine::RectTransform* AutoAnchorCanvas; // 0x38
		::UnityEngine::Transform* LocateLD; // 0x40
		::UnityEngine::Transform* LocateRD; // 0x48
		::UnityEngine::Transform* LocateRT; // 0x50
		::MoleMole::InputLogicEventType CloseEventType; // 0x58
		::System::Boolean AutoAnchor; // 0x5C
		::UnityEngine::TextAnchor AnchorMode; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIONPANELCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
