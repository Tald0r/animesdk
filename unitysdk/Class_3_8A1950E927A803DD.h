#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"
#include "unitysdk/Class_3_B51C9D0AAAA6A5F0_Enum_3_84D933D686775DBF.h"
#include "unitysdk/MoleMole/Config/EnterBattleState.h"

class Class_1_8289F2785D9AA990;
class Class_3_B51C9D0AAAA6A5F0;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define CLASS_3_8A1950E927A803DD_METHOD_3_0C40FF9A49225CDB_OFFSET UNITYSDK_OFFSET(0x66D6380)
#define CLASS_3_8A1950E927A803DD_METHOD_3_44DA34024CBAB39F_OFFSET UNITYSDK_OFFSET(0x66D6690)
#define CLASS_3_8A1950E927A803DD_METHOD_3_4E8E91BC613BA2A1_OFFSET UNITYSDK_OFFSET(0x66D6780)
#define CLASS_3_8A1950E927A803DD_METHOD_3_6919705209F234E2_OFFSET UNITYSDK_OFFSET(0x66D5EC0)
#define CLASS_3_8A1950E927A803DD_METHOD_3_884500FCFE6BD097_OFFSET UNITYSDK_OFFSET(0x66D60F0)
#define CLASS_3_8A1950E927A803DD_METHOD_3_B0BEE3C610C65DF9_OFFSET UNITYSDK_OFFSET(0x66D5E40)
#define CLASS_3_8A1950E927A803DD__CTOR_OFFSET UNITYSDK_OFFSET(0x66D5E20)

inline static constexpr unsigned int Class_3_8A1950E927A803DD_TypeDefinitionIndex = 49439;

class Class_3_8A1950E927A803DD : public ::Class_2_F33340E023067DAF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8A1950E927A803DD__CTOR_OFFSET))(this);
	}

	static ::System::Boolean Method_3_B0BEE3C610C65DF9(::Class_1_8289F2785D9AA990* a1)
	{
		return ((::System::Boolean(*)(::Class_1_8289F2785D9AA990*))((::PBYTE)hIl2Cpp + CLASS_3_8A1950E927A803DD_METHOD_3_B0BEE3C610C65DF9_OFFSET))(a1);
	}

	static ::System::Void Method_3_6919705209F234E2(::System::String* a1, ::MoleMole::Config::EnterBattleState a2, ::Class_3_B51C9D0AAAA6A5F0* a3)
	{
		return ((::System::Void(*)(::System::String*, ::MoleMole::Config::EnterBattleState, ::Class_3_B51C9D0AAAA6A5F0*))((::PBYTE)hIl2Cpp + CLASS_3_8A1950E927A803DD_METHOD_3_6919705209F234E2_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_44DA34024CBAB39F(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::EnterBattleState a2, ::Class_3_B51C9D0AAAA6A5F0_Enum_3_84D933D686775DBF a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::EnterBattleState, ::Class_3_B51C9D0AAAA6A5F0_Enum_3_84D933D686775DBF))((::PBYTE)hIl2Cpp + CLASS_3_8A1950E927A803DD_METHOD_3_44DA34024CBAB39F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_884500FCFE6BD097(::System::String* a1, ::Class_3_B51C9D0AAAA6A5F0* a2)
	{
		return ((::System::Void(*)(::System::String*, ::Class_3_B51C9D0AAAA6A5F0*))((::PBYTE)hIl2Cpp + CLASS_3_8A1950E927A803DD_METHOD_3_884500FCFE6BD097_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_0C40FF9A49225CDB(::MoleMole::Config::EnterBattleState a1, ::Class_3_B51C9D0AAAA6A5F0* a2, ::Class_3_B51C9D0AAAA6A5F0_Enum_3_84D933D686775DBF a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::EnterBattleState, ::Class_3_B51C9D0AAAA6A5F0*, ::Class_3_B51C9D0AAAA6A5F0_Enum_3_84D933D686775DBF, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_8A1950E927A803DD_METHOD_3_0C40FF9A49225CDB_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_4E8E91BC613BA2A1(::MoleMole::Config::EnterBattleState a1, ::Class_3_B51C9D0AAAA6A5F0* a2)
	{
		return ((::System::Void(*)(::MoleMole::Config::EnterBattleState, ::Class_3_B51C9D0AAAA6A5F0*))((::PBYTE)hIl2Cpp + CLASS_3_8A1950E927A803DD_METHOD_3_4E8E91BC613BA2A1_OFFSET))(a1, a2);
	}
};
