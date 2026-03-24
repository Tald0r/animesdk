#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_CLASS_1_47551F410DEF390A_METHOD_1_29580D1D2AC89AAF_OFFSET UNITYSDK_OFFSET(0x1B65C7A0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_CLASS_1_47551F410DEF390A_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1B65C730)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_CLASS_1_47551F410DEF390A__CTOR_OFFSET UNITYSDK_OFFSET(0x1B65C720)

namespace MoleMole::Arcade::SnakeDemo
{
	inline static constexpr unsigned int UIMapSnakeBombAnimScript_Class_1_47551F410DEF390A_TypeDefinitionIndex = 83724;

	class UIMapSnakeBombAnimScript_Class_1_47551F410DEF390A : public ::System::Object
	{
	public:
		::UnityEngine::UI::Image* Field_1_3; // 0x10
		::UnityEngine::GameObject* Field_1_2; // 0x18
		::UnityEngine::RectTransform* Field_1_5; // 0x20
		::System::Int32 Field_1_0; // 0x28
		::System::Int32 Field_1_1; // 0x2C
		::System::Boolean Field_1_4; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_CLASS_1_47551F410DEF390A__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_CLASS_1_47551F410DEF390A_METHOD_1_4343F372F34C05BF_OFFSET))(this);
		}

		::UnityEngine::RectTransform* Method_1_29580D1D2AC89AAF()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_CLASS_1_47551F410DEF390A_METHOD_1_29580D1D2AC89AAF_OFFSET))(this);
		}
	};
}
