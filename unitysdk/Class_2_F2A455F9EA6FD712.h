#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralIconCardRarityWidgetController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_A2BF74BADF6F7D16;

#define CLASS_2_F2A455F9EA6FD712_METHOD_2_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0xB424890)
#define CLASS_2_F2A455F9EA6FD712_METHOD_2_8AE01EFA7526266A_OFFSET UNITYSDK_OFFSET(0xB424620)
#define CLASS_2_F2A455F9EA6FD712_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xB424A00)
#define CLASS_2_F2A455F9EA6FD712__CTOR_OFFSET UNITYSDK_OFFSET(0xB4249F0)

inline static constexpr unsigned int Class_2_F2A455F9EA6FD712_TypeDefinitionIndex = 56111;

class Class_2_F2A455F9EA6FD712 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x18
	::Class_2_A8F5ABF31E066ED4* Field_2_4; // 0x20
	::Class_2_60DDD9C206686F44* Field_2_6; // 0x28
	::Class_2_A8F5ABF31E066ED4* Field_2_3; // 0x30
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIGeneralIconCardRarityWidgetController*>* Field_2_0; // 0x38
	::Class_2_A8F5ABF31E066ED4* Field_2_1; // 0x40
	::Class_2_A8F5ABF31E066ED4* Field_2_2; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2A455F9EA6FD712__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8AE01EFA7526266A(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F2A455F9EA6FD712_METHOD_2_8AE01EFA7526266A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2A455F9EA6FD712_METHOD_2_52607DE4C357D269_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F2A455F9EA6FD712_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
