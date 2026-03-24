#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

#define NPCCROWD_NPCWPPATHFINDERDEBUGGERDRAWSETTING__CCTOR_OFFSET UNITYSDK_OFFSET(0x6A089A0)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCWPPathFinderDebuggerDrawSetting_TypeDefinitionIndex = 58709;

	class NPCWPPathFinderDebuggerDrawSetting : public ::System::Object
	{
	public:
		static ::UnityEngine::Color* StaticGet_LineColorDisable()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(NPCWPPathFinderDebuggerDrawSetting_TypeDefinitionIndex)->GetStaticField(0xFDD0);
		}
		static ::System::Single* StaticGet_NodeCapsuleHalfHeight()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCWPPathFinderDebuggerDrawSetting_TypeDefinitionIndex)->GetStaticField(0xFDE0);
		}
		static ::System::Single* StaticGet_NodeCapsuleRaidus()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCWPPathFinderDebuggerDrawSetting_TypeDefinitionIndex)->GetStaticField(0xFDE4);
		}
		static ::UnityEngine::Color* StaticGet_LineColorForward()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(NPCWPPathFinderDebuggerDrawSetting_TypeDefinitionIndex)->GetStaticField(0xFDE8);
		}
		static ::UnityEngine::Color* StaticGet_NodeColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(NPCWPPathFinderDebuggerDrawSetting_TypeDefinitionIndex)->GetStaticField(0xFDF8);
		}
		static ::UnityEngine::Color* StaticGet_LineColorBack()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(NPCWPPathFinderDebuggerDrawSetting_TypeDefinitionIndex)->GetStaticField(0xFE08);
		}
		static ::UnityEngine::Color* StaticGet_NodeColorDisable()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(NPCWPPathFinderDebuggerDrawSetting_TypeDefinitionIndex)->GetStaticField(0xFE18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCWPPATHFINDERDEBUGGERDRAWSETTING__CCTOR_OFFSET))();
		}
	};
}
