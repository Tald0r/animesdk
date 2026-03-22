#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_5DBE7C5B2D932979_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x91D3B90)
#define CLASS_2_5DBE7C5B2D932979_METHOD_2_929BD2659F9FA6CA_OFFSET UNITYSDK_OFFSET(0x91D3940)
#define CLASS_2_5DBE7C5B2D932979_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x91D3CD0)
#define CLASS_2_5DBE7C5B2D932979__CTOR_OFFSET UNITYSDK_OFFSET(0x91D3CC0)

inline static constexpr unsigned int Class_2_5DBE7C5B2D932979_TypeDefinitionIndex = 44917;

class Class_2_5DBE7C5B2D932979 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x20
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x28
	::Class_2_A8F5ABF31E066ED4* Field_2_3; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x38
	::UnityEngine::RectTransform* Field_2_8; // 0x40
	::Class_2_A8F5ABF31E066ED4* Field_2_7; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x50
	::UnityEngine::GameObject* Field_2_6; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DBE7C5B2D932979__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_929BD2659F9FA6CA(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5DBE7C5B2D932979_METHOD_2_929BD2659F9FA6CA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DBE7C5B2D932979_METHOD_2_572E53F76E315839_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5DBE7C5B2D932979_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
