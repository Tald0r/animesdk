#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B971EC39BFB7701B.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/Struct_2_02E84E3D148EE908.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_133;
class Class_1_CC972ED73C1D3B07;
class Class_1_DD5EC22C01FA2117;

#define STRUCT_2_8658838487EB8905_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x33EA60)
#define STRUCT_2_8658838487EB8905_METHOD_2_54757B8B62FBF467_OFFSET UNITYSDK_OFFSET(0x33EA50)
#define STRUCT_2_8658838487EB8905_METHOD_2_8D7AEC97AE72DA8A_OFFSET UNITYSDK_OFFSET(0x33EAD0)
#define STRUCT_2_8658838487EB8905__CTOR_OFFSET UNITYSDK_OFFSET(0x33EA00)

inline static constexpr unsigned int Struct_2_8658838487EB8905_TypeDefinitionIndex = 36504;

struct alignas(8) Struct_2_8658838487EB8905
{
	::Struct_2_02E84E3D148EE908 Field_2_0; // 0x10
	::MoleMole::HollowChessboard::HollowChessboardUID Field_2_1; // 0x18
	::Class_1_CC972ED73C1D3B07* Field_2_2; // 0x20
	::Class_1_CC972ED73C1D3B07* Field_2_3; // 0x28
	::Class_1_DD5EC22C01FA2117* Field_2_4; // 0x30
	::Class_0_16E4307DCC419505_133* Field_2_5; // 0x38

	::System::Void _ctor(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::Class_1_DD5EC22C01FA2117* a2, ::Class_1_CC972ED73C1D3B07* a3, ::Class_1_CC972ED73C1D3B07* a4, ::Class_0_16E4307DCC419505_133* a5)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID, ::Class_1_DD5EC22C01FA2117*, ::Class_1_CC972ED73C1D3B07*, ::Class_1_CC972ED73C1D3B07*, ::Class_0_16E4307DCC419505_133*))((::PBYTE)hIl2Cpp + STRUCT_2_8658838487EB8905__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_54757B8B62FBF467()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8658838487EB8905_METHOD_2_54757B8B62FBF467_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8658838487EB8905_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_2_8D7AEC97AE72DA8A(::Enum_3_B971EC39BFB7701B a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_B971EC39BFB7701B))((::PBYTE)hIl2Cpp + STRUCT_2_8658838487EB8905_METHOD_2_8D7AEC97AE72DA8A_OFFSET))(this, a1);
	}
};
