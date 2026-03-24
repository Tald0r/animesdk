#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_7BEEB90214042948_6_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x6486210)
#define CLASS_2_7BEEB90214042948_6_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x64862E0)
#define CLASS_2_7BEEB90214042948_6_METHOD_2_E29396CF1CC8FD8D_OFFSET UNITYSDK_OFFSET(0x6486010)
#define CLASS_2_7BEEB90214042948_6__CTOR_OFFSET UNITYSDK_OFFSET(0x64862D0)

inline static constexpr unsigned int Class_2_7BEEB90214042948_6_TypeDefinitionIndex = 69743;

class Class_2_7BEEB90214042948_6 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_9E3E3CDA608A4F58* Field_2_4; // 0x18
	::Class_2_A8F5ABF31E066ED4* Field_2_3; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x28
	::Class_2_9E3E3CDA608A4F58* Field_2_1; // 0x30
	::Class_2_A8F5ABF31E066ED4* Field_2_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BEEB90214042948_6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E29396CF1CC8FD8D(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7BEEB90214042948_6_METHOD_2_E29396CF1CC8FD8D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7BEEB90214042948_6_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BEEB90214042948_6_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
