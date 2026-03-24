#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController___c__DisplayClass17_0; }
namespace MoleMole::GalGame { class AudioEventItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS17_1__CTOR_OFFSET UNITYSDK_OFFSET(0xC10CA70)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass17_1_TypeDefinitionIndex = 58916;

	class UIGalgamePageController___c__DisplayClass17_1 : public ::System::Object
	{
	public:
		::MoleMole::UIGalgamePageController___c__DisplayClass17_0* CS___8__locals1; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>* audioEventItemList; // 0x18
		::System::String* voiceKey; // 0x20
		::System::Single textSpeed; // 0x28
		::System::Boolean isTypeWriter; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS17_1__CTOR_OFFSET))(this);
		}
	};
}
