#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class MonoChaserConfig; }
namespace MoleMole { class UIControlCollection; }

#define CLASS_2_07F94AA48C3B4F12_1_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0xA42A710)
#define CLASS_2_07F94AA48C3B4F12_1_METHOD_2_4B641F764AEF5BEB_OFFSET UNITYSDK_OFFSET(0xA42A5A0)
#define CLASS_2_07F94AA48C3B4F12_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xA42A7C0)
#define CLASS_2_07F94AA48C3B4F12_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA42A7B0)

inline static constexpr unsigned int Class_2_07F94AA48C3B4F12_1_TypeDefinitionIndex = 64360;

class Class_2_07F94AA48C3B4F12_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_A8F5ABF31E066ED4* Field_2_0; // 0x18
	::MoleMole::MonoChaserConfig* Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07F94AA48C3B4F12_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4B641F764AEF5BEB(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_07F94AA48C3B4F12_1_METHOD_2_4B641F764AEF5BEB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_07F94AA48C3B4F12_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07F94AA48C3B4F12_1_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
