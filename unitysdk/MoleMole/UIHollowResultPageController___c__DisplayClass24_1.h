#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowResultPageController___c__DisplayClass24_0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___C__DISPLAYCLASS24_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA39C140)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___C__DISPLAYCLASS24_1__INITSTATE_B__3_OFFSET UNITYSDK_OFFSET(0xA39C150)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowResultPageController___c__DisplayClass24_1_TypeDefinitionIndex = 39294;

	class UIHollowResultPageController___c__DisplayClass24_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::SByte, ::System::Int32>* avatars; // 0x10
		::MoleMole::UIHollowResultPageController___c__DisplayClass24_0* CS___8__locals1; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* lockids; // 0x20
		::System::Int32 buddyID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___C__DISPLAYCLASS24_1__CTOR_OFFSET))(this);
		}

		::System::Void _InitState_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___C__DISPLAYCLASS24_1__INITSTATE_B__3_OFFSET))(this);
		}
	};
}
