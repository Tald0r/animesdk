#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_44EFB945CAE441A3;
class Class_3_48A3D3A34C52331D_29;
class Class_3_AA32EAE205D9293B_1;

#define MOLEMOLE_UIVRBOSSBATTLEINFOPAGECONTROLLER___C__DISPLAYCLASS50_3__CTOR_OFFSET UNITYSDK_OFFSET(0x790BDC0)
#define MOLEMOLE_UIVRBOSSBATTLEINFOPAGECONTROLLER___C__DISPLAYCLASS50_3__GOSINGLEPLAYREAL_B__5_OFFSET UNITYSDK_OFFSET(0x790BDD0)
#define MOLEMOLE_UIVRBOSSBATTLEINFOPAGECONTROLLER___C__DISPLAYCLASS50_3__GOSINGLEPLAYREAL_B__8_OFFSET UNITYSDK_OFFSET(0x790BF10)
#define MOLEMOLE_UIVRBOSSBATTLEINFOPAGECONTROLLER___C__DISPLAYCLASS50_3__GOSINGLEPLAYREAL_G___SENDMSG_7_OFFSET UNITYSDK_OFFSET(0x790BDE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVRBossBattleInfoPageController___c__DisplayClass50_3_TypeDefinitionIndex = 49343;

	class UIVRBossBattleInfoPageController___c__DisplayClass50_3 : public ::System::Object
	{
	public:
		::Class_1_44EFB945CAE441A3* data; // 0x10
		::Class_3_AA32EAE205D9293B_1* req; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSBATTLEINFOPAGECONTROLLER___C__DISPLAYCLASS50_3__CTOR_OFFSET))(this);
		}

		::System::Void _GoSinglePlayReal_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSBATTLEINFOPAGECONTROLLER___C__DISPLAYCLASS50_3__GOSINGLEPLAYREAL_B__5_OFFSET))(this);
		}

		::System::Void _GoSinglePlayReal_g___SendMsg_7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSBATTLEINFOPAGECONTROLLER___C__DISPLAYCLASS50_3__GOSINGLEPLAYREAL_G___SENDMSG_7_OFFSET))(this);
		}

		::System::Void _GoSinglePlayReal_b__8(::System::Boolean b, ::Class_3_48A3D3A34C52331D_29* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_3_48A3D3A34C52331D_29*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSBATTLEINFOPAGECONTROLLER___C__DISPLAYCLASS50_3__GOSINGLEPLAYREAL_B__8_OFFSET))(this, b, rsp);
		}
	};
}
