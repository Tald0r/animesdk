#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define MOLEMOLE_DESCRIPTCONFRIMDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1750A970)

namespace MoleMole
{
	inline static constexpr unsigned int DescriptConfrimDialogContext_TypeDefinitionIndex = 72310;

	class DescriptConfrimDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* titleCN; // 0x28
		::System::Action* rightAction; // 0x30
		::System::String* content; // 0x38
		::System::Action* closeAction; // 0x40
		::System::String* titleEN; // 0x48
		::System::Action* leftAction; // 0x50
		::System::String* rightBtnText; // 0x58
		::UnityEngine::Events::UnityAction_1<::System::String*>* contentHerfCallback; // 0x60
		::System::String* leftBtnText; // 0x68
		::System::Boolean hideClose; // 0x70
		::System::Boolean dontSetAutoClose; // 0x71

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DESCRIPTCONFRIMDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
