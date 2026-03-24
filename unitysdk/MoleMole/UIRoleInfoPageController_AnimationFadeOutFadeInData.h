#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_9E3E3CDA608A4F58;
namespace System { class String; }

#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ANIMATIONFADEOUTFADEINDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0xA244BD0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ANIMATIONFADEOUTFADEINDATA_GET_FADEOUTLEN_OFFSET UNITYSDK_OFFSET(0xA244CC0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ANIMATIONFADEOUTFADEINDATA_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0xA244DF0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ANIMATIONFADEOUTFADEINDATA_PLAYFADEOUT_OFFSET UNITYSDK_OFFSET(0xA244D60)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ANIMATIONFADEOUTFADEINDATA_SAMPLEFADEOUT_OFFSET UNITYSDK_OFFSET(0xA244E80)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER_ANIMATIONFADEOUTFADEINDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA244CB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleInfoPageController_AnimationFadeOutFadeInData_TypeDefinitionIndex = 74625;

	class UIRoleInfoPageController_AnimationFadeOutFadeInData : public ::System::Object
	{
	public:
		::System::String* m_fadeIn; // 0x10
		::System::String* m_fadeOut; // 0x18
		::Class_2_9E3E3CDA608A4F58* m_anim; // 0x20

		::System::Void _ctor(::Class_2_9E3E3CDA608A4F58* anim, ::System::String* fadeout, ::System::String* fadein)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_9E3E3CDA608A4F58*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ANIMATIONFADEOUTFADEINDATA__CTOR_OFFSET))(this, anim, fadeout, fadein);
		}

		::System::Boolean Equals(::MoleMole::UIRoleInfoPageController_AnimationFadeOutFadeInData* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIRoleInfoPageController_AnimationFadeOutFadeInData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ANIMATIONFADEOUTFADEINDATA_EQUALS_OFFSET))(this, other);
		}

		::System::Single get_FadeOutLen()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ANIMATIONFADEOUTFADEINDATA_GET_FADEOUTLEN_OFFSET))(this);
		}

		::System::Void PlayFadeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ANIMATIONFADEOUTFADEINDATA_PLAYFADEOUT_OFFSET))(this);
		}

		::System::Void PlayFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ANIMATIONFADEOUTFADEINDATA_PLAYFADEIN_OFFSET))(this);
		}

		::System::Void SampleFadeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER_ANIMATIONFADEOUTFADEINDATA_SAMPLEFADEOUT_OFFSET))(this);
		}
	};
}
