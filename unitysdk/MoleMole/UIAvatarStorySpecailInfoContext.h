#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_C31F776B3FE6F486_1;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIAVATARSTORYSPECAILINFOCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA51B340)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarStorySpecailInfoContext_TypeDefinitionIndex = 42201;

	class UIAvatarStorySpecailInfoContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnClickOKBtn; // 0x28
		::System::Collections::Generic::List_1<::Class_1_C31F776B3FE6F486_1*>* left; // 0x30
		::System::Collections::Generic::List_1<::Class_1_C31F776B3FE6F486_1*>* right; // 0x38
		::System::Boolean isShowQuestInfoBtn; // 0x40
		::System::Boolean ClickNextCloseSelf; // 0x41
		::System::Int32 questID; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYSPECAILINFOCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
