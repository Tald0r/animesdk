#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

#define NPCCROWD_NPCWPPATHFINDERDEBUGGERDRAWSETTING__CCTOR_OFFSET UNITYSDK_OFFSET(0x6042FD0)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCWPPathFinderDebuggerDrawSetting_TypeDefinitionIndex = 42700;

	class NPCWPPathFinderDebuggerDrawSetting : public ::System::Object
	{
	public:
		static ::UnityEngine::Color* StaticGet_LineColorDisable()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(NPCWPPathFinderDebuggerDrawSetting_TypeDefinitionIndex)->GetStaticField(0xFA90);
		}
		static ::UnityEngine::Color* StaticGet_LineColorForward()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(NPCWPPathFinderDebuggerDrawSetting_TypeDefinitionIndex)->GetStaticField(0xFAA0);
		}
		static ::System::Single* StaticGet_NodeCapsuleRaidus()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCWPPathFinderDebuggerDrawSetting_TypeDefinitionIndex)->GetStaticField(0xFAB0);
		}
		static ::UnityEngine::Color* StaticGet_NodeColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(NPCWPPathFinderDebuggerDrawSetting_TypeDefinitionIndex)->GetStaticField(0xFAB4);
		}
		static ::UnityEngine::Color* StaticGet_NodeColorDisable()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(NPCWPPathFinderDebuggerDrawSetting_TypeDefinitionIndex)->GetStaticField(0xFAC4);
		}
		static ::UnityEngine::Color* StaticGet_LineColorBack()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(NPCWPPathFinderDebuggerDrawSetting_TypeDefinitionIndex)->GetStaticField(0xFAD4);
		}
		static ::System::Single* StaticGet_NodeCapsuleHalfHeight()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCWPPathFinderDebuggerDrawSetting_TypeDefinitionIndex)->GetStaticField(0xFAE4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCWPPATHFINDERDEBUGGERDRAWSETTING__CCTOR_OFFSET))();
		}
	};
}
