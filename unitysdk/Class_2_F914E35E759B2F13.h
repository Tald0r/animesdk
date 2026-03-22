#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CLASS_2_F914E35E759B2F13_METHOD_2_4B641F764AEF5BEB_OFFSET UNITYSDK_OFFSET(0x681C6F0)
#define CLASS_2_F914E35E759B2F13_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x681C830)
#define CLASS_2_F914E35E759B2F13_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x681C920)
#define CLASS_2_F914E35E759B2F13__CTOR_OFFSET UNITYSDK_OFFSET(0x681C910)

inline static constexpr unsigned int Class_2_F914E35E759B2F13_TypeDefinitionIndex = 67439;

class Class_2_F914E35E759B2F13 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x18
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F914E35E759B2F13__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4B641F764AEF5BEB(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F914E35E759B2F13_METHOD_2_4B641F764AEF5BEB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F914E35E759B2F13_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F914E35E759B2F13_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
