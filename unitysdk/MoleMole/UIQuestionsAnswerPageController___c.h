#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD79E6A0)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD79E6E0)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__PLAYTIMELINE_B__27_0_OFFSET UNITYSDK_OFFSET(0xD79E6F0)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__PLAYTIMELINE_B__27_1_OFFSET UNITYSDK_OFFSET(0xD79E700)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__PLAYTIMELINE_B__27_2_OFFSET UNITYSDK_OFFSET(0xD79E710)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswerPageController___c_TypeDefinitionIndex = 78275;

	class UIQuestionsAnswerPageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__27_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIQuestionsAnswerPageController___c_TypeDefinitionIndex)->GetStaticField(0x348B0);
		}
		static ::System::Action_1<::UnityEngine::Transform*>** StaticGet___9__27_0()
		{
			return (::System::Action_1<::UnityEngine::Transform*>**)Il2CppClass::FromTypeDefinitionIndex(UIQuestionsAnswerPageController___c_TypeDefinitionIndex)->GetStaticField(0x348B8);
		}
		static ::MoleMole::UIQuestionsAnswerPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIQuestionsAnswerPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIQuestionsAnswerPageController___c_TypeDefinitionIndex)->GetStaticField(0x348C0);
		}
		static ::System::Action** StaticGet___9__27_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIQuestionsAnswerPageController___c_TypeDefinitionIndex)->GetStaticField(0x348C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _PlayTimeline_b__27_0(::UnityEngine::Transform* tr)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__PLAYTIMELINE_B__27_0_OFFSET))(this, tr);
		}

		::System::Void _PlayTimeline_b__27_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__PLAYTIMELINE_B__27_1_OFFSET))(this);
		}

		::System::Void _PlayTimeline_b__27_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__PLAYTIMELINE_B__27_2_OFFSET))(this);
		}
	};
}
