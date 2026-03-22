#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/Class_1_7B7970D0E94833DA.h"
#include "unitysdk/MoleMole/AICompareType.h"

class Class_3_750DA0E74FE20AAE;
class Class_3_F33F9DC5F4112336;
namespace System { class String; }

#define CLASS_2_57AD714CA60496DE_METHOD_2_A80279F3FDB3383E_OFFSET UNITYSDK_OFFSET(0x90B19C0)
#define CLASS_2_57AD714CA60496DE_METHOD_2_C6159FCF4A6D407A_OFFSET UNITYSDK_OFFSET(0x90B1280)
#define CLASS_2_57AD714CA60496DE_METHOD_2_CB093E2033B125C5_OFFSET UNITYSDK_OFFSET(0x90B18F0)
#define CLASS_2_57AD714CA60496DE__CTOR_OFFSET UNITYSDK_OFFSET(0x90B19B0)

inline static constexpr unsigned int Class_2_57AD714CA60496DE_TypeDefinitionIndex = 60367;

class Class_2_57AD714CA60496DE : public ::Class_1_7B7970D0E94833DA
{
public:
	::Class_3_F33F9DC5F4112336* Field_2_0; // 0x28
	::System::String* Field_2_3; // 0x30
	::MoleMole::AICompareType Field_2_7; // 0x38
	::System::Int32 Field_2_4; // 0x3C
	::System::Single Field_2_1; // 0x40
	::System::Single Field_2_8; // 0x44
	::System::Int32 Field_2_5; // 0x48
	::System::Boolean Field_2_2; // 0x4C
	::System::Int32 Field_2_6; // 0x50
	::System::Single Field_2_9; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57AD714CA60496DE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_C6159FCF4A6D407A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57AD714CA60496DE_METHOD_2_C6159FCF4A6D407A_OFFSET))(this);
	}

	::System::Void Method_2_A80279F3FDB3383E(::Class_3_F33F9DC5F4112336* a1, ::Class_3_750DA0E74FE20AAE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F33F9DC5F4112336*, ::Class_3_750DA0E74FE20AAE*))((::PBYTE)hIl2Cpp + CLASS_2_57AD714CA60496DE_METHOD_2_A80279F3FDB3383E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CB093E2033B125C5(::BehaviorDesigner::Runtime::Tasks::TaskStatus a1)
	{
		return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + CLASS_2_57AD714CA60496DE_METHOD_2_CB093E2033B125C5_OFFSET))(this, a1);
	}
};
