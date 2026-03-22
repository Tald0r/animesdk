#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_59FB33C471168022_Class_2_91EE61A16E3A7DF2_1;
class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_59FB33C471168022_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x666E370)
#define CLASS_2_59FB33C471168022_METHOD_2_8B7E7695FC17D6DD_OFFSET UNITYSDK_OFFSET(0x666E160)
#define CLASS_2_59FB33C471168022_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x666E420)
#define CLASS_2_59FB33C471168022_METHOD_2_CBC0149B5D954D19_OFFSET UNITYSDK_OFFSET(0x666DF90)
#define CLASS_2_59FB33C471168022__CTOR_OFFSET UNITYSDK_OFFSET(0x666E410)

inline static constexpr unsigned int Class_2_59FB33C471168022_TypeDefinitionIndex = 42560;

class Class_2_59FB33C471168022 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x20
	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_59FB33C471168022_Class_2_91EE61A16E3A7DF2_1*>*>* Field_2_3; // 0x28
	::Class_2_60DDD9C206686F44* Field_2_4; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59FB33C471168022__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CBC0149B5D954D19(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_59FB33C471168022_METHOD_2_CBC0149B5D954D19_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_59FB33C471168022_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59FB33C471168022_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_59FB33C471168022_Class_2_91EE61A16E3A7DF2_1*>*>* Method_2_8B7E7695FC17D6DD(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_59FB33C471168022_Class_2_91EE61A16E3A7DF2_1*>*>*(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_59FB33C471168022_METHOD_2_8B7E7695FC17D6DD_OFFSET))(this, a1, a2);
	}
};
