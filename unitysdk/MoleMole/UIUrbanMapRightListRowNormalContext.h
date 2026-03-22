#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UIUrbanMapRightListRowNormalContext_EBgMode.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIURBANMAPRIGHTLISTROWNORMALCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xACD8F10)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRightListRowNormalContext_TypeDefinitionIndex = 38532;

	class UIUrbanMapRightListRowNormalContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* ProgressFormat; // 0x28
		::System::Func_1<::System::String*>* DescText; // 0x30
		::System::String* IconTextNum; // 0x38
		::Foundation::AssetPath ProgressIcon; // 0x40
		::System::Func_1<::System::String*>* RawDescText; // 0x50
		::UnityEngine::Events::UnityAction* OnClick; // 0x58
		::Foundation::AssetPath IconTextIcon; // 0x60
		::System::String* RightRawText; // 0x70
		::System::String* RightTextKey; // 0x78
		::Foundation::AssetPath DescIcon; // 0x80
		::System::String* Title; // 0x90
		::System::Int32 ProgressRight; // 0x98
		::UnityEngine::Color DescIconColor; // 0x9C
		::System::Int64 TimeCountDown; // 0xB0
		::UnityEngine::Color ProgressLeftColor; // 0xB8
		::System::Boolean IconDisabled; // 0xC8
		::System::Boolean QuestIconActive; // 0xC9
		::System::Boolean ShowIconText; // 0xCA
		::System::Int64 TimeOut; // 0xD0
		::System::Int32 ProgressLeft; // 0xD8
		::MoleMole::UIUrbanMapRightListRowNormalContext_EBgMode BgMode; // 0xDC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTLISTROWNORMALCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
