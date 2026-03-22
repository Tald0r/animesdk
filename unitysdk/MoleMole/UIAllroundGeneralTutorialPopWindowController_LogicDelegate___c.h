#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7ECB9691B142D586;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIALLROUNDGENERALTUTORIALPOPWINDOWCONTROLLER_LOGICDELEGATE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBF23A10)
#define MOLEMOLE_UIALLROUNDGENERALTUTORIALPOPWINDOWCONTROLLER_LOGICDELEGATE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBF23A50)
#define MOLEMOLE_UIALLROUNDGENERALTUTORIALPOPWINDOWCONTROLLER_LOGICDELEGATE___C__REFRESHPAGE_B__39_0_OFFSET UNITYSDK_OFFSET(0xBF23A60)

namespace MoleMole
{
	inline static constexpr unsigned int UIAllroundGeneralTutorialPopWindowController_LogicDelegate___c_TypeDefinitionIndex = 76751;

	class UIAllroundGeneralTutorialPopWindowController_LogicDelegate___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7ECB9691B142D586*>** StaticGet___9__39_0()
		{
			return (::System::Action_1<::Class_1_7ECB9691B142D586*>**)Il2CppClass::FromTypeDefinitionIndex(UIAllroundGeneralTutorialPopWindowController_LogicDelegate___c_TypeDefinitionIndex)->GetStaticField(0x42600);
		}
		static ::MoleMole::UIAllroundGeneralTutorialPopWindowController_LogicDelegate___c** StaticGet___9()
		{
			return (::MoleMole::UIAllroundGeneralTutorialPopWindowController_LogicDelegate___c**)Il2CppClass::FromTypeDefinitionIndex(UIAllroundGeneralTutorialPopWindowController_LogicDelegate___c_TypeDefinitionIndex)->GetStaticField(0x42608);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIALLROUNDGENERALTUTORIALPOPWINDOWCONTROLLER_LOGICDELEGATE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIALLROUNDGENERALTUTORIALPOPWINDOWCONTROLLER_LOGICDELEGATE___C__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshPage_b__39_0(::Class_1_7ECB9691B142D586* vp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7ECB9691B142D586*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIALLROUNDGENERALTUTORIALPOPWINDOWCONTROLLER_LOGICDELEGATE___C__REFRESHPAGE_B__39_0_OFFSET))(this, vp);
		}
	};
}
