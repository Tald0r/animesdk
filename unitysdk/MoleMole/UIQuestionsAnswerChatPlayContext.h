#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_18814BC9826CDED5;
class Class_1_945ACFB1FEBC7A2C_3;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIQUESTIONSANSWERCHATPLAYCONTEXT_VALID_OFFSET UNITYSDK_OFFSET(0xCA3DC70)
#define MOLEMOLE_UIQUESTIONSANSWERCHATPLAYCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xCA3DD00)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswerChatPlayContext_TypeDefinitionIndex = 58085;

	class UIQuestionsAnswerChatPlayContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_3*>* DisplayTextList; // 0x28
		::System::Collections::Generic::List_1<::Class_1_18814BC9826CDED5*>* OptionList; // 0x30
		::System::Action_1<::MoleMole::UIQuestionsAnswerChatPlayContext*>* OnFinish; // 0x38
		::System::Int32 CurrentDisplayIndex; // 0x40
		::System::Int32 SelectOptionIndex; // 0x44
		::System::Boolean DetailUIMode; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERCHATPLAYCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Boolean Valid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERCHATPLAYCONTEXT_VALID_OFFSET))(this);
		}
	};
}
