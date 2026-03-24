#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1F76884FC39FD584;
class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_392BAA89F16E9A29_METHOD_2_5DE301B3C0032BA5_OFFSET UNITYSDK_OFFSET(0x7FE6D90)
#define CLASS_2_392BAA89F16E9A29_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x7FE6EC0)
#define CLASS_2_392BAA89F16E9A29__CTOR_OFFSET UNITYSDK_OFFSET(0x7FE6EB0)

inline static constexpr unsigned int Class_2_392BAA89F16E9A29_TypeDefinitionIndex = 78251;

class Class_2_392BAA89F16E9A29 : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoUITableScrollV2* Field_2_0; // 0x18
	::Class_2_1F76884FC39FD584* Field_2_2; // 0x20
	::UnityEngine::RectTransform* Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_392BAA89F16E9A29__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5DE301B3C0032BA5(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_392BAA89F16E9A29_METHOD_2_5DE301B3C0032BA5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_392BAA89F16E9A29_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
