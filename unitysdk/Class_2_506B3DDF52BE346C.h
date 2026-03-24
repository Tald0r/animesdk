#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralNewHintWidgetController; }
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_506B3DDF52BE346C_METHOD_2_A52A279C28A2006E_OFFSET UNITYSDK_OFFSET(0xA591640)
#define CLASS_2_506B3DDF52BE346C_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0xA591830)
#define CLASS_2_506B3DDF52BE346C_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xA591990)
#define CLASS_2_506B3DDF52BE346C__CTOR_OFFSET UNITYSDK_OFFSET(0xA591980)

inline static constexpr unsigned int Class_2_506B3DDF52BE346C_TypeDefinitionIndex = 59422;

class Class_2_506B3DDF52BE346C : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_A8F5ABF31E066ED4* Field_2_1; // 0x18
	::Class_2_A8F5ABF31E066ED4* Field_2_2; // 0x20
	::Class_2_A8F5ABF31E066ED4* Field_2_0; // 0x28
	::Class_3_647A206587033F4E<::MoleMole::UIGeneralNewHintWidgetController*>* Field_2_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_506B3DDF52BE346C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A52A279C28A2006E(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_506B3DDF52BE346C_METHOD_2_A52A279C28A2006E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_506B3DDF52BE346C_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_506B3DDF52BE346C_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
