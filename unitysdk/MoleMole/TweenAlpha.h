#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Tween_1.h"

namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Graphic; }

#define MOLEMOLE_TWEENALPHA_BEGIN_OFFSET UNITYSDK_OFFSET(0x8FA7770)
#define MOLEMOLE_TWEENALPHA_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x8FA72F0)
#define MOLEMOLE_TWEENALPHA_METHOD_7_0455744A788080C5_OFFSET UNITYSDK_OFFSET(0x8FA7200)
#define MOLEMOLE_TWEENALPHA_METHOD_7_0B99C03107E8A6B9_OFFSET UNITYSDK_OFFSET(0x8FA74D0)
#define MOLEMOLE_TWEENALPHA_METHOD_7_50C397B5C3CE86EA_OFFSET UNITYSDK_OFFSET(0x8FA79D0)
#define MOLEMOLE_TWEENALPHA_METHOD_7_5C0BDCAA1FC45B61_OFFSET UNITYSDK_OFFSET(0x8FA7390)
#define MOLEMOLE_TWEENALPHA_METHOD_7_71AD79076E016A6C_OFFSET UNITYSDK_OFFSET(0x8FA7650)
#define MOLEMOLE_TWEENALPHA_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x8FA7300)
#define MOLEMOLE_TWEENALPHA_START_OFFSET UNITYSDK_OFFSET(0x8FA70C0)
#define MOLEMOLE_TWEENALPHA__CTOR_OFFSET UNITYSDK_OFFSET(0x8FA7930)
#define MOLEMOLE_TWEENALPHA___BASE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x8FA7950)
#define MOLEMOLE_TWEENALPHA___BASE_START_OFFSET UNITYSDK_OFFSET(0x8FA7960)

namespace MoleMole
{
	inline static constexpr unsigned int TweenAlpha_TypeDefinitionIndex = 78014;

	class TweenAlpha : public ::MoleMole::Tween_1<::System::Single>
	{
	public:
		::System::Boolean includeChildren; // 0x88
		::System::Boolean Field_7_1; // 0x89
		::System::Single Field_7_2; // 0x8C
		::UnityEngine::Transform* Field_7_3; // 0x90
		::Il2CppArray<::UnityEngine::UI::Graphic*>* Field_7_4; // 0x98
		::UnityEngine::CanvasGroup* Field_7_5; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENALPHA__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENALPHA_START_OFFSET))(this);
		}

		::System::Single get_value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENALPHA_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENALPHA_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Void Method_7_71AD79076E016A6C(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENALPHA_METHOD_7_71AD79076E016A6C_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::TweenAlpha* Begin(::UnityEngine::GameObject* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::MoleMole::TweenAlpha*(*)(::UnityEngine::GameObject*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENALPHA_BEGIN_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Void __base_set_value(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENALPHA___BASE_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Void __base_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENALPHA___BASE_START_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::UI::Graphic*>* Method_7_50C397B5C3CE86EA()
		{
			return ((::Il2CppArray<::UnityEngine::UI::Graphic*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENALPHA_METHOD_7_50C397B5C3CE86EA_OFFSET))(this);
		}

		::UnityEngine::CanvasGroup* Method_7_0455744A788080C5()
		{
			return ((::UnityEngine::CanvasGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENALPHA_METHOD_7_0455744A788080C5_OFFSET))(this);
		}

		::UnityEngine::Transform* Method_7_5C0BDCAA1FC45B61()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENALPHA_METHOD_7_5C0BDCAA1FC45B61_OFFSET))(this);
		}

		::System::Void Method_7_0B99C03107E8A6B9(::UnityEngine::Transform* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENALPHA_METHOD_7_0B99C03107E8A6B9_OFFSET))(this, a1, a2);
		}
	};
}
