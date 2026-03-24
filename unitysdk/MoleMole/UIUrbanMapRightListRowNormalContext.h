#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UIUrbanMapRightListRowNormalContext_EBgMode.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIURBANMAPRIGHTLISTROWNORMALCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x86B7100)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRightListRowNormalContext_TypeDefinitionIndex = 69358;

	class UIUrbanMapRightListRowNormalContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* IconTextNum; // 0x28
		::System::Func_1<::System::String*>* RawDescText; // 0x30
		::System::String* ProgressFormat; // 0x38
		::System::Func_1<::System::String*>* DescText; // 0x40
		::Foundation::AssetPath ProgressIcon; // 0x48
		::System::String* Title; // 0x58
		::System::String* RightTextKey; // 0x60
		::Foundation::AssetPath DescIcon; // 0x68
		::System::String* RightRawText; // 0x78
		::Foundation::AssetPath IconTextIcon; // 0x80
		::UnityEngine::Events::UnityAction* OnClick; // 0x90
		::System::Boolean QuestIconActive; // 0x98
		::System::Boolean ShowIconText; // 0x99
		::System::Boolean IconDisabled; // 0x9A
		::UnityEngine::Color ProgressLeftColor; // 0x9C
		::System::Int64 TimeOut; // 0xB0
		::UnityEngine::Color DescIconColor; // 0xB8
		::System::Int32 ProgressLeft; // 0xC8
		::MoleMole::UIUrbanMapRightListRowNormalContext_EBgMode BgMode; // 0xCC
		::System::Int32 ProgressRight; // 0xD0
		::System::Int64 TimeCountDown; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTLISTROWNORMALCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
