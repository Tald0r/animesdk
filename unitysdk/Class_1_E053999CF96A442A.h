#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_1D8042ACFA8304FC.h"
#include "unitysdk/Enum_3_DF7176FD9DD7E4C3.h"
#include "unitysdk/System/Object.h"

class Class_3_384140540D6187FE;
class Class_3_3BE9E985CC6DA44B;
namespace System { class String; }

#define CLASS_1_E053999CF96A442A__CTOR_1_OFFSET UNITYSDK_OFFSET(0x8FE29B0)
#define CLASS_1_E053999CF96A442A__CTOR_2_OFFSET UNITYSDK_OFFSET(0x8FE2A30)
#define CLASS_1_E053999CF96A442A__CTOR_OFFSET UNITYSDK_OFFSET(0x8FE29A0)

inline static constexpr unsigned int Class_1_E053999CF96A442A_TypeDefinitionIndex = 42687;

class Class_1_E053999CF96A442A : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_4; // 0x18
	::System::String* Field_1_3; // 0x20
	::System::String* Field_1_8; // 0x28
	::System::String* Field_1_2; // 0x30
	::System::String* Field_1_1; // 0x38
	::System::String* Field_1_5; // 0x40
	::System::String* Field_1_9; // 0x48
	::System::Int32 Field_1_6; // 0x50
	::Enum_3_DF7176FD9DD7E4C3 Field_1_14; // 0x54
	::Enum_3_1D8042ACFA8304FC Field_1_13; // 0x58
	::System::Int32 Field_1_7; // 0x5C
	::System::Boolean Field_1_10; // 0x60
	::System::Boolean Field_1_11; // 0x61
	::System::Boolean Field_1_15; // 0x62
	::System::Int32 Field_1_12; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E053999CF96A442A__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_3_3BE9E985CC6DA44B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_3BE9E985CC6DA44B*))((::PBYTE)hIl2Cpp + CLASS_1_E053999CF96A442A__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void _ctor_2(::Class_3_384140540D6187FE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_384140540D6187FE*))((::PBYTE)hIl2Cpp + CLASS_1_E053999CF96A442A__CTOR_2_OFFSET))(this, a1);
	}
};
