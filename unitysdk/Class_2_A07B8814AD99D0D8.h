#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UICircleTransition; }

#define CLASS_2_A07B8814AD99D0D8_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x612E4A0)
#define CLASS_2_A07B8814AD99D0D8_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x612E590)
#define CLASS_2_A07B8814AD99D0D8_METHOD_2_E6D0AF02E91804D2_OFFSET UNITYSDK_OFFSET(0x612E330)
#define CLASS_2_A07B8814AD99D0D8_METHOD_2_EBA1DA59141868AB_OFFSET UNITYSDK_OFFSET(0x612E190)
#define CLASS_2_A07B8814AD99D0D8__CTOR_OFFSET UNITYSDK_OFFSET(0x612E580)

inline static constexpr unsigned int Class_2_A07B8814AD99D0D8_TypeDefinitionIndex = 56035;

class Class_2_A07B8814AD99D0D8 : public ::Class_1_EEA0111A28582B57
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UICircleTransition*>* Field_2_1; // 0x18
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x20
	::UnityEngine::Transform* Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A07B8814AD99D0D8__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_EBA1DA59141868AB(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A07B8814AD99D0D8_METHOD_2_EBA1DA59141868AB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A07B8814AD99D0D8_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A07B8814AD99D0D8_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UICircleTransition*>* Method_2_E6D0AF02E91804D2(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UICircleTransition*>*(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A07B8814AD99D0D8_METHOD_2_E6D0AF02E91804D2_OFFSET))(this, a1, a2);
	}
};
