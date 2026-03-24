#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_5074B5C2BB677A1A_Class_2_9DF40D1BD5CA716C;
class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_5074B5C2BB677A1A_METHOD_2_43ED31B02AD5E38E_OFFSET UNITYSDK_OFFSET(0xA761430)
#define CLASS_2_5074B5C2BB677A1A_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0xA761600)
#define CLASS_2_5074B5C2BB677A1A_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xA7616D0)
#define CLASS_2_5074B5C2BB677A1A__CTOR_OFFSET UNITYSDK_OFFSET(0xA7616C0)

inline static constexpr unsigned int Class_2_5074B5C2BB677A1A_TypeDefinitionIndex = 44012;

class Class_2_5074B5C2BB677A1A : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_1; // 0x18
	::Class_2_0D31A1661D004892<::Class_2_5074B5C2BB677A1A_Class_2_9DF40D1BD5CA716C*>* Field_2_3; // 0x20
	::MonoUITableScrollV2* Field_2_2; // 0x28
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5074B5C2BB677A1A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_43ED31B02AD5E38E(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5074B5C2BB677A1A_METHOD_2_43ED31B02AD5E38E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5074B5C2BB677A1A_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5074B5C2BB677A1A_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
