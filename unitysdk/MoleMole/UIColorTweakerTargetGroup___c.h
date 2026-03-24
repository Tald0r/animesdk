#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Component; }

#define MOLEMOLE_UICOLORTWEAKERTARGETGROUP___C_METHOD_1_4E7B8FA53EF62251_OFFSET UNITYSDK_OFFSET(0xADC2400)
#define MOLEMOLE_UICOLORTWEAKERTARGETGROUP___C_METHOD_1_72C2BDE9309D520F_OFFSET UNITYSDK_OFFSET(0xADC22B0)
#define MOLEMOLE_UICOLORTWEAKERTARGETGROUP___C_METHOD_1_D678849620C1CA8B_OFFSET UNITYSDK_OFFSET(0xADC2450)
#define MOLEMOLE_UICOLORTWEAKERTARGETGROUP___C_METHOD_1_DD3C283906E3FFDC_OFFSET UNITYSDK_OFFSET(0xADC23A0)
#define MOLEMOLE_UICOLORTWEAKERTARGETGROUP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xADC2260)
#define MOLEMOLE_UICOLORTWEAKERTARGETGROUP___C__CTOR_OFFSET UNITYSDK_OFFSET(0xADC22A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIColorTweakerTargetGroup___c_TypeDefinitionIndex = 57275;

	class UIColorTweakerTargetGroup___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::Component*, ::UnityEngine::Color>** StaticGet___9__14_3()
		{
			return (::System::Func_2<::UnityEngine::Component*, ::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(UIColorTweakerTargetGroup___c_TypeDefinitionIndex)->GetStaticField(0x3D5B0);
		}
		static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Color>** StaticGet___9__14_2()
		{
			return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(UIColorTweakerTargetGroup___c_TypeDefinitionIndex)->GetStaticField(0x3D5B8);
		}
		static ::System::Func_2<::UnityEngine::Component*, ::UnityEngine::Color>** StaticGet___9__14_1()
		{
			return (::System::Func_2<::UnityEngine::Component*, ::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(UIColorTweakerTargetGroup___c_TypeDefinitionIndex)->GetStaticField(0x3D5C0);
		}
		static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Color>** StaticGet___9__14_0()
		{
			return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(UIColorTweakerTargetGroup___c_TypeDefinitionIndex)->GetStaticField(0x3D5C8);
		}
		static ::MoleMole::UIColorTweakerTargetGroup___c** StaticGet___9()
		{
			return (::MoleMole::UIColorTweakerTargetGroup___c**)Il2CppClass::FromTypeDefinitionIndex(UIColorTweakerTargetGroup___c_TypeDefinitionIndex)->GetStaticField(0x3D5D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICOLORTWEAKERTARGETGROUP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOLORTWEAKERTARGETGROUP___C__CTOR_OFFSET))(this);
		}

		::UnityEngine::Color Method_1_72C2BDE9309D520F(::UnityEngine::Component* a1)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOLORTWEAKERTARGETGROUP___C_METHOD_1_72C2BDE9309D520F_OFFSET))(this, a1);
		}

		::System::Void Method_1_DD3C283906E3FFDC(::UnityEngine::Component* a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOLORTWEAKERTARGETGROUP___C_METHOD_1_DD3C283906E3FFDC_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Color Method_1_4E7B8FA53EF62251(::UnityEngine::Component* a1)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOLORTWEAKERTARGETGROUP___C_METHOD_1_4E7B8FA53EF62251_OFFSET))(this, a1);
		}

		::System::Void Method_1_D678849620C1CA8B(::UnityEngine::Component* a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOLORTWEAKERTARGETGROUP___C_METHOD_1_D678849620C1CA8B_OFFSET))(this, a1, a2);
		}
	};
}
