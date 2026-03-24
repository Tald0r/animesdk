#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_6DF27837FB59A88B_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x96903D0)
#define CLASS_2_6DF27837FB59A88B_METHOD_2_37917191637BFFF4_OFFSET UNITYSDK_OFFSET(0x9690220)
#define CLASS_2_6DF27837FB59A88B_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x9690480)
#define CLASS_2_6DF27837FB59A88B__CTOR_OFFSET UNITYSDK_OFFSET(0x9690470)

inline static constexpr unsigned int Class_2_6DF27837FB59A88B_TypeDefinitionIndex = 59574;

class Class_2_6DF27837FB59A88B : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_A8F5ABF31E066ED4* Field_2_2; // 0x18
	::Class_2_9E3E3CDA608A4F58* Field_2_1; // 0x20
	::UnityEngine::RectTransform* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DF27837FB59A88B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_37917191637BFFF4(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6DF27837FB59A88B_METHOD_2_37917191637BFFF4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DF27837FB59A88B_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6DF27837FB59A88B_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
