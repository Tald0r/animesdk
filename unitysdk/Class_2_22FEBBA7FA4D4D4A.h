#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }

#define CLASS_2_22FEBBA7FA4D4D4A_METHOD_2_4B641F764AEF5BEB_OFFSET UNITYSDK_OFFSET(0x7960360)
#define CLASS_2_22FEBBA7FA4D4D4A_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x79604E0)
#define CLASS_2_22FEBBA7FA4D4D4A_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x79605B0)
#define CLASS_2_22FEBBA7FA4D4D4A__CTOR_OFFSET UNITYSDK_OFFSET(0x79605A0)

inline static constexpr unsigned int Class_2_22FEBBA7FA4D4D4A_TypeDefinitionIndex = 41231;

class Class_2_22FEBBA7FA4D4D4A : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_A8F5ABF31E066ED4* Field_2_1; // 0x18
	::Class_2_A8F5ABF31E066ED4* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22FEBBA7FA4D4D4A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4B641F764AEF5BEB(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_22FEBBA7FA4D4D4A_METHOD_2_4B641F764AEF5BEB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22FEBBA7FA4D4D4A_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_22FEBBA7FA4D4D4A_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
