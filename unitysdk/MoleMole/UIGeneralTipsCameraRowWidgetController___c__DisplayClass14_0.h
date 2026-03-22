#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace DG::Tweening { class TweenCallback; }
namespace DG::Tweening::Core { template <typename T> class DOGetter_1; }
namespace DG::Tweening::Core { template <typename T> class DOSetter_1; }
namespace MoleMole { class UIGeneralTipsCameraRowWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8C0F9B0)
#define MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER___C__DISPLAYCLASS14_0__DOANIMATION_B__0_OFFSET UNITYSDK_OFFSET(0x8C0F9C0)
#define MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER___C__DISPLAYCLASS14_0__DOANIMATION_B__1_OFFSET UNITYSDK_OFFSET(0x8C0FDD0)
#define MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER___C__DISPLAYCLASS14_0__DOANIMATION_B__2_OFFSET UNITYSDK_OFFSET(0x8C0FAD0)
#define MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER___C__DISPLAYCLASS14_0__DOANIMATION_B__3_OFFSET UNITYSDK_OFFSET(0x8C0FD30)
#define MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER___C__DISPLAYCLASS14_0__DOANIMATION_B__4_OFFSET UNITYSDK_OFFSET(0x8C0FD40)
#define MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER___C__DISPLAYCLASS14_0__DOANIMATION_B__5_OFFSET UNITYSDK_OFFSET(0x8C0FD50)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralTipsCameraRowWidgetController___c__DisplayClass14_0_TypeDefinitionIndex = 70006;

	class UIGeneralTipsCameraRowWidgetController___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::System::Action* action; // 0x10
		::System::Action* __9__2; // 0x18
		::DG::Tweening::Core::DOGetter_1<::System::Single>* __9__3; // 0x20
		::DG::Tweening::TweenCallback* __9__5; // 0x28
		::MoleMole::UIGeneralTipsCameraRowWidgetController* __4__this; // 0x30
		::DG::Tweening::Core::DOSetter_1<::System::Single>* __9__4; // 0x38
		::System::Single targetWidth; // 0x40
		::System::Single length; // 0x44
		::UnityEngine::Vector2 finalSize; // 0x48
		::System::Single currentWidth; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoAnimation_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER___C__DISPLAYCLASS14_0__DOANIMATION_B__0_OFFSET))(this);
		}

		::System::Void _DoAnimation_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER___C__DISPLAYCLASS14_0__DOANIMATION_B__2_OFFSET))(this);
		}

		::System::Single _DoAnimation_b__3()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER___C__DISPLAYCLASS14_0__DOANIMATION_B__3_OFFSET))(this);
		}

		::System::Void _DoAnimation_b__4(::System::Single v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER___C__DISPLAYCLASS14_0__DOANIMATION_B__4_OFFSET))(this, v);
		}

		::System::Void _DoAnimation_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER___C__DISPLAYCLASS14_0__DOANIMATION_B__5_OFFSET))(this);
		}

		::System::Void _DoAnimation_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSCAMERAROWWIDGETCONTROLLER___C__DISPLAYCLASS14_0__DOANIMATION_B__1_OFFSET))(this);
		}
	};
}
