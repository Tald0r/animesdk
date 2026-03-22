#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }

#define CLASS_2_8B36B2DB492DBF9B_METHOD_2_445108444CB6DC1F_OFFSET UNITYSDK_OFFSET(0x92BEB50)
#define CLASS_2_8B36B2DB492DBF9B_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x92BEBF0)
#define CLASS_2_8B36B2DB492DBF9B__CTOR_OFFSET UNITYSDK_OFFSET(0x92BEBE0)

inline static constexpr unsigned int Class_2_8B36B2DB492DBF9B_TypeDefinitionIndex = 67179;

class Class_2_8B36B2DB492DBF9B : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoUITableScrollV2* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B36B2DB492DBF9B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_445108444CB6DC1F(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8B36B2DB492DBF9B_METHOD_2_445108444CB6DC1F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8B36B2DB492DBF9B_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
