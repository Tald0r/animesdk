#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMindscapeWidgetController; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Object; }

#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___C__DISPLAYCLASS109_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8710EF0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___C__DISPLAYCLASS109_0__SETBGMODEL_B__0_OFFSET UNITYSDK_OFFSET(0x8710F00)

namespace MoleMole
{
	inline static constexpr unsigned int UIMindscapeWidgetController___c__DisplayClass109_0_TypeDefinitionIndex = 74118;

	class UIMindscapeWidgetController___c__DisplayClass109_0 : public ::System::Object
	{
	public:
		::System::String* bgName; // 0x10
		::MoleMole::UIMindscapeWidgetController* __4__this; // 0x18
		::System::Action* completeHandle; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___C__DISPLAYCLASS109_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetBgModel_b__0(::UnityEngine::Object* obj, ::Foundation::AssetRequestHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___C__DISPLAYCLASS109_0__SETBGMODEL_B__0_OFFSET))(this, obj, handle);
		}
	};
}
