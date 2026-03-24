#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }

#define CLASS_2_7EF3ABD6A4B8C243_1_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x90676B0)
#define CLASS_2_7EF3ABD6A4B8C243_1_METHOD_2_4B475ED1269CF0A2_OFFSET UNITYSDK_OFFSET(0x9067510)
#define CLASS_2_7EF3ABD6A4B8C243_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x9067760)
#define CLASS_2_7EF3ABD6A4B8C243_1__CTOR_OFFSET UNITYSDK_OFFSET(0x9067750)

inline static constexpr unsigned int Class_2_7EF3ABD6A4B8C243_1_TypeDefinitionIndex = 42462;

class Class_2_7EF3ABD6A4B8C243_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_A8F5ABF31E066ED4* Field_2_0; // 0x18
	::Class_2_9E3E3CDA608A4F58* Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EF3ABD6A4B8C243_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4B475ED1269CF0A2(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7EF3ABD6A4B8C243_1_METHOD_2_4B475ED1269CF0A2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7EF3ABD6A4B8C243_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EF3ABD6A4B8C243_1_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
