#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIFORBIDDENAREAPREPPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC63D7A0)
#define MOLEMOLE_UIFORBIDDENAREAPREPPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC63D7E0)
#define MOLEMOLE_UIFORBIDDENAREAPREPPAGECONTROLLER___C__REFRESHCHALLENGEVIEW_B__15_3_OFFSET UNITYSDK_OFFSET(0xC63D7F0)
#define MOLEMOLE_UIFORBIDDENAREAPREPPAGECONTROLLER___C__REFRESHCOLLECTVIEW_B__17_2_OFFSET UNITYSDK_OFFSET(0xC63DB30)
#define MOLEMOLE_UIFORBIDDENAREAPREPPAGECONTROLLER___C__REFRESHTALENTVIEW_B__16_2_OFFSET UNITYSDK_OFFSET(0xC63DA00)

namespace MoleMole
{
	inline static constexpr unsigned int UIForbiddenAreaPrepPageController___c_TypeDefinitionIndex = 42632;

	class UIForbiddenAreaPrepPageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__16_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIForbiddenAreaPrepPageController___c_TypeDefinitionIndex)->GetStaticField(0x3C380);
		}
		static ::MoleMole::UIForbiddenAreaPrepPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIForbiddenAreaPrepPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIForbiddenAreaPrepPageController___c_TypeDefinitionIndex)->GetStaticField(0x3C388);
		}
		static ::System::Action** StaticGet___9__15_3()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIForbiddenAreaPrepPageController___c_TypeDefinitionIndex)->GetStaticField(0x3C390);
		}
		static ::System::Action** StaticGet___9__17_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIForbiddenAreaPrepPageController___c_TypeDefinitionIndex)->GetStaticField(0x3C398);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORBIDDENAREAPREPPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORBIDDENAREAPREPPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshChallengeView_b__15_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORBIDDENAREAPREPPAGECONTROLLER___C__REFRESHCHALLENGEVIEW_B__15_3_OFFSET))(this);
		}

		::System::Void _RefreshTalentView_b__16_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORBIDDENAREAPREPPAGECONTROLLER___C__REFRESHTALENTVIEW_B__16_2_OFFSET))(this);
		}

		::System::Void _RefreshCollectView_b__17_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORBIDDENAREAPREPPAGECONTROLLER___C__REFRESHCOLLECTVIEW_B__17_2_OFFSET))(this);
		}
	};
}
