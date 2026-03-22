#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_MOVABLECHILDWINDOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xB2EE420)

namespace MoleMole
{
	inline static constexpr unsigned int MovableChildWindowContext_TypeDefinitionIndex = 38823;

	class MovableChildWindowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::UnityEngine::Events::UnityAction* OnCloseBtnCallback; // 0x28
		::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>* voHandles; // 0x30
		::Foundation::ViewObject::ViewObjectHandle openVo; // 0x38
		::System::Collections::Generic::List_1<::System::String*>* camKeyList; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVABLECHILDWINDOWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
