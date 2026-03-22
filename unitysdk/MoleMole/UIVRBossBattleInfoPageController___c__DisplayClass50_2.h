#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_44EFB945CAE441A3;
class Class_2_208CC9941471731A_188;
class Class_2_208CC9941471731A_772;
namespace MoleMole { class UIVRBossBattleInfoPageController___c__DisplayClass50_1; }

#define MOLEMOLE_UIVRBOSSBATTLEINFOPAGECONTROLLER___C__DISPLAYCLASS50_2__CTOR_OFFSET UNITYSDK_OFFSET(0xAAAA090)
#define MOLEMOLE_UIVRBOSSBATTLEINFOPAGECONTROLLER___C__DISPLAYCLASS50_2__GOSINGLEPLAYREAL_B__3_OFFSET UNITYSDK_OFFSET(0xAAAA0A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVRBossBattleInfoPageController___c__DisplayClass50_2_TypeDefinitionIndex = 37383;

	class UIVRBossBattleInfoPageController___c__DisplayClass50_2 : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_188* difficulty; // 0x10
		::MoleMole::UIVRBossBattleInfoPageController___c__DisplayClass50_1* CS___8__locals2; // 0x18
		::Class_2_208CC9941471731A_772* questData; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSBATTLEINFOPAGECONTROLLER___C__DISPLAYCLASS50_2__CTOR_OFFSET))(this);
		}

		::System::Void _GoSinglePlayReal_b__3(::Class_1_44EFB945CAE441A3* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_44EFB945CAE441A3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSBATTLEINFOPAGECONTROLLER___C__DISPLAYCLASS50_2__GOSINGLEPLAYREAL_B__3_OFFSET))(this, data);
		}
	};
}
