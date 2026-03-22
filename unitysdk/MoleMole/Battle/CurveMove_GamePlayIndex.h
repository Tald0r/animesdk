#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_METHOD_2_113D492E8CB1C3A7_1_OFFSET UNITYSDK_OFFSET(0x9B328A0)
#define MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_METHOD_2_113D492E8CB1C3A7_OFFSET UNITYSDK_OFFSET(0x9B32600)
#define MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x36E8D0)
#define MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_METHOD_2_4B3633E534F4FF78_1_OFFSET UNITYSDK_OFFSET(0x9B326D0)
#define MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_METHOD_2_4B3633E534F4FF78_2_OFFSET UNITYSDK_OFFSET(0x9B32740)
#define MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_METHOD_2_4B3633E534F4FF78_3_OFFSET UNITYSDK_OFFSET(0x9B327B0)
#define MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_METHOD_2_4B3633E534F4FF78_4_OFFSET UNITYSDK_OFFSET(0x9B32900)
#define MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_METHOD_2_4B3633E534F4FF78_5_OFFSET UNITYSDK_OFFSET(0x9B32970)
#define MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_METHOD_2_4B3633E534F4FF78_OFFSET UNITYSDK_OFFSET(0x9B32660)
#define MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_TOSTRING_OFFSET UNITYSDK_OFFSET(0x36E820)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int CurveMove_GamePlayIndex_TypeDefinitionIndex = 69465;

	struct alignas(4) CurveMove_GamePlayIndex
	{
		::System::Int32 _value; // 0x10

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_TOSTRING_OFFSET))(this);
		}

		static ::System::Int32 Method_2_113D492E8CB1C3A7(::MoleMole::Battle::CurveMove_GamePlayIndex a1)
		{
			return ((::System::Int32(*)(::MoleMole::Battle::CurveMove_GamePlayIndex))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_METHOD_2_113D492E8CB1C3A7_OFFSET))(a1);
		}

		static ::System::Boolean Method_2_4B3633E534F4FF78(::MoleMole::Battle::CurveMove_GamePlayIndex a1, ::MoleMole::Battle::CurveMove_GamePlayIndex a2)
		{
			return ((::System::Boolean(*)(::MoleMole::Battle::CurveMove_GamePlayIndex, ::MoleMole::Battle::CurveMove_GamePlayIndex))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_METHOD_2_4B3633E534F4FF78_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_4B3633E534F4FF78_1(::MoleMole::Battle::CurveMove_GamePlayIndex a1, ::MoleMole::Battle::CurveMove_GamePlayIndex a2)
		{
			return ((::System::Boolean(*)(::MoleMole::Battle::CurveMove_GamePlayIndex, ::MoleMole::Battle::CurveMove_GamePlayIndex))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_METHOD_2_4B3633E534F4FF78_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_4B3633E534F4FF78_2(::MoleMole::Battle::CurveMove_GamePlayIndex a1, ::MoleMole::Battle::CurveMove_GamePlayIndex a2)
		{
			return ((::System::Boolean(*)(::MoleMole::Battle::CurveMove_GamePlayIndex, ::MoleMole::Battle::CurveMove_GamePlayIndex))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_METHOD_2_4B3633E534F4FF78_2_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_4B3633E534F4FF78_3(::MoleMole::Battle::CurveMove_GamePlayIndex a1, ::MoleMole::Battle::CurveMove_GamePlayIndex a2)
		{
			return ((::System::Boolean(*)(::MoleMole::Battle::CurveMove_GamePlayIndex, ::MoleMole::Battle::CurveMove_GamePlayIndex))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_METHOD_2_4B3633E534F4FF78_3_OFFSET))(a1, a2);
		}

		::System::String* Method_2_35EA095E1AFDD9C8()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
		}

		static ::MoleMole::Battle::CurveMove_GamePlayIndex Method_2_113D492E8CB1C3A7_1(::System::Int32 a1)
		{
			return ((::MoleMole::Battle::CurveMove_GamePlayIndex(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_METHOD_2_113D492E8CB1C3A7_1_OFFSET))(a1);
		}

		static ::System::Boolean Method_2_4B3633E534F4FF78_4(::MoleMole::Battle::CurveMove_GamePlayIndex a1, ::MoleMole::Battle::CurveMove_GamePlayIndex a2)
		{
			return ((::System::Boolean(*)(::MoleMole::Battle::CurveMove_GamePlayIndex, ::MoleMole::Battle::CurveMove_GamePlayIndex))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_METHOD_2_4B3633E534F4FF78_4_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_4B3633E534F4FF78_5(::MoleMole::Battle::CurveMove_GamePlayIndex a1, ::MoleMole::Battle::CurveMove_GamePlayIndex a2)
		{
			return ((::System::Boolean(*)(::MoleMole::Battle::CurveMove_GamePlayIndex, ::MoleMole::Battle::CurveMove_GamePlayIndex))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_METHOD_2_4B3633E534F4FF78_5_OFFSET))(a1, a2);
		}
	};
}
