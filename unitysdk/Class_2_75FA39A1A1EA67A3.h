#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIActivitySearchObjectWidgetController; }
namespace MoleMole { class UIControlCollection; }
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_75FA39A1A1EA67A3_METHOD_2_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0xE9834B0)
#define CLASS_2_75FA39A1A1EA67A3_METHOD_2_B6EEC4B10357AB73_OFFSET UNITYSDK_OFFSET(0xE983260)
#define CLASS_2_75FA39A1A1EA67A3_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xE983620)
#define CLASS_2_75FA39A1A1EA67A3__CTOR_OFFSET UNITYSDK_OFFSET(0xE983610)

inline static constexpr unsigned int Class_2_75FA39A1A1EA67A3_TypeDefinitionIndex = 45222;

class Class_2_75FA39A1A1EA67A3 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_60DDD9C206686F44* Field_2_4; // 0x18
	::Class_2_60DDD9C206686F44* Field_2_5; // 0x20
	::Class_2_60DDD9C206686F44* Field_2_3; // 0x28
	::Class_2_A8F5ABF31E066ED4* Field_2_2; // 0x30
	::Class_3_647A206587033F4E<::MoleMole::UIActivitySearchObjectWidgetController*>* Field_2_1; // 0x38
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75FA39A1A1EA67A3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B6EEC4B10357AB73(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_75FA39A1A1EA67A3_METHOD_2_B6EEC4B10357AB73_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_75FA39A1A1EA67A3_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75FA39A1A1EA67A3_METHOD_2_52607DE4C357D269_OFFSET))(this);
	}
};
