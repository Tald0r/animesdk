#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CameraShotData_Enum_3_60063ED21D7DBAFB.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class CameraShotData; }
namespace System { class Action; }

#define STRUCT_2_C457B755E12E9DD0_METHOD_2_2D907FC2E8977328_OFFSET UNITYSDK_OFFSET(0x2F89C0)
#define STRUCT_2_C457B755E12E9DD0_METHOD_2_505112621C27030C_OFFSET UNITYSDK_OFFSET(0x2F8920)
#define STRUCT_2_C457B755E12E9DD0_METHOD_2_99ABCEC8CAD0BB3A_OFFSET UNITYSDK_OFFSET(0x2F8910)
#define STRUCT_2_C457B755E12E9DD0_METHOD_2_C1EB52A4F4431ADE_OFFSET UNITYSDK_OFFSET(0x2F88F0)

inline static constexpr unsigned int Struct_2_C457B755E12E9DD0_TypeDefinitionIndex = 53246;

struct alignas(8) Struct_2_C457B755E12E9DD0
{
	::System::Action* Field_2_0; // 0x10

	::System::Void Method_2_C1EB52A4F4431ADE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C457B755E12E9DD0_METHOD_2_C1EB52A4F4431ADE_OFFSET))(this);
	}

	::System::Void Method_2_99ABCEC8CAD0BB3A(::System::UInt32 a1, ::MoleMole::CameraShotData* a2, ::MoleMole::CameraShotData_Enum_3_60063ED21D7DBAFB a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::CameraShotData*, ::MoleMole::CameraShotData_Enum_3_60063ED21D7DBAFB))((::PBYTE)hIl2Cpp + STRUCT_2_C457B755E12E9DD0_METHOD_2_99ABCEC8CAD0BB3A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_505112621C27030C(::System::UInt32 a1, ::MoleMole::CameraShotData* a2, ::MoleMole::CameraShotData_Enum_3_60063ED21D7DBAFB a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::CameraShotData*, ::MoleMole::CameraShotData_Enum_3_60063ED21D7DBAFB))((::PBYTE)hIl2Cpp + STRUCT_2_C457B755E12E9DD0_METHOD_2_505112621C27030C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_2D907FC2E8977328(::MoleMole::CameraShotData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraShotData*))((::PBYTE)hIl2Cpp + STRUCT_2_C457B755E12E9DD0_METHOD_2_2D907FC2E8977328_OFFSET))(this, a1);
	}
};
