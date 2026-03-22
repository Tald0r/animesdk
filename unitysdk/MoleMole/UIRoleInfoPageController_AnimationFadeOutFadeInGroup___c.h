#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRoleInfoPageController_AnimationFadeOutFadeInData; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ANIMATIONFADEOUTFADEINGROUP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xADFA320)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ANIMATIONFADEOUTFADEINGROUP___C__CTOR_OFFSET UNITYSDK_OFFSET(0xADFA360)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ANIMATIONFADEOUTFADEINGROUP___C__PLAYGROUPFADEOUTFADEIN_B__4_0_OFFSET UNITYSDK_OFFSET(0xADFA370)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleInfoPageController_AnimationFadeOutFadeInGroup___c_TypeDefinitionIndex = 47509;

	class UIRoleInfoPageController_AnimationFadeOutFadeInGroup___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::MoleMole::UIRoleInfoPageController_AnimationFadeOutFadeInData*>** StaticGet___9__4_0()
		{
			return (::System::Comparison_1<::MoleMole::UIRoleInfoPageController_AnimationFadeOutFadeInData*>**)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoPageController_AnimationFadeOutFadeInGroup___c_TypeDefinitionIndex)->GetStaticField(0x3F120);
		}
		static ::MoleMole::UIRoleInfoPageController_AnimationFadeOutFadeInGroup___c** StaticGet___9()
		{
			return (::MoleMole::UIRoleInfoPageController_AnimationFadeOutFadeInGroup___c**)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoPageController_AnimationFadeOutFadeInGroup___c_TypeDefinitionIndex)->GetStaticField(0x3F128);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ANIMATIONFADEOUTFADEINGROUP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ANIMATIONFADEOUTFADEINGROUP___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _PlayGroupFadeOutFadeIn_b__4_0(::MoleMole::UIRoleInfoPageController_AnimationFadeOutFadeInData* x, ::MoleMole::UIRoleInfoPageController_AnimationFadeOutFadeInData* y)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIRoleInfoPageController_AnimationFadeOutFadeInData*, ::MoleMole::UIRoleInfoPageController_AnimationFadeOutFadeInData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ANIMATIONFADEOUTFADEINGROUP___C__PLAYGROUPFADEOUTFADEIN_B__4_0_OFFSET))(this, x, y);
		}
	};
}
