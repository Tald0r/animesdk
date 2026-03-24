#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_B382CAAA120A70DB_Class_2_E4D4EF8398E9F9EC;
namespace MoleMole { class MonoUIOverlordFeastMissionConfig; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_B382CAAA120A70DB_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0x92012B0)
#define CLASS_2_B382CAAA120A70DB_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x92016A0)
#define CLASS_2_B382CAAA120A70DB_METHOD_2_8B7E7695FC17D6DD_OFFSET UNITYSDK_OFFSET(0x9201490)
#define CLASS_2_B382CAAA120A70DB_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x9201790)
#define CLASS_2_B382CAAA120A70DB__CTOR_OFFSET UNITYSDK_OFFSET(0x9201780)

inline static constexpr unsigned int Class_2_B382CAAA120A70DB_TypeDefinitionIndex = 47902;

class Class_2_B382CAAA120A70DB : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_5; // 0x18
	::UnityEngine::RectTransform* Field_2_3; // 0x20
	::UnityEngine::RectTransform* Field_2_2; // 0x28
	::MoleMole::MonoUIOverlordFeastMissionConfig* Field_2_4; // 0x30
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x38
	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_B382CAAA120A70DB_Class_2_E4D4EF8398E9F9EC*>*>* Field_2_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B382CAAA120A70DB__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B382CAAA120A70DB_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B382CAAA120A70DB_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_B382CAAA120A70DB_Class_2_E4D4EF8398E9F9EC*>*>* Method_2_8B7E7695FC17D6DD(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_B382CAAA120A70DB_Class_2_E4D4EF8398E9F9EC*>*>*(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B382CAAA120A70DB_METHOD_2_8B7E7695FC17D6DD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B382CAAA120A70DB_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}
};
