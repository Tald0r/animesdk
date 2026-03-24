#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
class Class_2_A8F5ABF31E066ED4;
class Class_2_ECD1219EEF95A7C2_Class_2_0D5D8405826EE6F8_27;
class Class_2_ECD1219EEF95A7C2_Class_2_ED75148EDFCDD026_1;
namespace MoleMole { class UIControlCollection; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_ECD1219EEF95A7C2_METHOD_2_2D8360ADEC831C05_OFFSET UNITYSDK_OFFSET(0x645ACD0)
#define CLASS_2_ECD1219EEF95A7C2_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x645AF50)
#define CLASS_2_ECD1219EEF95A7C2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x645B070)
#define CLASS_2_ECD1219EEF95A7C2__CTOR_OFFSET UNITYSDK_OFFSET(0x645B060)

inline static constexpr unsigned int Class_2_ECD1219EEF95A7C2_TypeDefinitionIndex = 62871;

class Class_2_ECD1219EEF95A7C2 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_9E3E3CDA608A4F58* Field_2_4; // 0x18
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x20
	::Class_2_0D31A1661D004892<::Class_2_ECD1219EEF95A7C2_Class_2_ED75148EDFCDD026_1*>* Field_2_1; // 0x28
	::Class_2_0D31A1661D004892<::Class_2_ECD1219EEF95A7C2_Class_2_0D5D8405826EE6F8_27*>* Field_2_2; // 0x30
	::Class_2_A8F5ABF31E066ED4* Field_2_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECD1219EEF95A7C2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D8360ADEC831C05(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_ECD1219EEF95A7C2_METHOD_2_2D8360ADEC831C05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECD1219EEF95A7C2_METHOD_2_737220D2233A9067_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_ECD1219EEF95A7C2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
