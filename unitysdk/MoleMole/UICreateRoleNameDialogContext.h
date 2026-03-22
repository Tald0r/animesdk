#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UICREATEROLENAMEDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA26EBF0)

namespace MoleMole
{
	inline static constexpr unsigned int UICreateRoleNameDialogContext_TypeDefinitionIndex = 64347;

	class UICreateRoleNameDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* onCancelInputName; // 0x28
		::System::Action* onClickCancelButton; // 0x30
		::System::Action_1<::System::String*>* onClickOKTriggerLogic; // 0x38
		::System::String* cancelButtonText; // 0x40
		::System::String* inputTipsText; // 0x48
		::System::Action_1<::System::String*>* onInputNameSuccess; // 0x50
		::System::String* bottomTipsText; // 0x58
		::System::String* titleEnText; // 0x60
		::System::String* tipsText; // 0x68
		::System::String* defaultText; // 0x70
		::System::String* titleText; // 0x78
		::System::Int32 maxByteLength; // 0x80
		::System::Boolean enableBtnWhenInputEmpty; // 0x84
		::System::Boolean hideClose; // 0x85
		::System::Boolean useOutsideConfirmLogic; // 0x86
		::System::Boolean hideBottomTips; // 0x87
		::System::Boolean hideHint; // 0x88

		::System::Void _ctor(::System::Action_1<::System::String*>* inputCB, ::System::Action* cancelCB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLENAMEDIALOGCONTEXT__CTOR_OFFSET))(this, inputCB, cancelCB);
		}
	};
}
