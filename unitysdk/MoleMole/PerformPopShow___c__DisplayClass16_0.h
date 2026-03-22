#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class PerformPopShow; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_PERFORMPOPSHOW___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x99415A0)
#define MOLEMOLE_PERFORMPOPSHOW___C__DISPLAYCLASS16_0__PLAY_B__0_OFFSET UNITYSDK_OFFSET(0x99415B0)
#define MOLEMOLE_PERFORMPOPSHOW___C__DISPLAYCLASS16_0__PLAY_B__2_OFFSET UNITYSDK_OFFSET(0x9941BE0)
#define MOLEMOLE_PERFORMPOPSHOW___C__DISPLAYCLASS16_0__PLAY_B__4_OFFSET UNITYSDK_OFFSET(0x9941C30)
#define MOLEMOLE_PERFORMPOPSHOW___C__DISPLAYCLASS16_0__PLAY_B__5_OFFSET UNITYSDK_OFFSET(0x99418B0)
#define MOLEMOLE_PERFORMPOPSHOW___C__DISPLAYCLASS16_0__PLAY_B__6_OFFSET UNITYSDK_OFFSET(0x9941B70)
#define MOLEMOLE_PERFORMPOPSHOW___C__DISPLAYCLASS16_0__PLAY_B__8_OFFSET UNITYSDK_OFFSET(0x9941950)

namespace MoleMole
{
	inline static constexpr unsigned int PerformPopShow___c__DisplayClass16_0_TypeDefinitionIndex = 70350;

	class PerformPopShow___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::System::Action* __9__8; // 0x10
		::MoleMole::PerformPopShow* __4__this; // 0x18
		::System::Action* __9__6; // 0x20
		::System::Action_1<::Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF>* __9__5; // 0x28
		::System::Boolean skipFinish; // 0x30
		::System::Boolean finishChat; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _Play_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW___C__DISPLAYCLASS16_0__PLAY_B__0_OFFSET))(this);
		}

		::System::Void _Play_b__5(::Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF _)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW___C__DISPLAYCLASS16_0__PLAY_B__5_OFFSET))(this, _);
		}

		::System::Void _Play_b__8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW___C__DISPLAYCLASS16_0__PLAY_B__8_OFFSET))(this);
		}

		::System::Void _Play_b__6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW___C__DISPLAYCLASS16_0__PLAY_B__6_OFFSET))(this);
		}

		::System::Void _Play_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW___C__DISPLAYCLASS16_0__PLAY_B__2_OFFSET))(this);
		}

		::System::Void _Play_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW___C__DISPLAYCLASS16_0__PLAY_B__4_OFFSET))(this);
		}
	};
}
