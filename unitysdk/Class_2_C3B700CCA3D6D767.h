#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_C3B700CCA3D6D767_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x9094190)
#define CLASS_2_C3B700CCA3D6D767_METHOD_2_4B641F764AEF5BEB_OFFSET UNITYSDK_OFFSET(0x9094000)
#define CLASS_2_C3B700CCA3D6D767_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x9094240)
#define CLASS_2_C3B700CCA3D6D767__CTOR_OFFSET UNITYSDK_OFFSET(0x9094230)

inline static constexpr unsigned int Class_2_C3B700CCA3D6D767_TypeDefinitionIndex = 68223;

class Class_2_C3B700CCA3D6D767 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x18
	::MoleMole::NotificationBadgeEx* Field_2_1; // 0x20
	::UnityEngine::RectTransform* Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3B700CCA3D6D767__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4B641F764AEF5BEB(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C3B700CCA3D6D767_METHOD_2_4B641F764AEF5BEB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3B700CCA3D6D767_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C3B700CCA3D6D767_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
