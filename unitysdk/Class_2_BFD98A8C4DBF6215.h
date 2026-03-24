#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class ImgTextParserBase; }
namespace MoleMole { class UIControlCollection; }

#define CLASS_2_BFD98A8C4DBF6215_METHOD_2_5B900C0AEB2813BC_OFFSET UNITYSDK_OFFSET(0x8FBE790)
#define CLASS_2_BFD98A8C4DBF6215_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x8FBE990)
#define CLASS_2_BFD98A8C4DBF6215_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x8FBEAB0)
#define CLASS_2_BFD98A8C4DBF6215__CTOR_OFFSET UNITYSDK_OFFSET(0x8FBEAA0)

inline static constexpr unsigned int Class_2_BFD98A8C4DBF6215_TypeDefinitionIndex = 60371;

class Class_2_BFD98A8C4DBF6215 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_A8F5ABF31E066ED4* Field_2_3; // 0x18
	::Class_2_60DDD9C206686F44* Field_2_2; // 0x20
	::MoleMole::ImgTextParserBase* Field_2_0; // 0x28
	::Class_2_A8F5ABF31E066ED4* Field_2_1; // 0x30
	::Class_2_A8F5ABF31E066ED4* Field_2_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFD98A8C4DBF6215__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5B900C0AEB2813BC(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BFD98A8C4DBF6215_METHOD_2_5B900C0AEB2813BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BFD98A8C4DBF6215_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFD98A8C4DBF6215_METHOD_2_737220D2233A9067_OFFSET))(this);
	}
};
