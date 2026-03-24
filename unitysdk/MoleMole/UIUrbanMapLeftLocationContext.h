#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole { class UIUrbanMapLeftLocationRowContext; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define MOLEMOLE_UIURBANMAPLEFTLOCATIONCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x9EE8E30)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapLeftLocationContext_TypeDefinitionIndex = 49204;

	class UIUrbanMapLeftLocationContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_3<::System::Boolean, ::System::Boolean, ::System::Action_2<::System::Boolean, ::System::Boolean>*>* OnSetExpand; // 0x28
		::System::Action_1<::MoleMole::UIUrbanMapLeftLocationRowContext*>* OnConsoleSelect; // 0x30
		::System::Collections::Generic::IList_1<::MoleMole::UIUrbanMapLeftLocationRowContext*>* RowList; // 0x38
		::System::String* Title; // 0x40
		::System::Boolean FirstInit; // 0x48
		::System::Boolean Mode2d; // 0x49
		::System::Boolean EnableExpand; // 0x4A
		::System::Boolean DefaultExpand; // 0x4B
		::System::Int32 InitIndex; // 0x4C
		::System::Single OtherHeight; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLEFTLOCATIONCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
