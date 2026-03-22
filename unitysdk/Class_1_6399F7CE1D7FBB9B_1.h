#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_737;
class Class_2_AA2DF3435829EFF0_16;
class Class_2_AA2DF3435829EFF0_21;

#define CLASS_1_6399F7CE1D7FBB9B_1_METHOD_1_3C96146C48B37636_OFFSET UNITYSDK_OFFSET(0x194E8D20)
#define CLASS_1_6399F7CE1D7FBB9B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x194E8D10)

inline static constexpr unsigned int Class_1_6399F7CE1D7FBB9B_1_TypeDefinitionIndex = 79889;

class Class_1_6399F7CE1D7FBB9B_1 : public ::System::Object
{
public:
	::Class_2_AA2DF3435829EFF0_16* Field_1_1; // 0x10
	::Class_2_AA2DF3435829EFF0_21* Field_1_0; // 0x18

	::System::Void _ctor(::Class_2_AA2DF3435829EFF0_21* a1, ::Class_2_AA2DF3435829EFF0_16* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AA2DF3435829EFF0_21*, ::Class_2_AA2DF3435829EFF0_16*))((::PBYTE)hIl2Cpp + CLASS_1_6399F7CE1D7FBB9B_1__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_737* Method_1_3C96146C48B37636(::System::Int32 a1, ::System::UInt32 a2)
	{
		return ((::Class_0_16E4307DCC419505_737*(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6399F7CE1D7FBB9B_1_METHOD_1_3C96146C48B37636_OFFSET))(this, a1, a2);
	}
};
